
GstCheckABIStruct list[] = {
  {"GstAppSinkCallbacks", sizeof (GstAppSinkCallbacks), 28},
  {"GstAppSinkClass", sizeof (GstAppSinkClass), 404},
  {"GstAppSink", sizeof (GstAppSink), 432},
  {"GstAppSrcCallbacks", sizeof (GstAppSrcCallbacks), 28},
  {"GstAppSrcClass", sizeof (GstAppSrcClass), 412},
  {"GstAppSrc", sizeof (GstAppSrc), 416},
  {"GstAudioClockClass", sizeof (GstAudioClockClass), 192},
  {"GstAudioClock", sizeof (GstAudioClock), 232},
  {"GstAudioFilterClass", sizeof (GstAudioFilterClass), 396},
  {"GstAudioFilter", sizeof (GstAudioFilter), 504},
  {"GstAudioSinkClass", sizeof (GstAudioSinkClass), 432},
  {"GstAudioSink", sizeof (GstAudioSink), 488},
  {"GstAudioSrcClass", sizeof (GstAudioSrcClass), 460},
  {"GstAudioSrc", sizeof (GstAudioSrc), 488},
  {"GstBaseAudioSinkClass", sizeof (GstBaseAudioSinkClass), 388},
  {"GstBaseAudioSink", sizeof (GstBaseAudioSink), 464},
  {"GstBaseAudioSrcClass", sizeof (GstBaseAudioSrcClass), 416},
  {"GstBaseAudioSrc", sizeof (GstBaseAudioSrc), 464},
  {"GstBaseRTPAudioPayloadClass", sizeof (GstBaseRTPAudioPayloadClass), 288},
  {"GstBaseRTPAudioPayload", sizeof (GstBaseRTPAudioPayload), 384},
  {"GstBaseRTPDepayloadClass", sizeof (GstBaseRTPDepayloadClass), 280},
  {"GstBaseRTPDepayload", sizeof (GstBaseRTPDepayload), 328},
  {"GstBaseRTPPayloadClass", sizeof (GstBaseRTPPayloadClass), 272},
  {"GstBaseRTPPayload", sizeof (GstBaseRTPPayload), 336},
  {"GstCddaBaseSrcClass", sizeof (GstCddaBaseSrcClass), 432},
  {"GstCddaBaseSrc", sizeof (GstCddaBaseSrc), 528},
  {"GstCddaBaseSrcTrack", sizeof (GstCddaBaseSrcTrack), 36},
  {"GstColorBalanceChannelClass", sizeof (GstColorBalanceChannelClass), 88},
  {"GstColorBalanceChannel", sizeof (GstColorBalanceChannel), 24},
  {"GstColorBalanceInterface", sizeof (GstColorBalanceInterface), 44},
  {"GstDiscovererClass", sizeof (GstDiscovererClass), 96},
  {"GstDiscoverer", sizeof (GstDiscoverer), 32},
  {"GstFFTF32Complex", sizeof (GstFFTF32Complex), 8},
  {"GstFFTF32", sizeof (GstFFTF32), 28},
  {"GstFFTF64Complex", sizeof (GstFFTF64Complex), 16},
  {"GstFFTF64", sizeof (GstFFTF64), 28},
  {"GstFFTS16Complex", sizeof (GstFFTS16Complex), 4},
  {"GstFFTS16", sizeof (GstFFTS16), 28},
  {"GstFFTS32Complex", sizeof (GstFFTS32Complex), 8},
  {"GstFFTS32", sizeof (GstFFTS32), 28},
  {"GstMixerInterface", sizeof (GstMixerInterface), 72},
  {"GstMixerOptionsClass", sizeof (GstMixerOptionsClass), 100},
  {"GstMixerOptions", sizeof (GstMixerOptions), 52},
  {"GstMixerTrackClass", sizeof (GstMixerTrackClass), 84},
  {"GstMixerTrack", sizeof (GstMixerTrack), 32},
  {"GstNavigationInterface", sizeof (GstNavigationInterface), 28},
  {"GstPropertyProbeInterface", sizeof (GstPropertyProbeInterface), 44},
  {"gst_riff_acid", sizeof (gst_riff_acid), 24},
  {"gst_riff_dmlh", sizeof (gst_riff_dmlh), 4},
  {"gst_riff_index_entry", sizeof (gst_riff_index_entry), 16},
  {"gst_riff_strf_auds", sizeof (gst_riff_strf_auds), 16},
  {"gst_riff_strf_iavs", sizeof (gst_riff_strf_iavs), 32},
  {"gst_riff_strf_vids", sizeof (gst_riff_strf_vids), 40},
  {"gst_riff_strh", sizeof (gst_riff_strh), 48},
  {"GstRingBufferClass", sizeof (GstRingBufferClass), 172},
  {"GstRingBuffer", sizeof (GstRingBuffer), 232},
  {"GstRingBufferSpec", sizeof (GstRingBufferSpec), 120},
  {"GstRTCPPacket", sizeof (GstRTCPPacket), 36},
  {"GstRTPPayloadInfo", sizeof (GstRTPPayloadInfo), 24},
  {"GstRTSPExtensionInterface", sizeof (GstRTSPExtensionInterface), 60},
  {"GstRTSPMessage", sizeof (GstRTSPMessage), 28},
  {"GstRTSPRange", sizeof (GstRTSPRange), 8},
  {"GstRTSPTime", sizeof (GstRTSPTime), 16},
  {"GstRTSPTimeRange", sizeof (GstRTSPTimeRange), 40},
  {"GstRTSPTransport", sizeof (GstRTSPTransport), 76},
  {"GstRTSPUrl", sizeof (GstRTSPUrl), 32},
  {"GstRTSPWatchFuncs", sizeof (GstRTSPWatchFuncs), 40},
  {"GstSDPAttribute", sizeof (GstSDPAttribute), 8},
  {"GstSDPBandwidth", sizeof (GstSDPBandwidth), 8},
  {"GstSDPConnection", sizeof (GstSDPConnection), 20},
  {"GstSDPKey", sizeof (GstSDPKey), 8},
  {"GstSDPMedia", sizeof (GstSDPMedia), 44},
  {"GstSDPMessage", sizeof (GstSDPMessage), 96},
  {"GstSDPOrigin", sizeof (GstSDPOrigin), 24},
  {"GstSDPTime", sizeof (GstSDPTime), 12},
  {"GstSDPZone", sizeof (GstSDPZone), 8},
  {"GstStreamVolumeInterface", sizeof (GstStreamVolumeInterface), 24},
  {"GstTagDemuxClass", sizeof (GstTagDemuxClass), 284},
  {"GstTagDemux", sizeof (GstTagDemux), 160},
  {"GstTunerChannelClass", sizeof (GstTunerChannelClass), 92},
  {"GstTunerChannel", sizeof (GstTunerChannel), 40},
  {"GstTunerInterface", sizeof (GstTunerInterface), 76},
  {"GstTunerNormClass", sizeof (GstTunerNormClass), 84},
  {"GstTunerNorm", sizeof (GstTunerNorm), 40},
  {"GstVideoFilterClass", sizeof (GstVideoFilterClass), 376},
  {"GstVideoFilter", sizeof (GstVideoFilter), 376},
  {"GstVideoOrientationInterface", sizeof (GstVideoOrientationInterface), 56},
  {"GstVideoRectangle", sizeof (GstVideoRectangle), 16},
  {"GstVideoSinkClass", sizeof (GstVideoSinkClass), 384},
  {"GstVideoSink", sizeof (GstVideoSink), 432},
  {"GstVideoOverlayInterface", sizeof (GstVideoOverlayInterface), 32},
  {NULL, 0, 0}
};
