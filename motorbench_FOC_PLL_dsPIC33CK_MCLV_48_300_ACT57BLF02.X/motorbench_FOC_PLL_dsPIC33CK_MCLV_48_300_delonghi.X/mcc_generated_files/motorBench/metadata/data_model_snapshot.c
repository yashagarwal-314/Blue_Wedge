/*
 * data_model_snapshot.c
 * 
 * Snapshot of code generation data model.
 * This information is included in the executable file
 * and does not affect any memory content in the embedded device.
 */
 
__attribute__((section("diagnostics_cinfo, info"), keep)) char MCAF_data_model_snapshot[] =
  "{\"motor\": {\"Tfr\": 0.00171739474331,\"B\": 0.000150562510935,\"Lq\": 3.657e-0"
  "5,\"poleCount\": 6,\"rated_current\": 2.5,\"J\": 2.18811877794e-07,\"velocity\":"
  " {\"nominal\": 366.519142919,\"maximum\": 418.879020479,\"units\": \"rad\\/s\"},"
  "\"L\": 3.43168186399e-05,\"R\": 2.5,\"current\": {\"maximum\": {\"continuous\": "
  "2.5,\"peak\": 2.7},\"units\": \"A\"},\"Ld\": 3.20636372798e-05,\"Ke\": 0.0233369"
  "794554,\"id\": \"delongi_motor\"},\"controller\": {\"encoder\": {\"tracking_loop"
  "\": {\"zeta\": 1.5}},\"foc\": {\"feedback\": {\"voltage_delay\": 0}},\"pll\": {"
  "\"delay_match\": true,\"properties\": {\"reference\": false},\"keInverseScaling"
  "\": 1.0},\"operation\": {\"min_deceleration_time\": null},\"dyn_current\": {\"ma"
  "xgain\": 1.1},\"zsmt\": {\"errorLimit\": 0.99997,\"properties\": {\"independent"
  "\": true,\"reference\": false},\"duration\": {\"lockDelay\": 0.05},\"probe\": {"
  "\"accumGain\": 1.0}},\"fault_detect\": {\"recovery\": {\"attempts\": 3}}},\"meta"
  "data\": {\"MCC\": {\"architecture\": \"melody\",\"peripherals\": {\"instances\":"
  " [{\"name\": \"ADC1\",\"type\": \"adc\"},{\"name\": \"PWM\",\"type\": \"pwm_hs\""
  "},{\"name\": \"QEI1\",\"type\": \"qei\"},{\"name\": \"TMR1\",\"type\": \"timer\""
  "},{\"name\": \"SCCP1\",\"type\": \"timer\"},{\"name\": \"UART1\",\"type\": \"uar"
  "t\"},{\"name\": \"OPA1\",\"type\": \"opa\"},{\"name\": \"OPA2\",\"type\": \"opa"
  "\"},{\"name\": \"OPA3\",\"type\": \"opa\"}]},\"version\": \"5.6.0-d\",\"peripher"
  "al_library\": {\"name\": \"melody\",\"version\": \"NA\"}},\"data_model\": {\"sch"
  "ema_version\": 5},\"motorBench\": {\"commit_id\": \"6062ee969f17e173cb8502638f1e"
  "3c8ee7bea3fb\",\"version\": \"2.45.0\"},\"MCAF\": {\"build\": {\"commit_id\": \""
  "116330\",\"date_str\": \"2023 Feb 09\",\"hostname\": \"motor-control-mcaf-tags-b"
  "uilder-r7-2frc37-1-0ws3m-smcgr-kthrw\",\"time\": 1675959683.33,\"time_iso\": \"2"
  "023-02-09T16:21:23.327489\",\"time_str\": \"2023 Feb 09 16:21\",\"type\": \"rele"
  "ase\",\"username\": \"jenkins\",\"version\": \"R7\\/RC37\"},\"build_time\": 1675"
  "959683.33,\"build_time_iso\": \"2023-02-09T16:21:23.327489\",\"build_time_str\":"
  " \"2023 Feb 09 16:21\",\"commit_id\": \"116330\",\"version\": \"R7\\/RC37\"}},\""
  "scdata\": {\"setup\": {\"communications\": {\"baudrate\": 625000},\"analysis\": "
  "{\"spindown_time\": {\"units\": \"s\",\"value\": 1.0},\"max_motor_speed\": {\"un"
  "its\": \"rad\\/s mechanical\",\"value\": 2094.4}},\"calibration\": {\"vdc\": {\""
  "units\": \"V\",\"value\": 24.0},\"resistor\": {\"units\": \"ohms\",\"value\": 12"
  ".0}}}},\"autotune_result\": {\"current\": {\"Kp\": 1.79023907011,\"phase_margin"
  "\": 80.0,\"wc\": 16359.9864404,\"Ki\": 29288.2869121,\"pi_phase_lag\": 45.0},\"v"
  "elocity\": {\"Kp\": 0.00617667644366,\"phase_margin\": 65.0,\"wc\": 433.46945964"
  "2,\"Ki\": 0.472097964018,\"pi_phase_lag\": 10.0}},\"code_generation_tag_map\": {"
  "\"application\": \"sample\",\"diagnostics\": \"x2cscope\"},\"operating_range\": "
  "{\"velocity\": {\"units_qualifier\": \"mechanical\",\"units\": \"rad\\/s\",\"min"
  "imum\": 174.533}},\"build\": {\"hardware_spec\": \"mclv2:33ck256mp508_extopamp_p"
  "im\",\"normfactor_associations\": [{\"context\": null,\"annotations\": [{\"typer"
  "efs\": [\"MCAF_U_CURRENT_ABC\",\"MCAF_U_CURRENT_ALPHABETA\",\"MCAF_U_CURRENT_DQ"
  "\",\"MCAF_U_CURRENT\",\"MCAF_MOTOR_DATA.omegaCtrl.outMin\",\"MCAF_MOTOR_DATA.ome"
  "gaCtrl.outMax\"],\"unit\": \"I\",\"q\": 15},{\"typerefs\": [\"MCAF_MOTOR_DATA.om"
  "egaCtrl.integrator\"],\"unit\": \"I\",\"q\": 15},{\"typerefs\": [\"MCAF_U_VOLTAG"
  "E_ABC\",\"MCAF_U_VOLTAGE_ALPHABETA\",\"MCAF_U_VOLTAGE_DQ\",\"MCAF_U_VOLTAGE\",\""
  "MCAF_MOTOR_DATA.idCtrl.outMin\",\"MCAF_MOTOR_DATA.idCtrl.outMax\",\"MCAF_MOTOR_D"
  "ATA.iqCtrl.outMin\",\"MCAF_MOTOR_DATA.iqCtrl.outMax\"],\"unit\": \"V\",\"q\": 15"
  "},{\"typerefs\": [\"MCAF_MOTOR_DATA.idCtrl.integrator\",\"MCAF_MOTOR_DATA.iqCtrl"
  ".integrator\"],\"unit\": \"V\",\"q\": 31},{\"typerefs\": [\"MCAF_U_DUTYCYCLE_ABC"
  "\"],\"unit\": 1,\"q\": 15},{\"typerefs\": [\"MCAF_U_ANGLE_ELEC\"],\"unit\": \"th"
  "eta_e\",\"q\": 15},{\"typerefs\": [\"MCAF_U_ANGLE_MECH\"],\"unit\": \"theta_m\","
  "\"q\": 15},{\"typerefs\": [\"MCAF_U_VELOCITY_MECH\"],\"unit\": \"omega_m\",\"q\""
  ": 15},{\"typerefs\": [\"MCAF_U_VELOCITY_ELEC\"],\"unit\": \"omega_e\",\"q\": 15}"
  ",{\"typerefs\": [\"MCAF_U_VELOCITY_DTHETA_ELEC_DT\"],\"unit\": \"dtheta_elec_dt"
  "\",\"q\": 15},{\"typerefs\": [\"MCAF_U_TEMPERATURE\"],\"unit\": \"Temperature\","
  "\"q\": 15},{\"typerefs\": [\"MCAF_U_DIMENSIONLESS\",\"MCAF_U_DIMENSIONLESS_SINCO"
  "S\"],\"unit\": 1,\"q\": 15},{\"typerefs\": [\"MCAF_U_NORMALIZED_GAIN\"],\"unit\""
  ": 1,\"q\": 14}]}]},\"drive\": {\"iout\": {\"measurement\": {\"compensation\": {"
  "\"channels\": [\"a\",\"b\"],\"values\": {\"a\": [1.0,0.0],\"b\": [0.0,1.0]},\"of"
  "fset\": {\"range\": 0.03125,\"samples\": 128,\"filterGain\": 0.25}}},\"time_cons"
  "tant\": 5.971e-07,\"fullscale\": 22.044,\"maximum\": {\"continuous\": 16.79},\"u"
  "nits\": \"A\"},\"estimator\": {\"type\": \"pll\",\"runtimeSelect\": false,\"atpl"
  "l\": {\"tau1\": 0.0001,\"tau2\": 0.00219,\"kpfactor\": 1.9,\"kifactor\": 30},\"o"
  "mega1\": 732.0,\"tau\": 0.00219},\"flux_control\": {\"emag_tau\": 0.001638,\"idr"
  "ef_tau\": 0.006552},\"temperature\": {\"fullscale\": 327.68,\"units\": \"C\"},\""
  "pwm\": {\"adc_sampling_delay\": 0,\"period\": 5e-05,\"duty_cycle\": {\"maximum\""
  ": 0.945,\"minimum\": 0.014},\"deadtime\": 5.9e-07},\"mcaf\": {\"adc\": {\"trigge"
  "rSettings\": {\"noTrigger\": \"NO_TRIGGER\",\"trigger1\": \"PWM1_TRIGGER1\",\"tr"
  "igger2\": \"PWM1_TRIGGER2\"},\"channels\": {\"prefix\": \"MCAF_ADC_\",\"critical"
  "\": [\"PHASEA_CURRENT\",\"PHASEB_CURRENT\",\"PHASEC_CURRENT\",\"DCLINK_CURRENT\""
  ",\"DCLINK_VOLTAGE\"],\"required\": {\"single_channel\": [\"DCLINK_CURRENT\",\"DC"
  "LINK_VOLTAGE\",\"POTENTIOMETER\"],\"dual_channel\": [\"PHASEA_CURRENT\",\"PHASEB"
  "_CURRENT\",\"DCLINK_VOLTAGE\",\"POTENTIOMETER\"],\"triple_channel\": [\"PHASEA_C"
  "URRENT\",\"PHASEB_CURRENT\",\"PHASEC_CURRENT\",\"DCLINK_VOLTAGE\",\"POTENTIOMETE"
  "R\"]},\"optional\": [\"PHASEA_VOLTAGE\",\"PHASEB_VOLTAGE\",\"PHASEC_VOLTAGE\",\""
  "BRIDGE_TEMPERATURE\",\"ABSREF_VOLTAGE\"],\"fullList\": [{\"name\": \"PHASEA_CURR"
  "ENT\",\"c_fragment\": \"IphaseA\",\"description\": \"phase A current\"},{\"name"
  "\": \"PHASEB_CURRENT\",\"c_fragment\": \"IphaseB\",\"description\": \"phase B cu"
  "rrent\"},{\"name\": \"PHASEC_CURRENT\",\"c_fragment\": \"IphaseC\",\"description"
  "\": \"phase C current\"},{\"name\": \"PHASEA_VOLTAGE\",\"c_fragment\": \"VphaseA"
  "\",\"description\": \"phase A voltage\"},{\"name\": \"PHASEB_VOLTAGE\",\"c_fragm"
  "ent\": \"VphaseB\",\"description\": \"phase B voltage\"},{\"name\": \"PHASEC_VOL"
  "TAGE\",\"c_fragment\": \"VphaseC\",\"description\": \"phase C voltage\"},{\"name"
  "\": \"DCLINK_CURRENT\",\"c_fragment\": \"Ibus\",\"description\": \"DC link curre"
  "nt\"},{\"name\": \"DCLINK_VOLTAGE\",\"c_fragment\": \"Dclink\",\"description\": "
  "\"DC link voltage\"},{\"name\": \"POTENTIOMETER\",\"c_fragment\": \"Potentiomete"
  "r\",\"description\": \"potentiometer voltage\"},{\"name\": \"BRIDGE_TEMPERATURE"
  "\",\"c_fragment\": \"BridgeTemperature\",\"description\": \"bridge temperature v"
  "oltage\"},{\"name\": \"ABSREF_VOLTAGE\",\"c_fragment\": \"AbsoluteReferenceVolta"
  "ge\",\"description\": \"absolute reference voltage\"}]}}},\"metadata\": {\"name"
  "\": \"MCLV-48V-300W Development Board\",\"id\": \"mclv-48v-300w\"},\"vdc\": {\"n"
  "ominal\": 24.0,\"time_constant\": 2.87e-05,\"fullscale\": 75.9,\"maximum\": 48.0"
  ",\"units\": \"V\",\"minimum\": 12.0},\"configuration\": {\"metadata\": {\"capabi"
  "lity\": {\"adc\": {\"channel\": {\"ABSREF_VOLTAGE\": \"AN6\",\"PHASEB_VOLTAGE\":"
  " \"AN11\",\"PHASEB_CURRENT\": \"AN4\",\"PHASEA_VOLTAGE\": \"AN10\",\"PHASEC_CURR"
  "ENT\": \"AN16\",\"POTENTIOMETER\": \"AN17\",\"BRIDGE_TEMPERATURE\": \"AN18\",\"D"
  "CLINK_VOLTAGE\": \"AN15\",\"PHASEA_CURRENT\": \"AN1\",\"PHASEC_VOLTAGE\": \"AN12"
  "\",\"DCLINK_CURRENT\": \"AN0\"}},\"opamp\": \"internal\",\"buttonCount\": 2.0,\""
  "current_measure\": {\"a\": true,\"b\": true,\"c\": true,\"dc\": true}},\"scaling"
  "\": {\"temperature\": {\"bridge\": {\"offset\": 5000.0,\"gain\": 0.50354}}},\"pe"
  "ripherals\": {\"adc\": {\"core\": {\"names\": [\"Core0\",\"Core1\",\"SharedCore"
  "\"]}}},\"pim\": {\"algorithm\": {\"single_channel\": {\"supported\": true}},\"de"
  "vice\": \"33ck256mp508\",\"displayName\": \"dsPIC33CK256MP508\",\"id\": \"33ck25"
  "6mp508_dim\",\"opamp\": \"internal\",\"peripherals\": {\"adc\": {\"core\": {\"na"
  "mes\": [\"Core0\",\"Core1\",\"SharedCore\"]}}}},\"device\": \"33ck256mp508\",\"b"
  "oard\": {\"id\": \"mclv-48v-300w\"}},\"peripherals\": {\"adc\": {\"requestedDedC"
  "oreSamplingTimeData\": [{\"core\": \"Core0\",\"requestedSamplingTime_us\": 0.3},"
  "{\"core\": \"Core1\",\"requestedSamplingTime_us\": 0.3}],\"dataOutputFormat\": "
  "\"Fractional\",\"channelConfig\": [{\"channel\": \"AN1\",\"sign\": \"signed\",\""
  "core\": \"Core1\",\"customName\": \"MCAF_ADC_PHASEA_CURRENT\",\"inverted\": true"
  "},{\"channel\": \"AN4\",\"sign\": \"signed\",\"core\": \"Shared\",\"customName\""
  ": \"MCAF_ADC_PHASEB_CURRENT\",\"inverted\": true},{\"channel\": \"AN16\",\"sign"
  "\": \"signed\",\"core\": \"Shared\",\"customName\": \"MCAF_ADC_PHASEC_CURRENT\","
  "\"inverted\": true},{\"channel\": \"AN0\",\"sign\": \"signed\",\"core\": \"Core0"
  "\",\"customName\": \"MCAF_ADC_DCLINK_CURRENT\",\"inverted\": false},{\"channel\""
  ": \"AN15\",\"sign\": \"signed\",\"core\": \"Shared\",\"customName\": \"MCAF_ADC_"
  "DCLINK_VOLTAGE\"},{\"channel\": \"AN6\",\"sign\": \"unsigned\",\"core\": \"Share"
  "d\",\"customName\": \"MCAF_ADC_ABSREF_VOLTAGE\"},{\"channel\": \"AN17\",\"sign\""
  ": \"signed\",\"core\": \"Shared\",\"customName\": \"MCAF_ADC_POTENTIOMETER\"},{"
  "\"channel\": \"AN18\",\"sign\": \"unsigned\",\"core\": \"Shared\",\"customName\""
  ": \"MCAF_ADC_BRIDGE_TEMPERATURE\"},{\"channel\": \"AN10\",\"sign\": \"unsigned\""
  ",\"core\": \"Shared\",\"customName\": \"MCAF_ADC_PHASEA_VOLTAGE\"},{\"channel\":"
  " \"AN11\",\"sign\": \"unsigned\",\"core\": \"Shared\",\"customName\": \"MCAF_ADC"
  "_PHASEB_VOLTAGE\"},{\"channel\": \"AN12\",\"sign\": \"unsigned\",\"core\": \"Sha"
  "red\",\"customName\": \"MCAF_ADC_PHASEC_VOLTAGE\"}],\"customName\": \"MCC_ADC\","
  "\"interruptDriven\": false,\"requestedSharedSamplingTime_us\": 0.3,\"resolution"
  "\": 12.0},\"timer\": [{\"requestedTimerPeriod_ms\": 1.0,\"customName\": \"MCC_TM"
  "R_TICK\",\"interruptDriven\": true},{\"clkSrc\": \"FCY\",\"customName\": \"MCC_T"
  "MR_PROFILE\",\"interruptDriven\": false,\"clkPrescaler\": 1.0,\"periodCount\": 6"
  "5535.0}],\"oscillator\": {\"clockSource\": \"External Oscillator with PLL\",\"re"
  "questedSystemFrequency_Hz\": 0.0,\"defaultValue\": \"max-frequency\",\"setMaximu"
  "mSystemFrequency\": true,\"clockSourceFrequency\": 8000000.0},\"opamp\": [{\"cus"
  "tomName\": \"MCC_OPA_IDC\",\"enable\": true,\"instance\": 1.0},{\"customName\": "
  "\"MCC_OPA_IA\",\"enable\": true,\"instance\": 2.0},{\"customName\": \"MCC_OPA_IB"
  "\",\"enable\": true,\"instance\": 3.0}],\"qei\": [{\"noiseFilterEnable\": false,"
  "\"pinMapping\": [{\"pin\": \"RC4\",\"functionName\": \"A\",\"direction\": \"inpu"
  "t\"},{\"pin\": \"RC5\",\"functionName\": \"B\",\"direction\": \"input\"},{\"pin"
  "\": \"RD2\",\"functionName\": \"INDX\",\"direction\": \"input\"}],\"qeiOperation"
  "Mode\": \"Modulo Count mode\",\"indexPulseCaptureEnable\": false,\"homePulseCapt"
  "ureEnable\": false,\"homePulsePolarity\": false,\"customName\": \"MCC_QEI\",\"in"
  "dexPulsePolarity\": false}],\"wdt\": {\"wdtEnable\": true,\"requestedWdtPeriod_m"
  "s\": 1.0,\"wdtMode\": \"Non-Window mode\",\"wdtEnableType\": \"Software\"},\"pwm"
  "\": {\"synchronousUpdate\": true,\"duty_cycle\": {\"maximum\": 0.945,\"minimum\""
  ": 0.014},\"requestedDeadTime_us\": {\"defaultValue\": 0.59,\"maximum\": 6.0,\"mi"
  "nimum\": 0.385},\"customName\": \"MCC_PWM\",\"generatorMapping\": [{\"name\": \""
  "MOTOR1_PHASE_A\",\"generator\": 1.0},{\"name\": \"MOTOR1_PHASE_B\",\"generator\""
  ": 2.0},{\"name\": \"MOTOR1_PHASE_C\",\"generator\": 3.0}],\"interruptDriven\": f"
  "alse,\"faultInputPolarity\": \"Active-low\",\"frequency\": {\"defaultValue\": 20"
  "000.0,\"maximum\": 50000.0,\"minimum\": 1000.0},\"faultInputSource\": \"Device p"
  "in, PCI20\",\"polarity\": {\"lower\": \"Active-high\",\"upper\": \"Active-high\""
  "}},\"uart\": {\"baudRate\": 115200.0,\"pinMapping\": [{\"name\": \"TX\",\"pinSel"
  "ected\": \"RD14\"},{\"name\": \"RX\",\"pinSelected\": \"RD13\"}],\"stopBits\": 1"
  ".0,\"parity\": \"None\",\"dataSize\": 8.0,\"customName\": \"MCC_UART\",\"interru"
  "ptDriven\": false},\"gpio\": [{\"isWeakPullUp\": false,\"pinSelected\": \"RE12\""
  ",\"interruptOnChange\": \"none\",\"isWeakPullDown\": false,\"customName\": \"MCA"
  "F_LED1\",\"isAnalogPin\": false,\"direction\": \"output\",\"isOpenDrain\": false"
  "},{\"isWeakPullUp\": false,\"pinSelected\": \"RE13\",\"interruptOnChange\": \"no"
  "ne\",\"isWeakPullDown\": false,\"customName\": \"MCAF_LED2\",\"isAnalogPin\": fa"
  "lse,\"direction\": \"output\",\"isOpenDrain\": false},{\"isWeakPullUp\": false,"
  "\"pinSelected\": \"RE10\",\"interruptOnChange\": \"none\",\"isWeakPullDown\": fa"
  "lse,\"customName\": \"MCAF_BUTTON1\",\"isAnalogPin\": false,\"direction\": \"inp"
  "ut\",\"isOpenDrain\": false},{\"isWeakPullUp\": false,\"pinSelected\": \"RE11\","
  "\"interruptOnChange\": \"none\",\"isWeakPullDown\": false,\"customName\": \"MCAF"
  "_BUTTON2\",\"isAnalogPin\": false,\"direction\": \"input\",\"isOpenDrain\": fals"
  "e},{\"isWeakPullUp\": false,\"pinSelected\": \"RE8\",\"interruptOnChange\": \"no"
  "ne\",\"isWeakPullDown\": false,\"customName\": \"MCAF_TESTPOINT1\",\"isAnalogPin"
  "\": false,\"direction\": \"output\",\"isOpenDrain\": false}]},\"displayName\": "
  "\"MCLV-48V-300W\",\"name\": \"MCLV-48V-300W Inverter Board\",\"partNumber\": \"E"
  "V18H47A\",\"id\": \"mclv-48v-300w\",\"supportedPim\": [\"33ck256mp508_dim\",\"33"
  "ck64mc105_dim\"]},\"idc\": {\"maximum\": 2.9,\"units\": \"A\"},\"sampling_time\""
  ": {\"current\": 5e-05,\"velocity\": 0.001},\"processor\": {\"clock_frequency\": "
  "100000000.0,\"pim\": \"dsPIC33CK256MP508\",\"familyName\": \"dsPIC33CK256MP508\""
  ",\"device\": \"dsPIC33CK256MP508\"},\"vbus\": 24.0},\"config\": {\"ui\": {\"cont"
  "ent\": {\"current_measure-method\": \"dual_channel\",\"current_measure-single_ch"
  "annel-minimumTime\": 2.0,\"current_measure-single_channel-sampleDelay\": 0.0,\"c"
  "urrent_measure-opamp-full_input_range\": true,\"estimator-type\": \"pll\",\"esti"
  "mator-active-pll\": false,\"estimator-active-qei\": false,\"estimator-active-atp"
  "ll\": false,\"estimator-active-zsmt\": false,\"estimator-active-ideal\": false,"
  "\"operation-min_velocity_ratio\": 0.2,\"operation-startup_velocity_ratio\": 0.25"
  ",\"operation-max_velocity_ratio\": 1.25,\"operation-fullscale_base_ratio\": 1.5,"
  "\"operation-outer_loop_type\": \"velocity\",\"operation-saliency-threshold\": 1."
  "25,\"operation-slewrate-accel\": 0.5,\"operation-slewrate-decel\": 1.0,\"operati"
  "on-dyn_current_type\": \"none\",\"operation-stopping-type\": \"minimal_impact\","
  "\"operation-stopping-closed_loop_parameters-speed\": 0.05,\"operation-stopping-c"
  "losed_loop_parameters-time\": 0.5,\"operation-coastdown-end_velocity\": 0.05,\"o"
  "peration-coastdown-time\": 1.2,\"fault_inject-get_tf-div0\": false,\"fault_injec"
  "t-get_tf-missing_data\": false,\"fault_inject-get_tf-raise_value_error\": false,"
  "\"fault_inject-get_tf-raise_custom_error\": false,\"fault_inject-tf-tf_null\": f"
  "alse,\"fault_inject-tf-tf_jy\": false,\"fault_inject-tf-tf_jyex\": false,\"fault"
  "_inject-tf-div0\": false,\"fault_inject-tf-tau\": 0.0,\"flux_control-method\": "
  "\"none\",\"flux_control-eqn_based-ilimit-region_type\": \"quadratic\",\"flux_con"
  "trol-eqn_based-ilimit-id_limit\": 0.7,\"flux_control-eqn_based-ilimit-iq_limit\""
  ": 0.95,\"flux_control-eqn_based-fluxweak_enable\": false,\"flux_control-eqn_base"
  "d-fw-vdq_limit\": 0.95,\"flux_control-eqn_based-mtpa_enable\": false,\"deadtimec"
  "omp-method\": \"none\",\"deadtimecomp-perphase-current_sign_band\": 0.02,\"deadt"
  "imecomp-perphase-forward_gain\": 0.0,\"deadtimecomp-perphase-feedback_gain\": 0."
  "0,\"fault_detect-margin_uv\": 2.0,\"fault_detect-margin_ov\": 2.0,\"fault_detect"
  "-stall_detect_enable\": true,\"startup-Istartup\": 1.0,\"startup-t_rampup\": 25."
  "0,\"startup-t_align\": 0.0,\"startup-min_total_accel_time\": 250.0,\"startup-tor"
  "que_scale_accel\": 0.005,\"startup-torque_scale_slow_accel\": 0.1,\"startup-t_ho"
  "ld\": 0.0,\"startup-omega0\": 1.0,\"startup-theta_converge_rate\": 1.0,\"startup"
  "-method\": \"weathervane\",\"startup-damping-Imax\": 0.1,\"startup-damping-gainm"
  "ax\": 40.0,\"startup-damping-omega_min\": 0.4,\"overmodulation-vd_limit\": 1.0,"
  "\"overmodulation-vq_limit\": 1.15,\"overmodulation-include_duty_clipping\": true"
  ",\"pll-tau\": 2.19,\"pll-omega1\": 116.5,\"pll-velocity_filter_threshold\": 1.0,"
  "\"encoder-lines\": 250.0,\"encoder-index_present\": false,\"encoder-tracking_loo"
  "p-tau\": 1.5,\"encoder-qei_sync-method\": \"align\",\"encoder-qei_sync-align-t_a"
  "lign\": 0.5,\"encoder-qei_sync-align-angle_shift\": 30.0,\"encoder-qei_sync-alig"
  "n-angle_init\": -30.0,\"encoder-qei_sync-align_sweep-sweep_rate_pow\": 1.0,\"enc"
  "oder-qei_sync-align_sweep-setup_angle\": 45.0,\"encoder-qei_sync-pullout-pullout"
  "_slip\": 0.117,\"zsmt-excitation-kV\": 0.12,\"zsmt-excitation-kI\": 0.1,\"zsmt-p"
  "ll-zeta\": 1.5,\"zsmt-pll-tau\": 10.0,\"zsmt-pll-tau_lpf\": 0.0,\"zsmt-pll-execu"
  "tion_divider\": 2.0,\"zsmt-startup-align_delay\": 1.0,\"zsmt-startup-pll_lock_ti"
  "me\": 1.0,\"zsmt-startup-speed_limit\": 0.015,\"zsmt-startup-current_limit\": 0."
  "3,\"zsmt-startup-probe_duration\": 10.0,\"zsmt-startup-probe_slew_time\": 1.5,\""
  "zsmt-startup-probe_blanking_time\": 4.0,\"zsmt-hybrid-type\": \"minotaur\",\"zsm"
  "t-minotaur-voltage_limit-vd\": 0.45,\"zsmt-minotaur-voltage_limit-vq\": 0.78,\"z"
  "smt-minotaur-converge-angle\": 10.0,\"zsmt-minotaur-converge-duration\": 2.0,\"z"
  "smt-minotaur-velocity_threshold-slow\": 0.15,\"zsmt-minotaur-velocity_threshold-"
  "transition\": 0.2,\"zsmt-minotaur-velocity_threshold-fast\": 0.25,\"zsmt-angle_c"
  "orrection-current_gain\": 0.0,\"dyn_current1-peak_factor\": 1.0,\"dyn_current1-h"
  "orizon_factor\": 1.05,\"dyn_current1-tau\": 5.0,\"dyn_current1-nsamples\": 128.0"
  ",\"voltage_outerloop-tau_lpf\": 2.0,\"voltage_outerloop-Kp\": 0.1,\"voltage_oute"
  "rloop-tau\": 100.0,\"mcapi-isSquaredTau\": 1.0,\"mcapi-iqTau\": 1.0,\"mcapi-adcI"
  "srUserFunctions_enable\": false,\"board_service-uiServiceTiming\": 1.0,\"board_s"
  "ervice-uiButtonDebounceTime\": 7.0,\"board_service-uiButtonLongPressTime\": 2.5,"
  "\"test_harness-perturbation_asymmetric\": false,\"adc-vtempbridge\": false,\"adc"
  "-temp_bridge_params-threshold\": 50.0,\"adc-temp_bridge_params-tau_lpf\": 10.0,"
  "\"adc-temp_bridge_params-slewrate\": 4.0,\"adc-vabsref\": false,\"adc-vphasea\":"
  " false,\"adc-vphaseb\": false,\"adc-vphasec\": false},\"version\": {\"schema\": "
  "4.0,\"motorBench\": \"2.45.0\",\"MCAF\": \"R7\"},\"status\": {\"valid\": true}}}"
  "}";