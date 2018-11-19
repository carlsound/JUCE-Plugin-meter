/*
  ==============================================================================

    AudioMeter.cpp
    Created: 19 Nov 2018 6:18:23am
    Author:  John Carlson

  ==============================================================================
*/

#include "../JuceLibraryCode/JuceHeader.h"
#include "AudioMeter.h"

//==============================================================================
AudioMeter::AudioMeter()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.
    slider.reset (new Slider ("new slider"));
    addAndMakeVisible (slider.get());
    slider->setRange (0, 10, 0);
    slider->setSliderStyle (Slider::LinearHorizontal);
    slider->setTextBoxStyle (Slider::TextBoxLeft, false, 80, 20);
    slider->addListener (this);

    slider->setBounds (8, 32, 296, 24);

    label.reset (new Label ("new label",
                            TRANS("Frequency:")));
    addAndMakeVisible (label.get());
    label->setFont (Font (15.0f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centred);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    label->setBounds (88, 0, 150, 24);
    
    setSize (600, 150);
}

AudioMeter::~AudioMeter()
{
    slider = nullptr;
    label = nullptr;
}

void AudioMeter::paint (Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (Colours::white);
    g.setFont (14.0f);
    g.drawText ("AudioMeter", getLocalBounds(),
                Justification::centred, true);   // draw some placeholder text
}

void AudioMeter::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

}
