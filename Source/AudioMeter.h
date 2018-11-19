/*
  ==============================================================================

    AudioMeter.h
    Created: 19 Nov 2018 6:18:23am
    Author:  John Carlson

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
*/
class AudioMeter    : public Component,
                      public Slider::Listener
{
public:
    AudioMeter();
    ~AudioMeter();

    void paint (Graphics&) override;
    void resized() override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;

private:
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioMeter)
    std::unique_ptr<Slider> slider;
    std::unique_ptr<Label> label;
};
