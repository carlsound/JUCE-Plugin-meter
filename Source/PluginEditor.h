/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class JucepluginmeterAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    JucepluginmeterAudioProcessorEditor (JucepluginmeterAudioProcessor&);
    ~JucepluginmeterAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    JucepluginmeterAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (JucepluginmeterAudioProcessorEditor)
};
