module DummyRuntimeAnalyzerC {
  provides interface RuntimeAnalyzer;
}
implementation {
  inline command void RuntimeAnalyzer.startTask(uint8_t id) {
  }

  inline command void RuntimeAnalyzer.stopTask(uint8_t id) {
  }
}

