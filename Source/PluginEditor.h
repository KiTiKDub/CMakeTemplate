#pragma once

#include "PluginProcessor.h"
#include "BinaryData.h"
#include "juce_core/juce_core.h"
#include "GUI/KitikLookAndFeel.h"

//==============================================================================
class AudioPluginAudioProcessorEditor final : public juce::AudioProcessorEditor
{
public:
    explicit AudioPluginAudioProcessorEditor (AudioPluginAudioProcessor&);
    ~AudioPluginAudioProcessorEditor() override;

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    AudioPluginAudioProcessor& processorRef;

    Laf lnf;

    juce::URL url{"https://kwhaley5.gumroad.com/"};
    juce::HyperlinkButton gumroad{"Gumroad", url};

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (AudioPluginAudioProcessorEditor)
};
