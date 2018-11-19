/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
JucepluginmeterAudioProcessorEditor::JucepluginmeterAudioProcessorEditor (JucepluginmeterAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    //setSize (400, 300);
    frequencyControl = std::unique_ptr<FrequencyControl>(new FrequencyControl());
    addAndMakeVisible(frequencyControl.get());
    setBounds(frequencyControl->getBounds());
}

JucepluginmeterAudioProcessorEditor::~JucepluginmeterAudioProcessorEditor()
{
}

//==============================================================================
void JucepluginmeterAudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    //g.setColour (Colours::white);
    //g.setFont (15.0f);
    //g.drawFittedText ("Hello World!", getLocalBounds(), Justification::centred, 1);
}

void JucepluginmeterAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
