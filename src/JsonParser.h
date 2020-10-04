/*
This is purely for documentation purposes


=================================================
*/


// const size_t capacity = JSON_ARRAY_SIZE(221) + 221*JSON_OBJECT_SIZE(6) + 18290;
// DynamicJsonDocument doc(capacity);

// const char* json = "[{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"System: GIGABYTE X570 AORUS ELITE WIFI\",\"SensorName\":\"Virtual Memory Commited\",\"SensorValue\":\"16045\",\"SensorUnit\":\"MB\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"System: GIGABYTE X570 AORUS ELITE WIFI\",\"SensorName\":\"Virtual Memory Available\",\"SensorValue\":\"21535\",\"SensorUnit\":\"MB\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"System: GIGABYTE X570 AORUS ELITE WIFI\",\"SensorName\":\"Virtual Memory Load\",\"SensorValue\":\"42.6\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"System: GIGABYTE X570 AORUS ELITE WIFI\",\"SensorName\":\"Physical Memory Used\",\"SensorValue\":\"10534\",\"SensorUnit\":\"MB\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"System: GIGABYTE X570 AORUS ELITE WIFI\",\"SensorName\":\"Physical Memory Available\",\"SensorValue\":\"22182\",\"SensorUnit\":\"MB\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"System: GIGABYTE X570 AORUS ELITE WIFI\",\"SensorName\":\"Physical Memory Load\",\"SensorValue\":\"32.1\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"System: GIGABYTE X570 AORUS ELITE WIFI\",\"SensorName\":\"Page File Usage\",\"SensorValue\":\"1.84462697882401\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 0 VID\",\"SensorValue\":\"1.3875\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 1 VID\",\"SensorValue\":\"1.38125\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 2 VID\",\"SensorValue\":\"1.38125\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 3 VID\",\"SensorValue\":\"1.36875\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 4 VID\",\"SensorValue\":\"1.38125\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 5 VID\",\"SensorValue\":\"1.38125\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 0 Clock (perf #2/6)\",\"SensorValue\":\"4217.395\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 1 Clock (perf #1/4)\",\"SensorValue\":\"4217.395\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 2 Clock (perf #1/2)\",\"SensorValue\":\"4267.305\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 3 Clock (perf #4/3)\",\"SensorValue\":\"4192.44\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 4 Clock (perf #3/1)\",\"SensorValue\":\"4242.35\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 5 Clock (perf #5/5)\",\"SensorValue\":\"4217.395\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Bus Clock\",\"SensorValue\":\"99.82\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 0 T0 Effective Clock\",\"SensorValue\":\"2078.28818954614\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 0 T1 Effective Clock\",\"SensorValue\":\"1425.96567325495\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 1 T0 Effective Clock\",\"SensorValue\":\"2815.666912908\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 1 T1 Effective Clock\",\"SensorValue\":\"2050.68040287416\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 2 T0 Effective Clock\",\"SensorValue\":\"2504.94220299453\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 2 T1 Effective Clock\",\"SensorValue\":\"1691.53158368334\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 3 T0 Effective Clock\",\"SensorValue\":\"1470.33171062328\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 3 T1 Effective Clock\",\"SensorValue\":\"1447.54272503338\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 4 T0 Effective Clock\",\"SensorValue\":\"1798.27690297533\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 4 T1 Effective Clock\",\"SensorValue\":\"1411.35496798259\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 5 T0 Effective Clock\",\"SensorValue\":\"2402.61981055035\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 5 T1 Effective Clock\",\"SensorValue\":\"2168.10367097001\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Average Effective Clock\",\"SensorValue\":\"1938.77539611634\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 0 T0 Usage\",\"SensorValue\":\"46.8\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 0 T1 Usage\",\"SensorValue\":\"31.4\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 1 T0 Usage\",\"SensorValue\":\"66.4\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 1 T1 Usage\",\"SensorValue\":\"46.1\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 2 T0 Usage\",\"SensorValue\":\"51\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 2 T1 Usage\",\"SensorValue\":\"39.1\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 3 T0 Usage\",\"SensorValue\":\"30.7\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 3 T1 Usage\",\"SensorValue\":\"32.8\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 4 T0 Usage\",\"SensorValue\":\"39.1\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 4 T1 Usage\",\"SensorValue\":\"32.8\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 5 T0 Usage\",\"SensorValue\":\"56.6\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 5 T1 Usage\",\"SensorValue\":\"50.3\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Max CPU/Thread Usage\",\"SensorValue\":\"66.4\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Total CPU Usage\",\"SensorValue\":\"43.5916666666667\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 0 Ratio\",\"SensorValue\":\"42.25\",\"SensorUnit\":\"x\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 1 Ratio\",\"SensorValue\":\"42.25\",\"SensorUnit\":\"x\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 2 Ratio\",\"SensorValue\":\"42.75\",\"SensorUnit\":\"x\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 3 Ratio\",\"SensorValue\":\"42\",\"SensorUnit\":\"x\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 4 Ratio\",\"SensorValue\":\"42.5\",\"SensorUnit\":\"x\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X\",\"SensorName\":\"Core 5 Ratio\",\"SensorValue\":\"42.25\",\"SensorUnit\":\"x\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 0 C0 Residency\",\"SensorValue\":\"82.4584579467773\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 1 C0 Residency\",\"SensorValue\":\"91.6397247314453\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 2 C0 Residency\",\"SensorValue\":\"88.9279708862305\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 3 C0 Residency\",\"SensorValue\":\"77.9058456420898\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 4 C0 Residency\",\"SensorValue\":\"79.6983261108398\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 5 C0 Residency\",\"SensorValue\":\"87.8053131103516\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 0 C1 Residency\",\"SensorValue\":\"17.5415897369385\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 1 C1 Residency\",\"SensorValue\":\"8.36024761199951\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 2 C1 Residency\",\"SensorValue\":\"11.07200050354\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 3 C1 Residency\",\"SensorValue\":\"22.0940361022949\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 4 C1 Residency\",\"SensorValue\":\"20.3017082214355\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 5 C1 Residency\",\"SensorValue\":\"12.1946220397949\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 0 C6 Residency\",\"SensorValue\":\"0\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 1 C6 Residency\",\"SensorValue\":\"0\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 2 C6 Residency\",\"SensorValue\":\"0\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 3 C6 Residency\",\"SensorValue\":\"0\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 4 C6 Residency\",\"SensorValue\":\"0\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: C-State Residency\",\"SensorName\":\"Core 5 C6 Residency\",\"SensorValue\":\"0\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Memory Timings\",\"SensorName\":\"Memory Clock\",\"SensorValue\":\"1597.12\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Memory Timings\",\"SensorName\":\"Memory Clock Ratio\",\"SensorValue\":\"16\",\"SensorUnit\":\"x\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Memory Timings\",\"SensorName\":\"Tcas\",\"SensorValue\":\"16\",\"SensorUnit\":\"T\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Memory Timings\",\"SensorName\":\"Trcd\",\"SensorValue\":\"18\",\"SensorUnit\":\"T\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Memory Timings\",\"SensorName\":\"Trp\",\"SensorValue\":\"18\",\"SensorUnit\":\"T\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Memory Timings\",\"SensorName\":\"Tras\",\"SensorValue\":\"36\",\"SensorUnit\":\"T\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Memory Timings\",\"SensorName\":\"Trc\",\"SensorValue\":\"75\",\"SensorUnit\":\"T\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Memory Timings\",\"SensorName\":\"Trfc\",\"SensorValue\":\"560\",\"SensorUnit\":\"T\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Memory Timings\",\"SensorName\":\"Command Rate\",\"SensorValue\":\"1\",\"SensorUnit\":\"T\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"CPU (Tctl/Tdie)\",\"SensorValue\":\"52.875\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"CPU Die (average)\",\"SensorValue\":\"52.4099922180176\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"CPU CCD1 (Tdie)\",\"SensorValue\":\"52.75\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"CPU Core Voltage (SVI2 TFN)\",\"SensorValue\":\"1.375\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"SoC Voltage (SVI2 TFN)\",\"SensorValue\":\"1.08125\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"CPU Core VID (Effective)\",\"SensorValue\":\"1.4\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"CPU TDC\",\"SensorValue\":\"27.0484790802002\",\"SensorUnit\":\"A\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"CPU EDC\",\"SensorValue\":\"67.8825177356775\",\"SensorUnit\":\"A\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"CPU Package Power (SMU)\",\"SensorValue\":\"65.5874088925728\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"Core 0 Power (SMU)\",\"SensorValue\":\"5.07822085948493\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"Core 1 Power (SMU)\",\"SensorValue\":\"7.26546919499698\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"Core 2 Power (SMU)\",\"SensorValue\":\"6.59424847464259\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"Core 3 Power (SMU)\",\"SensorValue\":\"4.56006619155153\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"Core 4 Power (SMU)\",\"SensorValue\":\"4.85623136615255\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"Core 5 Power (SMU)\",\"SensorValue\":\"6.48535766485388\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"CPU Core Power\",\"SensorValue\":\"37.1929779052734\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"CPU SoC Power\",\"SensorValue\":\"16.8720855712891\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"Core+SoC Power\",\"SensorValue\":\"54.0650634765625\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"CPU PPT\",\"SensorValue\":\"64.1471862792969\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"Infinity Fabric Clock (FCLK)\",\"SensorValue\":\"1600\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"Memory Controller Clock (UCLK)\",\"SensorValue\":\"1600\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"CPU PPT Limit\",\"SensorValue\":\"50.1149892807007\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"CPU TDC Limit\",\"SensorValue\":\"33.8105988502502\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"CPU EDC Limit\",\"SensorValue\":\"54.306014188542\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"Thermal Throttling (HTC)\",\"SensorValue\":\"0\",\"SensorUnit\":\"Yes/No\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"Thermal Throttling (PROCHOT CPU)\",\"SensorValue\":\"0\",\"SensorUnit\":\"Yes/No\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"CPU [#0]: AMD Ryzen 5 3600X: Enhanced\",\"SensorName\":\"Thermal Throttling (PROCHOT EXT)\",\"SensorValue\":\"0\",\"SensorUnit\":\"Yes/No\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (AMD X570)\",\"SensorName\":\"Chipset\",\"SensorValue\":\"67.25\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"System1\",\"SensorValue\":\"35\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"System2\",\"SensorValue\":\"38\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"CPU\",\"SensorValue\":\"52\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"PCIEX16_1\",\"SensorValue\":\"42\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"VRM MOS\",\"SensorValue\":\"45\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"Chipset\",\"SensorValue\":\"50\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"Vcore\",\"SensorValue\":\"1.38\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"+3.3V\",\"SensorValue\":\"3.304596\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"+12V\",\"SensorValue\":\"12.24\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"+5V\",\"SensorValue\":\"4.98\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"CPU VCORE SOC\",\"SensorValue\":\"1.092\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"CPU VDDP\",\"SensorValue\":\"0.912\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"DRAM\",\"SensorValue\":\"1.38\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"3VSB\",\"SensorValue\":\"3.288\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"VBAT\",\"SensorValue\":\"3.072\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"AVCC3\",\"SensorValue\":\"3.072\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"PCH\",\"SensorValue\":\"1674\",\"SensorUnit\":\"RPM\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"CPU OPT\",\"SensorValue\":\"2766\",\"SensorUnit\":\"RPM\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)\",\"SensorName\":\"Chassis Intrusion\",\"SensorValue\":\"0\",\"SensorUnit\":\"Yes/No\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)\",\"SensorName\":\"VR Loop1\",\"SensorValue\":\"65\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)\",\"SensorName\":\"VR VOUT\",\"SensorValue\":\"1.376\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)\",\"SensorName\":\"VR VIN\",\"SensorValue\":\"12.074\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)\",\"SensorName\":\"Current (IOUT)\",\"SensorValue\":\"31.8\",\"SensorUnit\":\"A\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)\",\"SensorName\":\"Current (IIN)\",\"SensorValue\":\"4.93\",\"SensorUnit\":\"A\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)\",\"SensorName\":\"Power (POUT)\",\"SensorValue\":\"53\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)\",\"SensorName\":\"Power (Input)\",\"SensorValue\":\"61\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)\",\"SensorName\":\"VR Loop1\",\"SensorValue\":\"60\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)\",\"SensorName\":\"VR VOUT\",\"SensorValue\":\"1.077\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)\",\"SensorName\":\"VR VIN\",\"SensorValue\":\"12.104\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)\",\"SensorName\":\"Current (IOUT)\",\"SensorValue\":\"16.5\",\"SensorUnit\":\"A\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)\",\"SensorName\":\"Current (IIN)\",\"SensorValue\":\"4.7\",\"SensorUnit\":\"A\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)\",\"SensorName\":\"Power (POUT)\",\"SensorValue\":\"15\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)\",\"SensorName\":\"Power (Input)\",\"SensorValue\":\"59\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"DIMM Temperature Sensor\",\"SensorName\":\"DIMM[2] Temperature\",\"SensorValue\":\"52.5\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"DIMM Temperature Sensor\",\"SensorName\":\"DIMM[3] Temperature\",\"SensorValue\":\"52.25\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"S.M.A.R.T.: INTEL SSDPEKNW020T8 (PHNH932305752P0C)\",\"SensorName\":\"Drive Temperature\",\"SensorValue\":\"40\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"S.M.A.R.T.: INTEL SSDPEKNW020T8 (PHNH932305752P0C)\",\"SensorName\":\"Drive Remaining Life\",\"SensorValue\":\"100\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"S.M.A.R.T.: INTEL SSDPEKNW020T8 (PHNH932305752P0C)\",\"SensorName\":\"Drive Failure\",\"SensorValue\":\"0\",\"SensorUnit\":\"Yes/No\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"S.M.A.R.T.: INTEL SSDPEKNW020T8 (PHNH932305752P0C)\",\"SensorName\":\"Drive Warning\",\"SensorValue\":\"0\",\"SensorUnit\":\"Yes/No\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"S.M.A.R.T.: INTEL SSDPEKNW020T8 (PHNH932305752P0C)\",\"SensorName\":\"Total Host Writes\",\"SensorValue\":\"9203\",\"SensorUnit\":\"GB\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"S.M.A.R.T.: INTEL SSDPEKNW020T8 (PHNH932305752P0C)\",\"SensorName\":\"Total Host Reads\",\"SensorValue\":\"18101\",\"SensorUnit\":\"GB\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Drive: INTEL SSDPEKNW020T8 (PHNH932305752P0C)\",\"SensorName\":\"Read Activity\",\"SensorValue\":\"2.562\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Drive: INTEL SSDPEKNW020T8 (PHNH932305752P0C)\",\"SensorName\":\"Write Activity\",\"SensorValue\":\"0.41\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Drive: INTEL SSDPEKNW020T8 (PHNH932305752P0C)\",\"SensorName\":\"Total Activity\",\"SensorValue\":\"2.972\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Drive: INTEL SSDPEKNW020T8 (PHNH932305752P0C)\",\"SensorName\":\"Read Rate\",\"SensorValue\":\"0.781\",\"SensorUnit\":\"MB/s\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Drive: INTEL SSDPEKNW020T8 (PHNH932305752P0C)\",\"SensorName\":\"Write Rate\",\"SensorValue\":\"2.744\",\"SensorUnit\":\"MB/s\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Drive: INTEL SSDPEKNW020T8 (PHNH932305752P0C)\",\"SensorName\":\"Read Total\",\"SensorValue\":\"148992\",\"SensorUnit\":\"MB\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Drive: INTEL SSDPEKNW020T8 (PHNH932305752P0C)\",\"SensorName\":\"Write Total\",\"SensorValue\":\"142763\",\"SensorUnit\":\"MB\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Corsair CLCP\",\"SensorName\":\"+12V\",\"SensorValue\":\"0\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Corsair CLCP\",\"SensorName\":\"+5V\",\"SensorValue\":\"12.186\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Corsair CLCP\",\"SensorName\":\"+3.3V\",\"SensorValue\":\"4.866\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Temperature\",\"SensorValue\":\"52\",\"SensorUnit\":\"Â°C\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Core Voltage\",\"SensorValue\":\"0.74375\",\"SensorUnit\":\"V\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Fan1\",\"SensorValue\":\"0\",\"SensorUnit\":\"RPM\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Power\",\"SensorValue\":\"37.098\",\"SensorUnit\":\"W\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Clock\",\"SensorValue\":\"1530\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Memory Clock\",\"SensorValue\":\"7000.98\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Video Clock\",\"SensorValue\":\"1410\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Core Load\",\"SensorValue\":\"4\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Memory Controller Load\",\"SensorValue\":\"3\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Video Engine Load\",\"SensorValue\":\"4\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Bus Load\",\"SensorValue\":\"0\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Memory Usage\",\"SensorValue\":\"33.9168548583984\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU D3D Usage\",\"SensorValue\":\"5.59385234899329\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Video Decode 0 Usage\",\"SensorValue\":\"4.53221476510067\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Video Encode 0 Usage\",\"SensorValue\":\"0\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Computing (Compute_0) Usage\",\"SensorValue\":\"0\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Computing (Compute_1) Usage\",\"SensorValue\":\"0\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU VR Usage\",\"SensorValue\":\"0\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Fan1\",\"SensorValue\":\"6\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"Performance Limit - Power\",\"SensorValue\":\"0\",\"SensorUnit\":\"Yes/No\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"Performance Limit - Thermal\",\"SensorValue\":\"0\",\"SensorUnit\":\"Yes/No\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"Performance Limit - Reliability Voltage\",\"SensorValue\":\"0\",\"SensorUnit\":\"Yes/No\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"Performance Limit - Max Operating Voltage\",\"SensorValue\":\"0\",\"SensorUnit\":\"Yes/No\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"Performance Limit - Utilization\",\"SensorValue\":\"16\",\"SensorUnit\":\"Yes/No\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"Performance Limit - SLI GPUBoost Sync\",\"SensorValue\":\"0\",\"SensorUnit\":\"Yes/No\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"Total GPU Power (normalized) [% of TDP]\",\"SensorValue\":\"30.102\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"Total GPU Power [% of TDP]\",\"SensorValue\":\"29.678\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU Memory Allocated\",\"SensorValue\":\"2083.8515625\",\"SensorUnit\":\"MB\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU D3D Memory Dedicated\",\"SensorValue\":\"1938.41796875\",\"SensorUnit\":\"MB\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"GPU D3D Memory Dynamic\",\"SensorValue\":\"118.69921875\",\"SensorUnit\":\"MB\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"GPU [#0]: NVIDIA GeForce GTX 1660 Super: \",\"SensorName\":\"PCIe Link Speed\",\"SensorValue\":\"8\",\"SensorUnit\":\"GT/s\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"RTSS\",\"SensorName\":\"Frames per Second\",\"SensorValue\":\"1.79999995231628\",\"SensorUnit\":\"FPS\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Network: Intel I211AT Copper (Pearsonville) Network Adapter\",\"SensorName\":\"Total DL\",\"SensorValue\":\"57712.6176309586\",\"SensorUnit\":\"MB\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Network: Intel I211AT Copper (Pearsonville) Network Adapter\",\"SensorName\":\"Total UP\",\"SensorValue\":\"1729.46013355255\",\"SensorUnit\":\"MB\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Network: Intel I211AT Copper (Pearsonville) Network Adapter\",\"SensorName\":\"Current DL rate\",\"SensorValue\":\"96.2527989803966\",\"SensorUnit\":\"KB/s\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Network: Intel I211AT Copper (Pearsonville) Network Adapter\",\"SensorName\":\"Current UP rate\",\"SensorValue\":\"256.35095693443\",\"SensorUnit\":\"KB/s\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"HWiNFO\",\"SensorClass\":\"Windows Hardware Errors (WHEA)\",\"SensorName\":\"Total Errors\",\"SensorValue\":\"0\",\"SensorUnit\":\"\",\"SensorUpdateTime\":1601752166},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"AMD Ryzen 5 3600X 6-Core Processor: CPU Core #1\",\"SensorValue\":\"17.59361\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"AMD Ryzen 5 3600X 6-Core Processor: CPU Core #2\",\"SensorValue\":\"12.07323\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"AMD Ryzen 5 3600X 6-Core Processor: CPU Core #3\",\"SensorValue\":\"30.72136\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"AMD Ryzen 5 3600X 6-Core Processor: CPU Core #4\",\"SensorValue\":\"16.43722\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"AMD Ryzen 5 3600X 6-Core Processor: CPU Core #5\",\"SensorValue\":\"19.26211\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"AMD Ryzen 5 3600X 6-Core Processor: CPU Core #6\",\"SensorValue\":\"15.11839\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"AMD Ryzen 5 3600X 6-Core Processor: CPU Core #7\",\"SensorValue\":\"10.39372\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"AMD Ryzen 5 3600X 6-Core Processor: CPU Core #8\",\"SensorValue\":\"11.33535\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"AMD Ryzen 5 3600X 6-Core Processor: CPU Core #9\",\"SensorValue\":\"14.53469\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"AMD Ryzen 5 3600X 6-Core Processor: CPU Core #10\",\"SensorValue\":\"10.3827\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"AMD Ryzen 5 3600X 6-Core Processor: CPU Core #11\",\"SensorValue\":\"24.2456\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"AMD Ryzen 5 3600X 6-Core Processor: CPU Core #12\",\"SensorValue\":\"23.02037\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"AMD Ryzen 5 3600X 6-Core Processor: CPU Total\",\"SensorValue\":\"17.09319\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"Generic Memory: Memory\",\"SensorValue\":\"32.21276\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Data\",\"SensorName\":\"Generic Memory: Used Memory\",\"SensorValue\":\"10.29214\",\"SensorUnit\":null,\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Data\",\"SensorName\":\"Generic Memory: Available Memory\",\"SensorValue\":\"21.65836\",\"SensorUnit\":null,\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Temperature\",\"SensorName\":\"NVIDIA GeForce GTX 1660 SUPER: GPU Core\",\"SensorValue\":\"52\",\"SensorUnit\":\"C\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Clock\",\"SensorName\":\"NVIDIA GeForce GTX 1660 SUPER: GPU Core\",\"SensorValue\":\"1530\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Clock\",\"SensorName\":\"NVIDIA GeForce GTX 1660 SUPER: GPU Memory\",\"SensorValue\":\"7000.98\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Clock\",\"SensorName\":\"NVIDIA GeForce GTX 1660 SUPER: GPU Shader\",\"SensorValue\":\"0\",\"SensorUnit\":\"MHz\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"NVIDIA GeForce GTX 1660 SUPER: GPU Core\",\"SensorValue\":\"4\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"NVIDIA GeForce GTX 1660 SUPER: GPU Memory Controller\",\"SensorValue\":\"3\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"NVIDIA GeForce GTX 1660 SUPER: GPU Video Engine\",\"SensorValue\":\"4\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"NVIDIA GeForce GTX 1660 SUPER: GPU Memory\",\"SensorValue\":\"33.91685\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0},{\"SensorApp\":\"Open Hardware Monitor\",\"SensorClass\":\"Load\",\"SensorName\":\"Generic Hard Disk: Used Space\",\"SensorValue\":\"58.7275\",\"SensorUnit\":\"%\",\"SensorUpdateTime\":0}]";

// deserializeJson(doc, json);

// JsonObject root_0 = doc[0];
// const char* root_0_SensorApp = root_0["SensorApp"]; // "HWiNFO"
// const char* root_0_SensorClass = root_0["SensorClass"]; // "System: GIGABYTE X570 AORUS ELITE WIFI"
// const char* root_0_SensorName = root_0["SensorName"]; // "Virtual Memory Commited"
// const char* root_0_SensorValue = root_0["SensorValue"]; // "16045"
// const char* root_0_SensorUnit = root_0["SensorUnit"]; // "MB"
// long root_0_SensorUpdateTime = root_0["SensorUpdateTime"]; // 1601752166

// JsonObject root_1 = doc[1];
// const char* root_1_SensorApp = root_1["SensorApp"]; // "HWiNFO"
// const char* root_1_SensorClass = root_1["SensorClass"]; // "System: GIGABYTE X570 AORUS ELITE WIFI"
// const char* root_1_SensorName = root_1["SensorName"]; // "Virtual Memory Available"
// const char* root_1_SensorValue = root_1["SensorValue"]; // "21535"
// const char* root_1_SensorUnit = root_1["SensorUnit"]; // "MB"
// long root_1_SensorUpdateTime = root_1["SensorUpdateTime"]; // 1601752166

// JsonObject root_2 = doc[2];
// const char* root_2_SensorApp = root_2["SensorApp"]; // "HWiNFO"
// const char* root_2_SensorClass = root_2["SensorClass"]; // "System: GIGABYTE X570 AORUS ELITE WIFI"
// const char* root_2_SensorName = root_2["SensorName"]; // "Virtual Memory Load"
// const char* root_2_SensorValue = root_2["SensorValue"]; // "42.6"
// const char* root_2_SensorUnit = root_2["SensorUnit"]; // "%"
// long root_2_SensorUpdateTime = root_2["SensorUpdateTime"]; // 1601752166

// JsonObject root_3 = doc[3];
// const char* root_3_SensorApp = root_3["SensorApp"]; // "HWiNFO"
// const char* root_3_SensorClass = root_3["SensorClass"]; // "System: GIGABYTE X570 AORUS ELITE WIFI"
// const char* root_3_SensorName = root_3["SensorName"]; // "Physical Memory Used"
// const char* root_3_SensorValue = root_3["SensorValue"]; // "10534"
// const char* root_3_SensorUnit = root_3["SensorUnit"]; // "MB"
// long root_3_SensorUpdateTime = root_3["SensorUpdateTime"]; // 1601752166

// JsonObject root_4 = doc[4];
// const char* root_4_SensorApp = root_4["SensorApp"]; // "HWiNFO"
// const char* root_4_SensorClass = root_4["SensorClass"]; // "System: GIGABYTE X570 AORUS ELITE WIFI"
// const char* root_4_SensorName = root_4["SensorName"]; // "Physical Memory Available"
// const char* root_4_SensorValue = root_4["SensorValue"]; // "22182"
// const char* root_4_SensorUnit = root_4["SensorUnit"]; // "MB"
// long root_4_SensorUpdateTime = root_4["SensorUpdateTime"]; // 1601752166

// JsonObject root_5 = doc[5];
// const char* root_5_SensorApp = root_5["SensorApp"]; // "HWiNFO"
// const char* root_5_SensorClass = root_5["SensorClass"]; // "System: GIGABYTE X570 AORUS ELITE WIFI"
// const char* root_5_SensorName = root_5["SensorName"]; // "Physical Memory Load"
// const char* root_5_SensorValue = root_5["SensorValue"]; // "32.1"
// const char* root_5_SensorUnit = root_5["SensorUnit"]; // "%"
// long root_5_SensorUpdateTime = root_5["SensorUpdateTime"]; // 1601752166

// JsonObject root_6 = doc[6];
// const char* root_6_SensorApp = root_6["SensorApp"]; // "HWiNFO"
// const char* root_6_SensorClass = root_6["SensorClass"]; // "System: GIGABYTE X570 AORUS ELITE WIFI"
// const char* root_6_SensorName = root_6["SensorName"]; // "Page File Usage"
// const char* root_6_SensorValue = root_6["SensorValue"]; // "1.84462697882401"
// const char* root_6_SensorUnit = root_6["SensorUnit"]; // "%"
// long root_6_SensorUpdateTime = root_6["SensorUpdateTime"]; // 1601752166

// JsonObject root_7 = doc[7];
// const char* root_7_SensorApp = root_7["SensorApp"]; // "HWiNFO"
// const char* root_7_SensorClass = root_7["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_7_SensorName = root_7["SensorName"]; // "Core 0 VID"
// const char* root_7_SensorValue = root_7["SensorValue"]; // "1.3875"
// const char* root_7_SensorUnit = root_7["SensorUnit"]; // "V"
// long root_7_SensorUpdateTime = root_7["SensorUpdateTime"]; // 1601752166

// JsonObject root_8 = doc[8];
// const char* root_8_SensorApp = root_8["SensorApp"]; // "HWiNFO"
// const char* root_8_SensorClass = root_8["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_8_SensorName = root_8["SensorName"]; // "Core 1 VID"
// const char* root_8_SensorValue = root_8["SensorValue"]; // "1.38125"
// const char* root_8_SensorUnit = root_8["SensorUnit"]; // "V"
// long root_8_SensorUpdateTime = root_8["SensorUpdateTime"]; // 1601752166

// JsonObject root_9 = doc[9];
// const char* root_9_SensorApp = root_9["SensorApp"]; // "HWiNFO"
// const char* root_9_SensorClass = root_9["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_9_SensorName = root_9["SensorName"]; // "Core 2 VID"
// const char* root_9_SensorValue = root_9["SensorValue"]; // "1.38125"
// const char* root_9_SensorUnit = root_9["SensorUnit"]; // "V"
// long root_9_SensorUpdateTime = root_9["SensorUpdateTime"]; // 1601752166

// JsonObject root_10 = doc[10];
// const char* root_10_SensorApp = root_10["SensorApp"]; // "HWiNFO"
// const char* root_10_SensorClass = root_10["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_10_SensorName = root_10["SensorName"]; // "Core 3 VID"
// const char* root_10_SensorValue = root_10["SensorValue"]; // "1.36875"
// const char* root_10_SensorUnit = root_10["SensorUnit"]; // "V"
// long root_10_SensorUpdateTime = root_10["SensorUpdateTime"]; // 1601752166

// JsonObject root_11 = doc[11];
// const char* root_11_SensorApp = root_11["SensorApp"]; // "HWiNFO"
// const char* root_11_SensorClass = root_11["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_11_SensorName = root_11["SensorName"]; // "Core 4 VID"
// const char* root_11_SensorValue = root_11["SensorValue"]; // "1.38125"
// const char* root_11_SensorUnit = root_11["SensorUnit"]; // "V"
// long root_11_SensorUpdateTime = root_11["SensorUpdateTime"]; // 1601752166

// JsonObject root_12 = doc[12];
// const char* root_12_SensorApp = root_12["SensorApp"]; // "HWiNFO"
// const char* root_12_SensorClass = root_12["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_12_SensorName = root_12["SensorName"]; // "Core 5 VID"
// const char* root_12_SensorValue = root_12["SensorValue"]; // "1.38125"
// const char* root_12_SensorUnit = root_12["SensorUnit"]; // "V"
// long root_12_SensorUpdateTime = root_12["SensorUpdateTime"]; // 1601752166

// JsonObject root_13 = doc[13];
// const char* root_13_SensorApp = root_13["SensorApp"]; // "HWiNFO"
// const char* root_13_SensorClass = root_13["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_13_SensorName = root_13["SensorName"]; // "Core 0 Clock (perf #2/6)"
// const char* root_13_SensorValue = root_13["SensorValue"]; // "4217.395"
// const char* root_13_SensorUnit = root_13["SensorUnit"]; // "MHz"
// long root_13_SensorUpdateTime = root_13["SensorUpdateTime"]; // 1601752166

// JsonObject root_14 = doc[14];
// const char* root_14_SensorApp = root_14["SensorApp"]; // "HWiNFO"
// const char* root_14_SensorClass = root_14["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_14_SensorName = root_14["SensorName"]; // "Core 1 Clock (perf #1/4)"
// const char* root_14_SensorValue = root_14["SensorValue"]; // "4217.395"
// const char* root_14_SensorUnit = root_14["SensorUnit"]; // "MHz"
// long root_14_SensorUpdateTime = root_14["SensorUpdateTime"]; // 1601752166

// JsonObject root_15 = doc[15];
// const char* root_15_SensorApp = root_15["SensorApp"]; // "HWiNFO"
// const char* root_15_SensorClass = root_15["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_15_SensorName = root_15["SensorName"]; // "Core 2 Clock (perf #1/2)"
// const char* root_15_SensorValue = root_15["SensorValue"]; // "4267.305"
// const char* root_15_SensorUnit = root_15["SensorUnit"]; // "MHz"
// long root_15_SensorUpdateTime = root_15["SensorUpdateTime"]; // 1601752166

// JsonObject root_16 = doc[16];
// const char* root_16_SensorApp = root_16["SensorApp"]; // "HWiNFO"
// const char* root_16_SensorClass = root_16["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_16_SensorName = root_16["SensorName"]; // "Core 3 Clock (perf #4/3)"
// const char* root_16_SensorValue = root_16["SensorValue"]; // "4192.44"
// const char* root_16_SensorUnit = root_16["SensorUnit"]; // "MHz"
// long root_16_SensorUpdateTime = root_16["SensorUpdateTime"]; // 1601752166

// JsonObject root_17 = doc[17];
// const char* root_17_SensorApp = root_17["SensorApp"]; // "HWiNFO"
// const char* root_17_SensorClass = root_17["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_17_SensorName = root_17["SensorName"]; // "Core 4 Clock (perf #3/1)"
// const char* root_17_SensorValue = root_17["SensorValue"]; // "4242.35"
// const char* root_17_SensorUnit = root_17["SensorUnit"]; // "MHz"
// long root_17_SensorUpdateTime = root_17["SensorUpdateTime"]; // 1601752166

// JsonObject root_18 = doc[18];
// const char* root_18_SensorApp = root_18["SensorApp"]; // "HWiNFO"
// const char* root_18_SensorClass = root_18["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_18_SensorName = root_18["SensorName"]; // "Core 5 Clock (perf #5/5)"
// const char* root_18_SensorValue = root_18["SensorValue"]; // "4217.395"
// const char* root_18_SensorUnit = root_18["SensorUnit"]; // "MHz"
// long root_18_SensorUpdateTime = root_18["SensorUpdateTime"]; // 1601752166

// JsonObject root_19 = doc[19];
// const char* root_19_SensorApp = root_19["SensorApp"]; // "HWiNFO"
// const char* root_19_SensorClass = root_19["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_19_SensorName = root_19["SensorName"]; // "Bus Clock"
// const char* root_19_SensorValue = root_19["SensorValue"]; // "99.82"
// const char* root_19_SensorUnit = root_19["SensorUnit"]; // "MHz"
// long root_19_SensorUpdateTime = root_19["SensorUpdateTime"]; // 1601752166

// JsonObject root_20 = doc[20];
// const char* root_20_SensorApp = root_20["SensorApp"]; // "HWiNFO"
// const char* root_20_SensorClass = root_20["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_20_SensorName = root_20["SensorName"]; // "Core 0 T0 Effective Clock"
// const char* root_20_SensorValue = root_20["SensorValue"]; // "2078.28818954614"
// const char* root_20_SensorUnit = root_20["SensorUnit"]; // "MHz"
// long root_20_SensorUpdateTime = root_20["SensorUpdateTime"]; // 1601752166

// JsonObject root_21 = doc[21];
// const char* root_21_SensorApp = root_21["SensorApp"]; // "HWiNFO"
// const char* root_21_SensorClass = root_21["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_21_SensorName = root_21["SensorName"]; // "Core 0 T1 Effective Clock"
// const char* root_21_SensorValue = root_21["SensorValue"]; // "1425.96567325495"
// const char* root_21_SensorUnit = root_21["SensorUnit"]; // "MHz"
// long root_21_SensorUpdateTime = root_21["SensorUpdateTime"]; // 1601752166

// JsonObject root_22 = doc[22];
// const char* root_22_SensorApp = root_22["SensorApp"]; // "HWiNFO"
// const char* root_22_SensorClass = root_22["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_22_SensorName = root_22["SensorName"]; // "Core 1 T0 Effective Clock"
// const char* root_22_SensorValue = root_22["SensorValue"]; // "2815.666912908"
// const char* root_22_SensorUnit = root_22["SensorUnit"]; // "MHz"
// long root_22_SensorUpdateTime = root_22["SensorUpdateTime"]; // 1601752166

// JsonObject root_23 = doc[23];
// const char* root_23_SensorApp = root_23["SensorApp"]; // "HWiNFO"
// const char* root_23_SensorClass = root_23["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_23_SensorName = root_23["SensorName"]; // "Core 1 T1 Effective Clock"
// const char* root_23_SensorValue = root_23["SensorValue"]; // "2050.68040287416"
// const char* root_23_SensorUnit = root_23["SensorUnit"]; // "MHz"
// long root_23_SensorUpdateTime = root_23["SensorUpdateTime"]; // 1601752166

// JsonObject root_24 = doc[24];
// const char* root_24_SensorApp = root_24["SensorApp"]; // "HWiNFO"
// const char* root_24_SensorClass = root_24["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_24_SensorName = root_24["SensorName"]; // "Core 2 T0 Effective Clock"
// const char* root_24_SensorValue = root_24["SensorValue"]; // "2504.94220299453"
// const char* root_24_SensorUnit = root_24["SensorUnit"]; // "MHz"
// long root_24_SensorUpdateTime = root_24["SensorUpdateTime"]; // 1601752166

// JsonObject root_25 = doc[25];
// const char* root_25_SensorApp = root_25["SensorApp"]; // "HWiNFO"
// const char* root_25_SensorClass = root_25["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_25_SensorName = root_25["SensorName"]; // "Core 2 T1 Effective Clock"
// const char* root_25_SensorValue = root_25["SensorValue"]; // "1691.53158368334"
// const char* root_25_SensorUnit = root_25["SensorUnit"]; // "MHz"
// long root_25_SensorUpdateTime = root_25["SensorUpdateTime"]; // 1601752166

// JsonObject root_26 = doc[26];
// const char* root_26_SensorApp = root_26["SensorApp"]; // "HWiNFO"
// const char* root_26_SensorClass = root_26["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_26_SensorName = root_26["SensorName"]; // "Core 3 T0 Effective Clock"
// const char* root_26_SensorValue = root_26["SensorValue"]; // "1470.33171062328"
// const char* root_26_SensorUnit = root_26["SensorUnit"]; // "MHz"
// long root_26_SensorUpdateTime = root_26["SensorUpdateTime"]; // 1601752166

// JsonObject root_27 = doc[27];
// const char* root_27_SensorApp = root_27["SensorApp"]; // "HWiNFO"
// const char* root_27_SensorClass = root_27["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_27_SensorName = root_27["SensorName"]; // "Core 3 T1 Effective Clock"
// const char* root_27_SensorValue = root_27["SensorValue"]; // "1447.54272503338"
// const char* root_27_SensorUnit = root_27["SensorUnit"]; // "MHz"
// long root_27_SensorUpdateTime = root_27["SensorUpdateTime"]; // 1601752166

// JsonObject root_28 = doc[28];
// const char* root_28_SensorApp = root_28["SensorApp"]; // "HWiNFO"
// const char* root_28_SensorClass = root_28["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_28_SensorName = root_28["SensorName"]; // "Core 4 T0 Effective Clock"
// const char* root_28_SensorValue = root_28["SensorValue"]; // "1798.27690297533"
// const char* root_28_SensorUnit = root_28["SensorUnit"]; // "MHz"
// long root_28_SensorUpdateTime = root_28["SensorUpdateTime"]; // 1601752166

// JsonObject root_29 = doc[29];
// const char* root_29_SensorApp = root_29["SensorApp"]; // "HWiNFO"
// const char* root_29_SensorClass = root_29["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_29_SensorName = root_29["SensorName"]; // "Core 4 T1 Effective Clock"
// const char* root_29_SensorValue = root_29["SensorValue"]; // "1411.35496798259"
// const char* root_29_SensorUnit = root_29["SensorUnit"]; // "MHz"
// long root_29_SensorUpdateTime = root_29["SensorUpdateTime"]; // 1601752166

// JsonObject root_30 = doc[30];
// const char* root_30_SensorApp = root_30["SensorApp"]; // "HWiNFO"
// const char* root_30_SensorClass = root_30["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_30_SensorName = root_30["SensorName"]; // "Core 5 T0 Effective Clock"
// const char* root_30_SensorValue = root_30["SensorValue"]; // "2402.61981055035"
// const char* root_30_SensorUnit = root_30["SensorUnit"]; // "MHz"
// long root_30_SensorUpdateTime = root_30["SensorUpdateTime"]; // 1601752166

// JsonObject root_31 = doc[31];
// const char* root_31_SensorApp = root_31["SensorApp"]; // "HWiNFO"
// const char* root_31_SensorClass = root_31["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_31_SensorName = root_31["SensorName"]; // "Core 5 T1 Effective Clock"
// const char* root_31_SensorValue = root_31["SensorValue"]; // "2168.10367097001"
// const char* root_31_SensorUnit = root_31["SensorUnit"]; // "MHz"
// long root_31_SensorUpdateTime = root_31["SensorUpdateTime"]; // 1601752166

// JsonObject root_32 = doc[32];
// const char* root_32_SensorApp = root_32["SensorApp"]; // "HWiNFO"
// const char* root_32_SensorClass = root_32["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_32_SensorName = root_32["SensorName"]; // "Average Effective Clock"
// const char* root_32_SensorValue = root_32["SensorValue"]; // "1938.77539611634"
// const char* root_32_SensorUnit = root_32["SensorUnit"]; // "MHz"
// long root_32_SensorUpdateTime = root_32["SensorUpdateTime"]; // 1601752166

// JsonObject root_33 = doc[33];
// const char* root_33_SensorApp = root_33["SensorApp"]; // "HWiNFO"
// const char* root_33_SensorClass = root_33["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_33_SensorName = root_33["SensorName"]; // "Core 0 T0 Usage"
// const char* root_33_SensorValue = root_33["SensorValue"]; // "46.8"
// const char* root_33_SensorUnit = root_33["SensorUnit"]; // "%"
// long root_33_SensorUpdateTime = root_33["SensorUpdateTime"]; // 1601752166

// JsonObject root_34 = doc[34];
// const char* root_34_SensorApp = root_34["SensorApp"]; // "HWiNFO"
// const char* root_34_SensorClass = root_34["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_34_SensorName = root_34["SensorName"]; // "Core 0 T1 Usage"
// const char* root_34_SensorValue = root_34["SensorValue"]; // "31.4"
// const char* root_34_SensorUnit = root_34["SensorUnit"]; // "%"
// long root_34_SensorUpdateTime = root_34["SensorUpdateTime"]; // 1601752166

// JsonObject root_35 = doc[35];
// const char* root_35_SensorApp = root_35["SensorApp"]; // "HWiNFO"
// const char* root_35_SensorClass = root_35["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_35_SensorName = root_35["SensorName"]; // "Core 1 T0 Usage"
// const char* root_35_SensorValue = root_35["SensorValue"]; // "66.4"
// const char* root_35_SensorUnit = root_35["SensorUnit"]; // "%"
// long root_35_SensorUpdateTime = root_35["SensorUpdateTime"]; // 1601752166

// JsonObject root_36 = doc[36];
// const char* root_36_SensorApp = root_36["SensorApp"]; // "HWiNFO"
// const char* root_36_SensorClass = root_36["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_36_SensorName = root_36["SensorName"]; // "Core 1 T1 Usage"
// const char* root_36_SensorValue = root_36["SensorValue"]; // "46.1"
// const char* root_36_SensorUnit = root_36["SensorUnit"]; // "%"
// long root_36_SensorUpdateTime = root_36["SensorUpdateTime"]; // 1601752166

// JsonObject root_37 = doc[37];
// const char* root_37_SensorApp = root_37["SensorApp"]; // "HWiNFO"
// const char* root_37_SensorClass = root_37["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_37_SensorName = root_37["SensorName"]; // "Core 2 T0 Usage"
// const char* root_37_SensorValue = root_37["SensorValue"]; // "51"
// const char* root_37_SensorUnit = root_37["SensorUnit"]; // "%"
// long root_37_SensorUpdateTime = root_37["SensorUpdateTime"]; // 1601752166

// JsonObject root_38 = doc[38];
// const char* root_38_SensorApp = root_38["SensorApp"]; // "HWiNFO"
// const char* root_38_SensorClass = root_38["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_38_SensorName = root_38["SensorName"]; // "Core 2 T1 Usage"
// const char* root_38_SensorValue = root_38["SensorValue"]; // "39.1"
// const char* root_38_SensorUnit = root_38["SensorUnit"]; // "%"
// long root_38_SensorUpdateTime = root_38["SensorUpdateTime"]; // 1601752166

// JsonObject root_39 = doc[39];
// const char* root_39_SensorApp = root_39["SensorApp"]; // "HWiNFO"
// const char* root_39_SensorClass = root_39["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_39_SensorName = root_39["SensorName"]; // "Core 3 T0 Usage"
// const char* root_39_SensorValue = root_39["SensorValue"]; // "30.7"
// const char* root_39_SensorUnit = root_39["SensorUnit"]; // "%"
// long root_39_SensorUpdateTime = root_39["SensorUpdateTime"]; // 1601752166

// JsonObject root_40 = doc[40];
// const char* root_40_SensorApp = root_40["SensorApp"]; // "HWiNFO"
// const char* root_40_SensorClass = root_40["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_40_SensorName = root_40["SensorName"]; // "Core 3 T1 Usage"
// const char* root_40_SensorValue = root_40["SensorValue"]; // "32.8"
// const char* root_40_SensorUnit = root_40["SensorUnit"]; // "%"
// long root_40_SensorUpdateTime = root_40["SensorUpdateTime"]; // 1601752166

// JsonObject root_41 = doc[41];
// const char* root_41_SensorApp = root_41["SensorApp"]; // "HWiNFO"
// const char* root_41_SensorClass = root_41["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_41_SensorName = root_41["SensorName"]; // "Core 4 T0 Usage"
// const char* root_41_SensorValue = root_41["SensorValue"]; // "39.1"
// const char* root_41_SensorUnit = root_41["SensorUnit"]; // "%"
// long root_41_SensorUpdateTime = root_41["SensorUpdateTime"]; // 1601752166

// JsonObject root_42 = doc[42];
// const char* root_42_SensorApp = root_42["SensorApp"]; // "HWiNFO"
// const char* root_42_SensorClass = root_42["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_42_SensorName = root_42["SensorName"]; // "Core 4 T1 Usage"
// const char* root_42_SensorValue = root_42["SensorValue"]; // "32.8"
// const char* root_42_SensorUnit = root_42["SensorUnit"]; // "%"
// long root_42_SensorUpdateTime = root_42["SensorUpdateTime"]; // 1601752166

// JsonObject root_43 = doc[43];
// const char* root_43_SensorApp = root_43["SensorApp"]; // "HWiNFO"
// const char* root_43_SensorClass = root_43["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_43_SensorName = root_43["SensorName"]; // "Core 5 T0 Usage"
// const char* root_43_SensorValue = root_43["SensorValue"]; // "56.6"
// const char* root_43_SensorUnit = root_43["SensorUnit"]; // "%"
// long root_43_SensorUpdateTime = root_43["SensorUpdateTime"]; // 1601752166

// JsonObject root_44 = doc[44];
// const char* root_44_SensorApp = root_44["SensorApp"]; // "HWiNFO"
// const char* root_44_SensorClass = root_44["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_44_SensorName = root_44["SensorName"]; // "Core 5 T1 Usage"
// const char* root_44_SensorValue = root_44["SensorValue"]; // "50.3"
// const char* root_44_SensorUnit = root_44["SensorUnit"]; // "%"
// long root_44_SensorUpdateTime = root_44["SensorUpdateTime"]; // 1601752166

// JsonObject root_45 = doc[45];
// const char* root_45_SensorApp = root_45["SensorApp"]; // "HWiNFO"
// const char* root_45_SensorClass = root_45["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_45_SensorName = root_45["SensorName"]; // "Max CPU/Thread Usage"
// const char* root_45_SensorValue = root_45["SensorValue"]; // "66.4"
// const char* root_45_SensorUnit = root_45["SensorUnit"]; // "%"
// long root_45_SensorUpdateTime = root_45["SensorUpdateTime"]; // 1601752166

// JsonObject root_46 = doc[46];
// const char* root_46_SensorApp = root_46["SensorApp"]; // "HWiNFO"
// const char* root_46_SensorClass = root_46["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_46_SensorName = root_46["SensorName"]; // "Total CPU Usage"
// const char* root_46_SensorValue = root_46["SensorValue"]; // "43.5916666666667"
// const char* root_46_SensorUnit = root_46["SensorUnit"]; // "%"
// long root_46_SensorUpdateTime = root_46["SensorUpdateTime"]; // 1601752166

// JsonObject root_47 = doc[47];
// const char* root_47_SensorApp = root_47["SensorApp"]; // "HWiNFO"
// const char* root_47_SensorClass = root_47["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_47_SensorName = root_47["SensorName"]; // "Core 0 Ratio"
// const char* root_47_SensorValue = root_47["SensorValue"]; // "42.25"
// const char* root_47_SensorUnit = root_47["SensorUnit"]; // "x"
// long root_47_SensorUpdateTime = root_47["SensorUpdateTime"]; // 1601752166

// JsonObject root_48 = doc[48];
// const char* root_48_SensorApp = root_48["SensorApp"]; // "HWiNFO"
// const char* root_48_SensorClass = root_48["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_48_SensorName = root_48["SensorName"]; // "Core 1 Ratio"
// const char* root_48_SensorValue = root_48["SensorValue"]; // "42.25"
// const char* root_48_SensorUnit = root_48["SensorUnit"]; // "x"
// long root_48_SensorUpdateTime = root_48["SensorUpdateTime"]; // 1601752166

// JsonObject root_49 = doc[49];
// const char* root_49_SensorApp = root_49["SensorApp"]; // "HWiNFO"
// const char* root_49_SensorClass = root_49["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_49_SensorName = root_49["SensorName"]; // "Core 2 Ratio"
// const char* root_49_SensorValue = root_49["SensorValue"]; // "42.75"
// const char* root_49_SensorUnit = root_49["SensorUnit"]; // "x"
// long root_49_SensorUpdateTime = root_49["SensorUpdateTime"]; // 1601752166

// JsonObject root_50 = doc[50];
// const char* root_50_SensorApp = root_50["SensorApp"]; // "HWiNFO"
// const char* root_50_SensorClass = root_50["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_50_SensorName = root_50["SensorName"]; // "Core 3 Ratio"
// const char* root_50_SensorValue = root_50["SensorValue"]; // "42"
// const char* root_50_SensorUnit = root_50["SensorUnit"]; // "x"
// long root_50_SensorUpdateTime = root_50["SensorUpdateTime"]; // 1601752166

// JsonObject root_51 = doc[51];
// const char* root_51_SensorApp = root_51["SensorApp"]; // "HWiNFO"
// const char* root_51_SensorClass = root_51["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_51_SensorName = root_51["SensorName"]; // "Core 4 Ratio"
// const char* root_51_SensorValue = root_51["SensorValue"]; // "42.5"
// const char* root_51_SensorUnit = root_51["SensorUnit"]; // "x"
// long root_51_SensorUpdateTime = root_51["SensorUpdateTime"]; // 1601752166

// JsonObject root_52 = doc[52];
// const char* root_52_SensorApp = root_52["SensorApp"]; // "HWiNFO"
// const char* root_52_SensorClass = root_52["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X"
// const char* root_52_SensorName = root_52["SensorName"]; // "Core 5 Ratio"
// const char* root_52_SensorValue = root_52["SensorValue"]; // "42.25"
// const char* root_52_SensorUnit = root_52["SensorUnit"]; // "x"
// long root_52_SensorUpdateTime = root_52["SensorUpdateTime"]; // 1601752166

// JsonObject root_53 = doc[53];
// const char* root_53_SensorApp = root_53["SensorApp"]; // "HWiNFO"
// const char* root_53_SensorClass = root_53["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_53_SensorName = root_53["SensorName"]; // "Core 0 C0 Residency"
// const char* root_53_SensorValue = root_53["SensorValue"]; // "82.4584579467773"
// const char* root_53_SensorUnit = root_53["SensorUnit"]; // "%"
// long root_53_SensorUpdateTime = root_53["SensorUpdateTime"]; // 1601752166

// JsonObject root_54 = doc[54];
// const char* root_54_SensorApp = root_54["SensorApp"]; // "HWiNFO"
// const char* root_54_SensorClass = root_54["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_54_SensorName = root_54["SensorName"]; // "Core 1 C0 Residency"
// const char* root_54_SensorValue = root_54["SensorValue"]; // "91.6397247314453"
// const char* root_54_SensorUnit = root_54["SensorUnit"]; // "%"
// long root_54_SensorUpdateTime = root_54["SensorUpdateTime"]; // 1601752166

// JsonObject root_55 = doc[55];
// const char* root_55_SensorApp = root_55["SensorApp"]; // "HWiNFO"
// const char* root_55_SensorClass = root_55["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_55_SensorName = root_55["SensorName"]; // "Core 2 C0 Residency"
// const char* root_55_SensorValue = root_55["SensorValue"]; // "88.9279708862305"
// const char* root_55_SensorUnit = root_55["SensorUnit"]; // "%"
// long root_55_SensorUpdateTime = root_55["SensorUpdateTime"]; // 1601752166

// JsonObject root_56 = doc[56];
// const char* root_56_SensorApp = root_56["SensorApp"]; // "HWiNFO"
// const char* root_56_SensorClass = root_56["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_56_SensorName = root_56["SensorName"]; // "Core 3 C0 Residency"
// const char* root_56_SensorValue = root_56["SensorValue"]; // "77.9058456420898"
// const char* root_56_SensorUnit = root_56["SensorUnit"]; // "%"
// long root_56_SensorUpdateTime = root_56["SensorUpdateTime"]; // 1601752166

// JsonObject root_57 = doc[57];
// const char* root_57_SensorApp = root_57["SensorApp"]; // "HWiNFO"
// const char* root_57_SensorClass = root_57["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_57_SensorName = root_57["SensorName"]; // "Core 4 C0 Residency"
// const char* root_57_SensorValue = root_57["SensorValue"]; // "79.6983261108398"
// const char* root_57_SensorUnit = root_57["SensorUnit"]; // "%"
// long root_57_SensorUpdateTime = root_57["SensorUpdateTime"]; // 1601752166

// JsonObject root_58 = doc[58];
// const char* root_58_SensorApp = root_58["SensorApp"]; // "HWiNFO"
// const char* root_58_SensorClass = root_58["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_58_SensorName = root_58["SensorName"]; // "Core 5 C0 Residency"
// const char* root_58_SensorValue = root_58["SensorValue"]; // "87.8053131103516"
// const char* root_58_SensorUnit = root_58["SensorUnit"]; // "%"
// long root_58_SensorUpdateTime = root_58["SensorUpdateTime"]; // 1601752166

// JsonObject root_59 = doc[59];
// const char* root_59_SensorApp = root_59["SensorApp"]; // "HWiNFO"
// const char* root_59_SensorClass = root_59["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_59_SensorName = root_59["SensorName"]; // "Core 0 C1 Residency"
// const char* root_59_SensorValue = root_59["SensorValue"]; // "17.5415897369385"
// const char* root_59_SensorUnit = root_59["SensorUnit"]; // "%"
// long root_59_SensorUpdateTime = root_59["SensorUpdateTime"]; // 1601752166

// JsonObject root_60 = doc[60];
// const char* root_60_SensorApp = root_60["SensorApp"]; // "HWiNFO"
// const char* root_60_SensorClass = root_60["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_60_SensorName = root_60["SensorName"]; // "Core 1 C1 Residency"
// const char* root_60_SensorValue = root_60["SensorValue"]; // "8.36024761199951"
// const char* root_60_SensorUnit = root_60["SensorUnit"]; // "%"
// long root_60_SensorUpdateTime = root_60["SensorUpdateTime"]; // 1601752166

// JsonObject root_61 = doc[61];
// const char* root_61_SensorApp = root_61["SensorApp"]; // "HWiNFO"
// const char* root_61_SensorClass = root_61["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_61_SensorName = root_61["SensorName"]; // "Core 2 C1 Residency"
// const char* root_61_SensorValue = root_61["SensorValue"]; // "11.07200050354"
// const char* root_61_SensorUnit = root_61["SensorUnit"]; // "%"
// long root_61_SensorUpdateTime = root_61["SensorUpdateTime"]; // 1601752166

// JsonObject root_62 = doc[62];
// const char* root_62_SensorApp = root_62["SensorApp"]; // "HWiNFO"
// const char* root_62_SensorClass = root_62["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_62_SensorName = root_62["SensorName"]; // "Core 3 C1 Residency"
// const char* root_62_SensorValue = root_62["SensorValue"]; // "22.0940361022949"
// const char* root_62_SensorUnit = root_62["SensorUnit"]; // "%"
// long root_62_SensorUpdateTime = root_62["SensorUpdateTime"]; // 1601752166

// JsonObject root_63 = doc[63];
// const char* root_63_SensorApp = root_63["SensorApp"]; // "HWiNFO"
// const char* root_63_SensorClass = root_63["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_63_SensorName = root_63["SensorName"]; // "Core 4 C1 Residency"
// const char* root_63_SensorValue = root_63["SensorValue"]; // "20.3017082214355"
// const char* root_63_SensorUnit = root_63["SensorUnit"]; // "%"
// long root_63_SensorUpdateTime = root_63["SensorUpdateTime"]; // 1601752166

// JsonObject root_64 = doc[64];
// const char* root_64_SensorApp = root_64["SensorApp"]; // "HWiNFO"
// const char* root_64_SensorClass = root_64["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_64_SensorName = root_64["SensorName"]; // "Core 5 C1 Residency"
// const char* root_64_SensorValue = root_64["SensorValue"]; // "12.1946220397949"
// const char* root_64_SensorUnit = root_64["SensorUnit"]; // "%"
// long root_64_SensorUpdateTime = root_64["SensorUpdateTime"]; // 1601752166

// JsonObject root_65 = doc[65];
// const char* root_65_SensorApp = root_65["SensorApp"]; // "HWiNFO"
// const char* root_65_SensorClass = root_65["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_65_SensorName = root_65["SensorName"]; // "Core 0 C6 Residency"
// const char* root_65_SensorValue = root_65["SensorValue"]; // "0"
// const char* root_65_SensorUnit = root_65["SensorUnit"]; // "%"
// long root_65_SensorUpdateTime = root_65["SensorUpdateTime"]; // 1601752166

// JsonObject root_66 = doc[66];
// const char* root_66_SensorApp = root_66["SensorApp"]; // "HWiNFO"
// const char* root_66_SensorClass = root_66["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_66_SensorName = root_66["SensorName"]; // "Core 1 C6 Residency"
// const char* root_66_SensorValue = root_66["SensorValue"]; // "0"
// const char* root_66_SensorUnit = root_66["SensorUnit"]; // "%"
// long root_66_SensorUpdateTime = root_66["SensorUpdateTime"]; // 1601752166

// JsonObject root_67 = doc[67];
// const char* root_67_SensorApp = root_67["SensorApp"]; // "HWiNFO"
// const char* root_67_SensorClass = root_67["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_67_SensorName = root_67["SensorName"]; // "Core 2 C6 Residency"
// const char* root_67_SensorValue = root_67["SensorValue"]; // "0"
// const char* root_67_SensorUnit = root_67["SensorUnit"]; // "%"
// long root_67_SensorUpdateTime = root_67["SensorUpdateTime"]; // 1601752166

// JsonObject root_68 = doc[68];
// const char* root_68_SensorApp = root_68["SensorApp"]; // "HWiNFO"
// const char* root_68_SensorClass = root_68["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_68_SensorName = root_68["SensorName"]; // "Core 3 C6 Residency"
// const char* root_68_SensorValue = root_68["SensorValue"]; // "0"
// const char* root_68_SensorUnit = root_68["SensorUnit"]; // "%"
// long root_68_SensorUpdateTime = root_68["SensorUpdateTime"]; // 1601752166

// JsonObject root_69 = doc[69];
// const char* root_69_SensorApp = root_69["SensorApp"]; // "HWiNFO"
// const char* root_69_SensorClass = root_69["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_69_SensorName = root_69["SensorName"]; // "Core 4 C6 Residency"
// const char* root_69_SensorValue = root_69["SensorValue"]; // "0"
// const char* root_69_SensorUnit = root_69["SensorUnit"]; // "%"
// long root_69_SensorUpdateTime = root_69["SensorUpdateTime"]; // 1601752166

// JsonObject root_70 = doc[70];
// const char* root_70_SensorApp = root_70["SensorApp"]; // "HWiNFO"
// const char* root_70_SensorClass = root_70["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: C-State Residency"
// const char* root_70_SensorName = root_70["SensorName"]; // "Core 5 C6 Residency"
// const char* root_70_SensorValue = root_70["SensorValue"]; // "0"
// const char* root_70_SensorUnit = root_70["SensorUnit"]; // "%"
// long root_70_SensorUpdateTime = root_70["SensorUpdateTime"]; // 1601752166

// JsonObject root_71 = doc[71];
// const char* root_71_SensorApp = root_71["SensorApp"]; // "HWiNFO"
// const char* root_71_SensorClass = root_71["SensorClass"]; // "Memory Timings"
// const char* root_71_SensorName = root_71["SensorName"]; // "Memory Clock"
// const char* root_71_SensorValue = root_71["SensorValue"]; // "1597.12"
// const char* root_71_SensorUnit = root_71["SensorUnit"]; // "MHz"
// long root_71_SensorUpdateTime = root_71["SensorUpdateTime"]; // 1601752166

// JsonObject root_72 = doc[72];
// const char* root_72_SensorApp = root_72["SensorApp"]; // "HWiNFO"
// const char* root_72_SensorClass = root_72["SensorClass"]; // "Memory Timings"
// const char* root_72_SensorName = root_72["SensorName"]; // "Memory Clock Ratio"
// const char* root_72_SensorValue = root_72["SensorValue"]; // "16"
// const char* root_72_SensorUnit = root_72["SensorUnit"]; // "x"
// long root_72_SensorUpdateTime = root_72["SensorUpdateTime"]; // 1601752166

// JsonObject root_73 = doc[73];
// const char* root_73_SensorApp = root_73["SensorApp"]; // "HWiNFO"
// const char* root_73_SensorClass = root_73["SensorClass"]; // "Memory Timings"
// const char* root_73_SensorName = root_73["SensorName"]; // "Tcas"
// const char* root_73_SensorValue = root_73["SensorValue"]; // "16"
// const char* root_73_SensorUnit = root_73["SensorUnit"]; // "T"
// long root_73_SensorUpdateTime = root_73["SensorUpdateTime"]; // 1601752166

// JsonObject root_74 = doc[74];
// const char* root_74_SensorApp = root_74["SensorApp"]; // "HWiNFO"
// const char* root_74_SensorClass = root_74["SensorClass"]; // "Memory Timings"
// const char* root_74_SensorName = root_74["SensorName"]; // "Trcd"
// const char* root_74_SensorValue = root_74["SensorValue"]; // "18"
// const char* root_74_SensorUnit = root_74["SensorUnit"]; // "T"
// long root_74_SensorUpdateTime = root_74["SensorUpdateTime"]; // 1601752166

// JsonObject root_75 = doc[75];
// const char* root_75_SensorApp = root_75["SensorApp"]; // "HWiNFO"
// const char* root_75_SensorClass = root_75["SensorClass"]; // "Memory Timings"
// const char* root_75_SensorName = root_75["SensorName"]; // "Trp"
// const char* root_75_SensorValue = root_75["SensorValue"]; // "18"
// const char* root_75_SensorUnit = root_75["SensorUnit"]; // "T"
// long root_75_SensorUpdateTime = root_75["SensorUpdateTime"]; // 1601752166

// JsonObject root_76 = doc[76];
// const char* root_76_SensorApp = root_76["SensorApp"]; // "HWiNFO"
// const char* root_76_SensorClass = root_76["SensorClass"]; // "Memory Timings"
// const char* root_76_SensorName = root_76["SensorName"]; // "Tras"
// const char* root_76_SensorValue = root_76["SensorValue"]; // "36"
// const char* root_76_SensorUnit = root_76["SensorUnit"]; // "T"
// long root_76_SensorUpdateTime = root_76["SensorUpdateTime"]; // 1601752166

// JsonObject root_77 = doc[77];
// const char* root_77_SensorApp = root_77["SensorApp"]; // "HWiNFO"
// const char* root_77_SensorClass = root_77["SensorClass"]; // "Memory Timings"
// const char* root_77_SensorName = root_77["SensorName"]; // "Trc"
// const char* root_77_SensorValue = root_77["SensorValue"]; // "75"
// const char* root_77_SensorUnit = root_77["SensorUnit"]; // "T"
// long root_77_SensorUpdateTime = root_77["SensorUpdateTime"]; // 1601752166

// JsonObject root_78 = doc[78];
// const char* root_78_SensorApp = root_78["SensorApp"]; // "HWiNFO"
// const char* root_78_SensorClass = root_78["SensorClass"]; // "Memory Timings"
// const char* root_78_SensorName = root_78["SensorName"]; // "Trfc"
// const char* root_78_SensorValue = root_78["SensorValue"]; // "560"
// const char* root_78_SensorUnit = root_78["SensorUnit"]; // "T"
// long root_78_SensorUpdateTime = root_78["SensorUpdateTime"]; // 1601752166

// JsonObject root_79 = doc[79];
// const char* root_79_SensorApp = root_79["SensorApp"]; // "HWiNFO"
// const char* root_79_SensorClass = root_79["SensorClass"]; // "Memory Timings"
// const char* root_79_SensorName = root_79["SensorName"]; // "Command Rate"
// const char* root_79_SensorValue = root_79["SensorValue"]; // "1"
// const char* root_79_SensorUnit = root_79["SensorUnit"]; // "T"
// long root_79_SensorUpdateTime = root_79["SensorUpdateTime"]; // 1601752166

// JsonObject root_80 = doc[80];
// const char* root_80_SensorApp = root_80["SensorApp"]; // "HWiNFO"
// const char* root_80_SensorClass = root_80["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_80_SensorName = root_80["SensorName"]; // "CPU (Tctl/Tdie)"
// const char* root_80_SensorValue = root_80["SensorValue"]; // "52.875"
// const char* root_80_SensorUnit = root_80["SensorUnit"]; // "Â°C"
// long root_80_SensorUpdateTime = root_80["SensorUpdateTime"]; // 1601752166

// JsonObject root_81 = doc[81];
// const char* root_81_SensorApp = root_81["SensorApp"]; // "HWiNFO"
// const char* root_81_SensorClass = root_81["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_81_SensorName = root_81["SensorName"]; // "CPU Die (average)"
// const char* root_81_SensorValue = root_81["SensorValue"]; // "52.4099922180176"
// const char* root_81_SensorUnit = root_81["SensorUnit"]; // "Â°C"
// long root_81_SensorUpdateTime = root_81["SensorUpdateTime"]; // 1601752166

// JsonObject root_82 = doc[82];
// const char* root_82_SensorApp = root_82["SensorApp"]; // "HWiNFO"
// const char* root_82_SensorClass = root_82["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_82_SensorName = root_82["SensorName"]; // "CPU CCD1 (Tdie)"
// const char* root_82_SensorValue = root_82["SensorValue"]; // "52.75"
// const char* root_82_SensorUnit = root_82["SensorUnit"]; // "Â°C"
// long root_82_SensorUpdateTime = root_82["SensorUpdateTime"]; // 1601752166

// JsonObject root_83 = doc[83];
// const char* root_83_SensorApp = root_83["SensorApp"]; // "HWiNFO"
// const char* root_83_SensorClass = root_83["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_83_SensorName = root_83["SensorName"]; // "CPU Core Voltage (SVI2 TFN)"
// const char* root_83_SensorValue = root_83["SensorValue"]; // "1.375"
// const char* root_83_SensorUnit = root_83["SensorUnit"]; // "V"
// long root_83_SensorUpdateTime = root_83["SensorUpdateTime"]; // 1601752166

// JsonObject root_84 = doc[84];
// const char* root_84_SensorApp = root_84["SensorApp"]; // "HWiNFO"
// const char* root_84_SensorClass = root_84["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_84_SensorName = root_84["SensorName"]; // "SoC Voltage (SVI2 TFN)"
// const char* root_84_SensorValue = root_84["SensorValue"]; // "1.08125"
// const char* root_84_SensorUnit = root_84["SensorUnit"]; // "V"
// long root_84_SensorUpdateTime = root_84["SensorUpdateTime"]; // 1601752166

// JsonObject root_85 = doc[85];
// const char* root_85_SensorApp = root_85["SensorApp"]; // "HWiNFO"
// const char* root_85_SensorClass = root_85["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_85_SensorName = root_85["SensorName"]; // "CPU Core VID (Effective)"
// const char* root_85_SensorValue = root_85["SensorValue"]; // "1.4"
// const char* root_85_SensorUnit = root_85["SensorUnit"]; // "V"
// long root_85_SensorUpdateTime = root_85["SensorUpdateTime"]; // 1601752166

// JsonObject root_86 = doc[86];
// const char* root_86_SensorApp = root_86["SensorApp"]; // "HWiNFO"
// const char* root_86_SensorClass = root_86["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_86_SensorName = root_86["SensorName"]; // "CPU TDC"
// const char* root_86_SensorValue = root_86["SensorValue"]; // "27.0484790802002"
// const char* root_86_SensorUnit = root_86["SensorUnit"]; // "A"
// long root_86_SensorUpdateTime = root_86["SensorUpdateTime"]; // 1601752166

// JsonObject root_87 = doc[87];
// const char* root_87_SensorApp = root_87["SensorApp"]; // "HWiNFO"
// const char* root_87_SensorClass = root_87["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_87_SensorName = root_87["SensorName"]; // "CPU EDC"
// const char* root_87_SensorValue = root_87["SensorValue"]; // "67.8825177356775"
// const char* root_87_SensorUnit = root_87["SensorUnit"]; // "A"
// long root_87_SensorUpdateTime = root_87["SensorUpdateTime"]; // 1601752166

// JsonObject root_88 = doc[88];
// const char* root_88_SensorApp = root_88["SensorApp"]; // "HWiNFO"
// const char* root_88_SensorClass = root_88["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_88_SensorName = root_88["SensorName"]; // "CPU Package Power (SMU)"
// const char* root_88_SensorValue = root_88["SensorValue"]; // "65.5874088925728"
// const char* root_88_SensorUnit = root_88["SensorUnit"]; // "W"
// long root_88_SensorUpdateTime = root_88["SensorUpdateTime"]; // 1601752166

// JsonObject root_89 = doc[89];
// const char* root_89_SensorApp = root_89["SensorApp"]; // "HWiNFO"
// const char* root_89_SensorClass = root_89["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_89_SensorName = root_89["SensorName"]; // "Core 0 Power (SMU)"
// const char* root_89_SensorValue = root_89["SensorValue"]; // "5.07822085948493"
// const char* root_89_SensorUnit = root_89["SensorUnit"]; // "W"
// long root_89_SensorUpdateTime = root_89["SensorUpdateTime"]; // 1601752166

// JsonObject root_90 = doc[90];
// const char* root_90_SensorApp = root_90["SensorApp"]; // "HWiNFO"
// const char* root_90_SensorClass = root_90["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_90_SensorName = root_90["SensorName"]; // "Core 1 Power (SMU)"
// const char* root_90_SensorValue = root_90["SensorValue"]; // "7.26546919499698"
// const char* root_90_SensorUnit = root_90["SensorUnit"]; // "W"
// long root_90_SensorUpdateTime = root_90["SensorUpdateTime"]; // 1601752166

// JsonObject root_91 = doc[91];
// const char* root_91_SensorApp = root_91["SensorApp"]; // "HWiNFO"
// const char* root_91_SensorClass = root_91["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_91_SensorName = root_91["SensorName"]; // "Core 2 Power (SMU)"
// const char* root_91_SensorValue = root_91["SensorValue"]; // "6.59424847464259"
// const char* root_91_SensorUnit = root_91["SensorUnit"]; // "W"
// long root_91_SensorUpdateTime = root_91["SensorUpdateTime"]; // 1601752166

// JsonObject root_92 = doc[92];
// const char* root_92_SensorApp = root_92["SensorApp"]; // "HWiNFO"
// const char* root_92_SensorClass = root_92["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_92_SensorName = root_92["SensorName"]; // "Core 3 Power (SMU)"
// const char* root_92_SensorValue = root_92["SensorValue"]; // "4.56006619155153"
// const char* root_92_SensorUnit = root_92["SensorUnit"]; // "W"
// long root_92_SensorUpdateTime = root_92["SensorUpdateTime"]; // 1601752166

// JsonObject root_93 = doc[93];
// const char* root_93_SensorApp = root_93["SensorApp"]; // "HWiNFO"
// const char* root_93_SensorClass = root_93["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_93_SensorName = root_93["SensorName"]; // "Core 4 Power (SMU)"
// const char* root_93_SensorValue = root_93["SensorValue"]; // "4.85623136615255"
// const char* root_93_SensorUnit = root_93["SensorUnit"]; // "W"
// long root_93_SensorUpdateTime = root_93["SensorUpdateTime"]; // 1601752166

// JsonObject root_94 = doc[94];
// const char* root_94_SensorApp = root_94["SensorApp"]; // "HWiNFO"
// const char* root_94_SensorClass = root_94["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_94_SensorName = root_94["SensorName"]; // "Core 5 Power (SMU)"
// const char* root_94_SensorValue = root_94["SensorValue"]; // "6.48535766485388"
// const char* root_94_SensorUnit = root_94["SensorUnit"]; // "W"
// long root_94_SensorUpdateTime = root_94["SensorUpdateTime"]; // 1601752166

// JsonObject root_95 = doc[95];
// const char* root_95_SensorApp = root_95["SensorApp"]; // "HWiNFO"
// const char* root_95_SensorClass = root_95["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_95_SensorName = root_95["SensorName"]; // "CPU Core Power"
// const char* root_95_SensorValue = root_95["SensorValue"]; // "37.1929779052734"
// const char* root_95_SensorUnit = root_95["SensorUnit"]; // "W"
// long root_95_SensorUpdateTime = root_95["SensorUpdateTime"]; // 1601752166

// JsonObject root_96 = doc[96];
// const char* root_96_SensorApp = root_96["SensorApp"]; // "HWiNFO"
// const char* root_96_SensorClass = root_96["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_96_SensorName = root_96["SensorName"]; // "CPU SoC Power"
// const char* root_96_SensorValue = root_96["SensorValue"]; // "16.8720855712891"
// const char* root_96_SensorUnit = root_96["SensorUnit"]; // "W"
// long root_96_SensorUpdateTime = root_96["SensorUpdateTime"]; // 1601752166

// JsonObject root_97 = doc[97];
// const char* root_97_SensorApp = root_97["SensorApp"]; // "HWiNFO"
// const char* root_97_SensorClass = root_97["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_97_SensorName = root_97["SensorName"]; // "Core+SoC Power"
// const char* root_97_SensorValue = root_97["SensorValue"]; // "54.0650634765625"
// const char* root_97_SensorUnit = root_97["SensorUnit"]; // "W"
// long root_97_SensorUpdateTime = root_97["SensorUpdateTime"]; // 1601752166

// JsonObject root_98 = doc[98];
// const char* root_98_SensorApp = root_98["SensorApp"]; // "HWiNFO"
// const char* root_98_SensorClass = root_98["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_98_SensorName = root_98["SensorName"]; // "CPU PPT"
// const char* root_98_SensorValue = root_98["SensorValue"]; // "64.1471862792969"
// const char* root_98_SensorUnit = root_98["SensorUnit"]; // "W"
// long root_98_SensorUpdateTime = root_98["SensorUpdateTime"]; // 1601752166

// JsonObject root_99 = doc[99];
// const char* root_99_SensorApp = root_99["SensorApp"]; // "HWiNFO"
// const char* root_99_SensorClass = root_99["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_99_SensorName = root_99["SensorName"]; // "Infinity Fabric Clock (FCLK)"
// const char* root_99_SensorValue = root_99["SensorValue"]; // "1600"
// const char* root_99_SensorUnit = root_99["SensorUnit"]; // "MHz"
// long root_99_SensorUpdateTime = root_99["SensorUpdateTime"]; // 1601752166

// JsonObject root_100 = doc[100];
// const char* root_100_SensorApp = root_100["SensorApp"]; // "HWiNFO"
// const char* root_100_SensorClass = root_100["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_100_SensorName = root_100["SensorName"]; // "Memory Controller Clock (UCLK)"
// const char* root_100_SensorValue = root_100["SensorValue"]; // "1600"
// const char* root_100_SensorUnit = root_100["SensorUnit"]; // "MHz"
// long root_100_SensorUpdateTime = root_100["SensorUpdateTime"]; // 1601752166

// JsonObject root_101 = doc[101];
// const char* root_101_SensorApp = root_101["SensorApp"]; // "HWiNFO"
// const char* root_101_SensorClass = root_101["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_101_SensorName = root_101["SensorName"]; // "CPU PPT Limit"
// const char* root_101_SensorValue = root_101["SensorValue"]; // "50.1149892807007"
// const char* root_101_SensorUnit = root_101["SensorUnit"]; // "%"
// long root_101_SensorUpdateTime = root_101["SensorUpdateTime"]; // 1601752166

// JsonObject root_102 = doc[102];
// const char* root_102_SensorApp = root_102["SensorApp"]; // "HWiNFO"
// const char* root_102_SensorClass = root_102["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_102_SensorName = root_102["SensorName"]; // "CPU TDC Limit"
// const char* root_102_SensorValue = root_102["SensorValue"]; // "33.8105988502502"
// const char* root_102_SensorUnit = root_102["SensorUnit"]; // "%"
// long root_102_SensorUpdateTime = root_102["SensorUpdateTime"]; // 1601752166

// JsonObject root_103 = doc[103];
// const char* root_103_SensorApp = root_103["SensorApp"]; // "HWiNFO"
// const char* root_103_SensorClass = root_103["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_103_SensorName = root_103["SensorName"]; // "CPU EDC Limit"
// const char* root_103_SensorValue = root_103["SensorValue"]; // "54.306014188542"
// const char* root_103_SensorUnit = root_103["SensorUnit"]; // "%"
// long root_103_SensorUpdateTime = root_103["SensorUpdateTime"]; // 1601752166

// JsonObject root_104 = doc[104];
// const char* root_104_SensorApp = root_104["SensorApp"]; // "HWiNFO"
// const char* root_104_SensorClass = root_104["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_104_SensorName = root_104["SensorName"]; // "Thermal Throttling (HTC)"
// const char* root_104_SensorValue = root_104["SensorValue"]; // "0"
// const char* root_104_SensorUnit = root_104["SensorUnit"]; // "Yes/No"
// long root_104_SensorUpdateTime = root_104["SensorUpdateTime"]; // 1601752166

// JsonObject root_105 = doc[105];
// const char* root_105_SensorApp = root_105["SensorApp"]; // "HWiNFO"
// const char* root_105_SensorClass = root_105["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_105_SensorName = root_105["SensorName"]; // "Thermal Throttling (PROCHOT CPU)"
// const char* root_105_SensorValue = root_105["SensorValue"]; // "0"
// const char* root_105_SensorUnit = root_105["SensorUnit"]; // "Yes/No"
// long root_105_SensorUpdateTime = root_105["SensorUpdateTime"]; // 1601752166

// JsonObject root_106 = doc[106];
// const char* root_106_SensorApp = root_106["SensorApp"]; // "HWiNFO"
// const char* root_106_SensorClass = root_106["SensorClass"]; // "CPU [#0]: AMD Ryzen 5 3600X: Enhanced"
// const char* root_106_SensorName = root_106["SensorName"]; // "Thermal Throttling (PROCHOT EXT)"
// const char* root_106_SensorValue = root_106["SensorValue"]; // "0"
// const char* root_106_SensorUnit = root_106["SensorUnit"]; // "Yes/No"
// long root_106_SensorUpdateTime = root_106["SensorUpdateTime"]; // 1601752166

// JsonObject root_107 = doc[107];
// const char* root_107_SensorApp = root_107["SensorApp"]; // "HWiNFO"
// const char* root_107_SensorClass = root_107["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (AMD X570)"
// const char* root_107_SensorName = root_107["SensorName"]; // "Chipset"
// const char* root_107_SensorValue = root_107["SensorValue"]; // "67.25"
// const char* root_107_SensorUnit = root_107["SensorUnit"]; // "Â°C"
// long root_107_SensorUpdateTime = root_107["SensorUpdateTime"]; // 1601752166

// JsonObject root_108 = doc[108];
// const char* root_108_SensorApp = root_108["SensorApp"]; // "HWiNFO"
// const char* root_108_SensorClass = root_108["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_108_SensorName = root_108["SensorName"]; // "System1"
// const char* root_108_SensorValue = root_108["SensorValue"]; // "35"
// const char* root_108_SensorUnit = root_108["SensorUnit"]; // "Â°C"
// long root_108_SensorUpdateTime = root_108["SensorUpdateTime"]; // 1601752166

// JsonObject root_109 = doc[109];
// const char* root_109_SensorApp = root_109["SensorApp"]; // "HWiNFO"
// const char* root_109_SensorClass = root_109["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_109_SensorName = root_109["SensorName"]; // "System2"
// const char* root_109_SensorValue = root_109["SensorValue"]; // "38"
// const char* root_109_SensorUnit = root_109["SensorUnit"]; // "Â°C"
// long root_109_SensorUpdateTime = root_109["SensorUpdateTime"]; // 1601752166

// JsonObject root_110 = doc[110];
// const char* root_110_SensorApp = root_110["SensorApp"]; // "HWiNFO"
// const char* root_110_SensorClass = root_110["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_110_SensorName = root_110["SensorName"]; // "CPU"
// const char* root_110_SensorValue = root_110["SensorValue"]; // "52"
// const char* root_110_SensorUnit = root_110["SensorUnit"]; // "Â°C"
// long root_110_SensorUpdateTime = root_110["SensorUpdateTime"]; // 1601752166

// JsonObject root_111 = doc[111];
// const char* root_111_SensorApp = root_111["SensorApp"]; // "HWiNFO"
// const char* root_111_SensorClass = root_111["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_111_SensorName = root_111["SensorName"]; // "PCIEX16_1"
// const char* root_111_SensorValue = root_111["SensorValue"]; // "42"
// const char* root_111_SensorUnit = root_111["SensorUnit"]; // "Â°C"
// long root_111_SensorUpdateTime = root_111["SensorUpdateTime"]; // 1601752166

// JsonObject root_112 = doc[112];
// const char* root_112_SensorApp = root_112["SensorApp"]; // "HWiNFO"
// const char* root_112_SensorClass = root_112["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_112_SensorName = root_112["SensorName"]; // "VRM MOS"
// const char* root_112_SensorValue = root_112["SensorValue"]; // "45"
// const char* root_112_SensorUnit = root_112["SensorUnit"]; // "Â°C"
// long root_112_SensorUpdateTime = root_112["SensorUpdateTime"]; // 1601752166

// JsonObject root_113 = doc[113];
// const char* root_113_SensorApp = root_113["SensorApp"]; // "HWiNFO"
// const char* root_113_SensorClass = root_113["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_113_SensorName = root_113["SensorName"]; // "Chipset"
// const char* root_113_SensorValue = root_113["SensorValue"]; // "50"
// const char* root_113_SensorUnit = root_113["SensorUnit"]; // "Â°C"
// long root_113_SensorUpdateTime = root_113["SensorUpdateTime"]; // 1601752166

// JsonObject root_114 = doc[114];
// const char* root_114_SensorApp = root_114["SensorApp"]; // "HWiNFO"
// const char* root_114_SensorClass = root_114["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_114_SensorName = root_114["SensorName"]; // "Vcore"
// const char* root_114_SensorValue = root_114["SensorValue"]; // "1.38"
// const char* root_114_SensorUnit = root_114["SensorUnit"]; // "V"
// long root_114_SensorUpdateTime = root_114["SensorUpdateTime"]; // 1601752166

// JsonObject root_115 = doc[115];
// const char* root_115_SensorApp = root_115["SensorApp"]; // "HWiNFO"
// const char* root_115_SensorClass = root_115["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_115_SensorName = root_115["SensorName"]; // "+3.3V"
// const char* root_115_SensorValue = root_115["SensorValue"]; // "3.304596"
// const char* root_115_SensorUnit = root_115["SensorUnit"]; // "V"
// long root_115_SensorUpdateTime = root_115["SensorUpdateTime"]; // 1601752166

// JsonObject root_116 = doc[116];
// const char* root_116_SensorApp = root_116["SensorApp"]; // "HWiNFO"
// const char* root_116_SensorClass = root_116["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_116_SensorName = root_116["SensorName"]; // "+12V"
// const char* root_116_SensorValue = root_116["SensorValue"]; // "12.24"
// const char* root_116_SensorUnit = root_116["SensorUnit"]; // "V"
// long root_116_SensorUpdateTime = root_116["SensorUpdateTime"]; // 1601752166

// JsonObject root_117 = doc[117];
// const char* root_117_SensorApp = root_117["SensorApp"]; // "HWiNFO"
// const char* root_117_SensorClass = root_117["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_117_SensorName = root_117["SensorName"]; // "+5V"
// const char* root_117_SensorValue = root_117["SensorValue"]; // "4.98"
// const char* root_117_SensorUnit = root_117["SensorUnit"]; // "V"
// long root_117_SensorUpdateTime = root_117["SensorUpdateTime"]; // 1601752166

// JsonObject root_118 = doc[118];
// const char* root_118_SensorApp = root_118["SensorApp"]; // "HWiNFO"
// const char* root_118_SensorClass = root_118["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_118_SensorName = root_118["SensorName"]; // "CPU VCORE SOC"
// const char* root_118_SensorValue = root_118["SensorValue"]; // "1.092"
// const char* root_118_SensorUnit = root_118["SensorUnit"]; // "V"
// long root_118_SensorUpdateTime = root_118["SensorUpdateTime"]; // 1601752166

// JsonObject root_119 = doc[119];
// const char* root_119_SensorApp = root_119["SensorApp"]; // "HWiNFO"
// const char* root_119_SensorClass = root_119["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_119_SensorName = root_119["SensorName"]; // "CPU VDDP"
// const char* root_119_SensorValue = root_119["SensorValue"]; // "0.912"
// const char* root_119_SensorUnit = root_119["SensorUnit"]; // "V"
// long root_119_SensorUpdateTime = root_119["SensorUpdateTime"]; // 1601752166

// JsonObject root_120 = doc[120];
// const char* root_120_SensorApp = root_120["SensorApp"]; // "HWiNFO"
// const char* root_120_SensorClass = root_120["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_120_SensorName = root_120["SensorName"]; // "DRAM"
// const char* root_120_SensorValue = root_120["SensorValue"]; // "1.38"
// const char* root_120_SensorUnit = root_120["SensorUnit"]; // "V"
// long root_120_SensorUpdateTime = root_120["SensorUpdateTime"]; // 1601752166

// JsonObject root_121 = doc[121];
// const char* root_121_SensorApp = root_121["SensorApp"]; // "HWiNFO"
// const char* root_121_SensorClass = root_121["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_121_SensorName = root_121["SensorName"]; // "3VSB"
// const char* root_121_SensorValue = root_121["SensorValue"]; // "3.288"
// const char* root_121_SensorUnit = root_121["SensorUnit"]; // "V"
// long root_121_SensorUpdateTime = root_121["SensorUpdateTime"]; // 1601752166

// JsonObject root_122 = doc[122];
// const char* root_122_SensorApp = root_122["SensorApp"]; // "HWiNFO"
// const char* root_122_SensorClass = root_122["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_122_SensorName = root_122["SensorName"]; // "VBAT"
// const char* root_122_SensorValue = root_122["SensorValue"]; // "3.072"
// const char* root_122_SensorUnit = root_122["SensorUnit"]; // "V"
// long root_122_SensorUpdateTime = root_122["SensorUpdateTime"]; // 1601752166

// JsonObject root_123 = doc[123];
// const char* root_123_SensorApp = root_123["SensorApp"]; // "HWiNFO"
// const char* root_123_SensorClass = root_123["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_123_SensorName = root_123["SensorName"]; // "AVCC3"
// const char* root_123_SensorValue = root_123["SensorValue"]; // "3.072"
// const char* root_123_SensorUnit = root_123["SensorUnit"]; // "V"
// long root_123_SensorUpdateTime = root_123["SensorUpdateTime"]; // 1601752166

// JsonObject root_124 = doc[124];
// const char* root_124_SensorApp = root_124["SensorApp"]; // "HWiNFO"
// const char* root_124_SensorClass = root_124["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_124_SensorName = root_124["SensorName"]; // "PCH"
// const char* root_124_SensorValue = root_124["SensorValue"]; // "1674"
// const char* root_124_SensorUnit = root_124["SensorUnit"]; // "RPM"
// long root_124_SensorUpdateTime = root_124["SensorUpdateTime"]; // 1601752166

// JsonObject root_125 = doc[125];
// const char* root_125_SensorApp = root_125["SensorApp"]; // "HWiNFO"
// const char* root_125_SensorClass = root_125["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_125_SensorName = root_125["SensorName"]; // "CPU OPT"
// const char* root_125_SensorValue = root_125["SensorValue"]; // "2766"
// const char* root_125_SensorUnit = root_125["SensorUnit"]; // "RPM"
// long root_125_SensorUpdateTime = root_125["SensorUpdateTime"]; // 1601752166

// JsonObject root_126 = doc[126];
// const char* root_126_SensorApp = root_126["SensorApp"]; // "HWiNFO"
// const char* root_126_SensorClass = root_126["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (ITE IT8688E)"
// const char* root_126_SensorName = root_126["SensorName"]; // "Chassis Intrusion"
// const char* root_126_SensorValue = root_126["SensorValue"]; // "0"
// const char* root_126_SensorUnit = root_126["SensorUnit"]; // "Yes/No"
// long root_126_SensorUpdateTime = root_126["SensorUpdateTime"]; // 1601752166

// JsonObject root_127 = doc[127];
// const char* root_127_SensorApp = root_127["SensorApp"]; // "HWiNFO"
// const char* root_127_SensorClass = root_127["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)"
// const char* root_127_SensorName = root_127["SensorName"]; // "VR Loop1"
// const char* root_127_SensorValue = root_127["SensorValue"]; // "65"
// const char* root_127_SensorUnit = root_127["SensorUnit"]; // "Â°C"
// long root_127_SensorUpdateTime = root_127["SensorUpdateTime"]; // 1601752166

// JsonObject root_128 = doc[128];
// const char* root_128_SensorApp = root_128["SensorApp"]; // "HWiNFO"
// const char* root_128_SensorClass = root_128["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)"
// const char* root_128_SensorName = root_128["SensorName"]; // "VR VOUT"
// const char* root_128_SensorValue = root_128["SensorValue"]; // "1.376"
// const char* root_128_SensorUnit = root_128["SensorUnit"]; // "V"
// long root_128_SensorUpdateTime = root_128["SensorUpdateTime"]; // 1601752166

// JsonObject root_129 = doc[129];
// const char* root_129_SensorApp = root_129["SensorApp"]; // "HWiNFO"
// const char* root_129_SensorClass = root_129["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)"
// const char* root_129_SensorName = root_129["SensorName"]; // "VR VIN"
// const char* root_129_SensorValue = root_129["SensorValue"]; // "12.074"
// const char* root_129_SensorUnit = root_129["SensorUnit"]; // "V"
// long root_129_SensorUpdateTime = root_129["SensorUpdateTime"]; // 1601752166

// JsonObject root_130 = doc[130];
// const char* root_130_SensorApp = root_130["SensorApp"]; // "HWiNFO"
// const char* root_130_SensorClass = root_130["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)"
// const char* root_130_SensorName = root_130["SensorName"]; // "Current (IOUT)"
// const char* root_130_SensorValue = root_130["SensorValue"]; // "31.8"
// const char* root_130_SensorUnit = root_130["SensorUnit"]; // "A"
// long root_130_SensorUpdateTime = root_130["SensorUpdateTime"]; // 1601752166

// JsonObject root_131 = doc[131];
// const char* root_131_SensorApp = root_131["SensorApp"]; // "HWiNFO"
// const char* root_131_SensorClass = root_131["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)"
// const char* root_131_SensorName = root_131["SensorName"]; // "Current (IIN)"
// const char* root_131_SensorValue = root_131["SensorValue"]; // "4.93"
// const char* root_131_SensorUnit = root_131["SensorUnit"]; // "A"
// long root_131_SensorUpdateTime = root_131["SensorUpdateTime"]; // 1601752166

// JsonObject root_132 = doc[132];
// const char* root_132_SensorApp = root_132["SensorApp"]; // "HWiNFO"
// const char* root_132_SensorClass = root_132["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)"
// const char* root_132_SensorName = root_132["SensorName"]; // "Power (POUT)"
// const char* root_132_SensorValue = root_132["SensorValue"]; // "53"
// const char* root_132_SensorUnit = root_132["SensorUnit"]; // "W"
// long root_132_SensorUpdateTime = root_132["SensorUpdateTime"]; // 1601752166

// JsonObject root_133 = doc[133];
// const char* root_133_SensorApp = root_133["SensorApp"]; // "HWiNFO"
// const char* root_133_SensorClass = root_133["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)"
// const char* root_133_SensorName = root_133["SensorName"]; // "Power (Input)"
// const char* root_133_SensorValue = root_133["SensorValue"]; // "61"
// const char* root_133_SensorUnit = root_133["SensorUnit"]; // "W"
// long root_133_SensorUpdateTime = root_133["SensorUpdateTime"]; // 1601752166

// JsonObject root_134 = doc[134];
// const char* root_134_SensorApp = root_134["SensorApp"]; // "HWiNFO"
// const char* root_134_SensorClass = root_134["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)"
// const char* root_134_SensorName = root_134["SensorName"]; // "VR Loop1"
// const char* root_134_SensorValue = root_134["SensorValue"]; // "60"
// const char* root_134_SensorUnit = root_134["SensorUnit"]; // "Â°C"
// long root_134_SensorUpdateTime = root_134["SensorUpdateTime"]; // 1601752166

// JsonObject root_135 = doc[135];
// const char* root_135_SensorApp = root_135["SensorApp"]; // "HWiNFO"
// const char* root_135_SensorClass = root_135["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)"
// const char* root_135_SensorName = root_135["SensorName"]; // "VR VOUT"
// const char* root_135_SensorValue = root_135["SensorValue"]; // "1.077"
// const char* root_135_SensorUnit = root_135["SensorUnit"]; // "V"
// long root_135_SensorUpdateTime = root_135["SensorUpdateTime"]; // 1601752166

// JsonObject root_136 = doc[136];
// const char* root_136_SensorApp = root_136["SensorApp"]; // "HWiNFO"
// const char* root_136_SensorClass = root_136["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)"
// const char* root_136_SensorName = root_136["SensorName"]; // "VR VIN"
// const char* root_136_SensorValue = root_136["SensorValue"]; // "12.104"
// const char* root_136_SensorUnit = root_136["SensorUnit"]; // "V"
// long root_136_SensorUpdateTime = root_136["SensorUpdateTime"]; // 1601752166

// JsonObject root_137 = doc[137];
// const char* root_137_SensorApp = root_137["SensorApp"]; // "HWiNFO"
// const char* root_137_SensorClass = root_137["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)"
// const char* root_137_SensorName = root_137["SensorName"]; // "Current (IOUT)"
// const char* root_137_SensorValue = root_137["SensorValue"]; // "16.5"
// const char* root_137_SensorUnit = root_137["SensorUnit"]; // "A"
// long root_137_SensorUpdateTime = root_137["SensorUpdateTime"]; // 1601752166

// JsonObject root_138 = doc[138];
// const char* root_138_SensorApp = root_138["SensorApp"]; // "HWiNFO"
// const char* root_138_SensorClass = root_138["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)"
// const char* root_138_SensorName = root_138["SensorName"]; // "Current (IIN)"
// const char* root_138_SensorValue = root_138["SensorValue"]; // "4.7"
// const char* root_138_SensorUnit = root_138["SensorUnit"]; // "A"
// long root_138_SensorUpdateTime = root_138["SensorUpdateTime"]; // 1601752166

// JsonObject root_139 = doc[139];
// const char* root_139_SensorApp = root_139["SensorApp"]; // "HWiNFO"
// const char* root_139_SensorClass = root_139["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)"
// const char* root_139_SensorName = root_139["SensorName"]; // "Power (POUT)"
// const char* root_139_SensorValue = root_139["SensorValue"]; // "15"
// const char* root_139_SensorUnit = root_139["SensorUnit"]; // "W"
// long root_139_SensorUpdateTime = root_139["SensorUpdateTime"]; // 1601752166

// JsonObject root_140 = doc[140];
// const char* root_140_SensorApp = root_140["SensorApp"]; // "HWiNFO"
// const char* root_140_SensorClass = root_140["SensorClass"]; // "GIGABYTE X570 AORUS ELITE WIFI (Renesas ISL69138/69269)"
// const char* root_140_SensorName = root_140["SensorName"]; // "Power (Input)"
// const char* root_140_SensorValue = root_140["SensorValue"]; // "59"
// const char* root_140_SensorUnit = root_140["SensorUnit"]; // "W"
// long root_140_SensorUpdateTime = root_140["SensorUpdateTime"]; // 1601752166

// JsonObject root_141 = doc[141];
// const char* root_141_SensorApp = root_141["SensorApp"]; // "HWiNFO"
// const char* root_141_SensorClass = root_141["SensorClass"]; // "DIMM Temperature Sensor"
// const char* root_141_SensorName = root_141["SensorName"]; // "DIMM[2] Temperature"
// const char* root_141_SensorValue = root_141["SensorValue"]; // "52.5"
// const char* root_141_SensorUnit = root_141["SensorUnit"]; // "Â°C"
// long root_141_SensorUpdateTime = root_141["SensorUpdateTime"]; // 1601752166

// JsonObject root_142 = doc[142];
// const char* root_142_SensorApp = root_142["SensorApp"]; // "HWiNFO"
// const char* root_142_SensorClass = root_142["SensorClass"]; // "DIMM Temperature Sensor"
// const char* root_142_SensorName = root_142["SensorName"]; // "DIMM[3] Temperature"
// const char* root_142_SensorValue = root_142["SensorValue"]; // "52.25"
// const char* root_142_SensorUnit = root_142["SensorUnit"]; // "Â°C"
// long root_142_SensorUpdateTime = root_142["SensorUpdateTime"]; // 1601752166

// JsonObject root_143 = doc[143];
// const char* root_143_SensorApp = root_143["SensorApp"]; // "HWiNFO"
// const char* root_143_SensorClass = root_143["SensorClass"]; // "S.M.A.R.T.: INTEL SSDPEKNW020T8 (PHNH932305752P0C)"
// const char* root_143_SensorName = root_143["SensorName"]; // "Drive Temperature"
// const char* root_143_SensorValue = root_143["SensorValue"]; // "40"
// const char* root_143_SensorUnit = root_143["SensorUnit"]; // "Â°C"
// long root_143_SensorUpdateTime = root_143["SensorUpdateTime"]; // 1601752166

// JsonObject root_144 = doc[144];
// const char* root_144_SensorApp = root_144["SensorApp"]; // "HWiNFO"
// const char* root_144_SensorClass = root_144["SensorClass"]; // "S.M.A.R.T.: INTEL SSDPEKNW020T8 (PHNH932305752P0C)"
// const char* root_144_SensorName = root_144["SensorName"]; // "Drive Remaining Life"
// const char* root_144_SensorValue = root_144["SensorValue"]; // "100"
// const char* root_144_SensorUnit = root_144["SensorUnit"]; // "%"
// long root_144_SensorUpdateTime = root_144["SensorUpdateTime"]; // 1601752166

// JsonObject root_145 = doc[145];
// const char* root_145_SensorApp = root_145["SensorApp"]; // "HWiNFO"
// const char* root_145_SensorClass = root_145["SensorClass"]; // "S.M.A.R.T.: INTEL SSDPEKNW020T8 (PHNH932305752P0C)"
// const char* root_145_SensorName = root_145["SensorName"]; // "Drive Failure"
// const char* root_145_SensorValue = root_145["SensorValue"]; // "0"
// const char* root_145_SensorUnit = root_145["SensorUnit"]; // "Yes/No"
// long root_145_SensorUpdateTime = root_145["SensorUpdateTime"]; // 1601752166

// JsonObject root_146 = doc[146];
// const char* root_146_SensorApp = root_146["SensorApp"]; // "HWiNFO"
// const char* root_146_SensorClass = root_146["SensorClass"]; // "S.M.A.R.T.: INTEL SSDPEKNW020T8 (PHNH932305752P0C)"
// const char* root_146_SensorName = root_146["SensorName"]; // "Drive Warning"
// const char* root_146_SensorValue = root_146["SensorValue"]; // "0"
// const char* root_146_SensorUnit = root_146["SensorUnit"]; // "Yes/No"
// long root_146_SensorUpdateTime = root_146["SensorUpdateTime"]; // 1601752166

// JsonObject root_147 = doc[147];
// const char* root_147_SensorApp = root_147["SensorApp"]; // "HWiNFO"
// const char* root_147_SensorClass = root_147["SensorClass"]; // "S.M.A.R.T.: INTEL SSDPEKNW020T8 (PHNH932305752P0C)"
// const char* root_147_SensorName = root_147["SensorName"]; // "Total Host Writes"
// const char* root_147_SensorValue = root_147["SensorValue"]; // "9203"
// const char* root_147_SensorUnit = root_147["SensorUnit"]; // "GB"
// long root_147_SensorUpdateTime = root_147["SensorUpdateTime"]; // 1601752166

// JsonObject root_148 = doc[148];
// const char* root_148_SensorApp = root_148["SensorApp"]; // "HWiNFO"
// const char* root_148_SensorClass = root_148["SensorClass"]; // "S.M.A.R.T.: INTEL SSDPEKNW020T8 (PHNH932305752P0C)"
// const char* root_148_SensorName = root_148["SensorName"]; // "Total Host Reads"
// const char* root_148_SensorValue = root_148["SensorValue"]; // "18101"
// const char* root_148_SensorUnit = root_148["SensorUnit"]; // "GB"
// long root_148_SensorUpdateTime = root_148["SensorUpdateTime"]; // 1601752166

// JsonObject root_149 = doc[149];
// const char* root_149_SensorApp = root_149["SensorApp"]; // "HWiNFO"
// const char* root_149_SensorClass = root_149["SensorClass"]; // "Drive: INTEL SSDPEKNW020T8 (PHNH932305752P0C)"
// const char* root_149_SensorName = root_149["SensorName"]; // "Read Activity"
// const char* root_149_SensorValue = root_149["SensorValue"]; // "2.562"
// const char* root_149_SensorUnit = root_149["SensorUnit"]; // "%"
// long root_149_SensorUpdateTime = root_149["SensorUpdateTime"]; // 1601752166

// JsonObject root_150 = doc[150];
// const char* root_150_SensorApp = root_150["SensorApp"]; // "HWiNFO"
// const char* root_150_SensorClass = root_150["SensorClass"]; // "Drive: INTEL SSDPEKNW020T8 (PHNH932305752P0C)"
// const char* root_150_SensorName = root_150["SensorName"]; // "Write Activity"
// const char* root_150_SensorValue = root_150["SensorValue"]; // "0.41"
// const char* root_150_SensorUnit = root_150["SensorUnit"]; // "%"
// long root_150_SensorUpdateTime = root_150["SensorUpdateTime"]; // 1601752166

// JsonObject root_151 = doc[151];
// const char* root_151_SensorApp = root_151["SensorApp"]; // "HWiNFO"
// const char* root_151_SensorClass = root_151["SensorClass"]; // "Drive: INTEL SSDPEKNW020T8 (PHNH932305752P0C)"
// const char* root_151_SensorName = root_151["SensorName"]; // "Total Activity"
// const char* root_151_SensorValue = root_151["SensorValue"]; // "2.972"
// const char* root_151_SensorUnit = root_151["SensorUnit"]; // "%"
// long root_151_SensorUpdateTime = root_151["SensorUpdateTime"]; // 1601752166

// JsonObject root_152 = doc[152];
// const char* root_152_SensorApp = root_152["SensorApp"]; // "HWiNFO"
// const char* root_152_SensorClass = root_152["SensorClass"]; // "Drive: INTEL SSDPEKNW020T8 (PHNH932305752P0C)"
// const char* root_152_SensorName = root_152["SensorName"]; // "Read Rate"
// const char* root_152_SensorValue = root_152["SensorValue"]; // "0.781"
// const char* root_152_SensorUnit = root_152["SensorUnit"]; // "MB/s"
// long root_152_SensorUpdateTime = root_152["SensorUpdateTime"]; // 1601752166

// JsonObject root_153 = doc[153];
// const char* root_153_SensorApp = root_153["SensorApp"]; // "HWiNFO"
// const char* root_153_SensorClass = root_153["SensorClass"]; // "Drive: INTEL SSDPEKNW020T8 (PHNH932305752P0C)"
// const char* root_153_SensorName = root_153["SensorName"]; // "Write Rate"
// const char* root_153_SensorValue = root_153["SensorValue"]; // "2.744"
// const char* root_153_SensorUnit = root_153["SensorUnit"]; // "MB/s"
// long root_153_SensorUpdateTime = root_153["SensorUpdateTime"]; // 1601752166

// JsonObject root_154 = doc[154];
// const char* root_154_SensorApp = root_154["SensorApp"]; // "HWiNFO"
// const char* root_154_SensorClass = root_154["SensorClass"]; // "Drive: INTEL SSDPEKNW020T8 (PHNH932305752P0C)"
// const char* root_154_SensorName = root_154["SensorName"]; // "Read Total"
// const char* root_154_SensorValue = root_154["SensorValue"]; // "148992"
// const char* root_154_SensorUnit = root_154["SensorUnit"]; // "MB"
// long root_154_SensorUpdateTime = root_154["SensorUpdateTime"]; // 1601752166

// JsonObject root_155 = doc[155];
// const char* root_155_SensorApp = root_155["SensorApp"]; // "HWiNFO"
// const char* root_155_SensorClass = root_155["SensorClass"]; // "Drive: INTEL SSDPEKNW020T8 (PHNH932305752P0C)"
// const char* root_155_SensorName = root_155["SensorName"]; // "Write Total"
// const char* root_155_SensorValue = root_155["SensorValue"]; // "142763"
// const char* root_155_SensorUnit = root_155["SensorUnit"]; // "MB"
// long root_155_SensorUpdateTime = root_155["SensorUpdateTime"]; // 1601752166

// JsonObject root_156 = doc[156];
// const char* root_156_SensorApp = root_156["SensorApp"]; // "HWiNFO"
// const char* root_156_SensorClass = root_156["SensorClass"]; // "Corsair CLCP"
// const char* root_156_SensorName = root_156["SensorName"]; // "+12V"
// const char* root_156_SensorValue = root_156["SensorValue"]; // "0"
// const char* root_156_SensorUnit = root_156["SensorUnit"]; // "V"
// long root_156_SensorUpdateTime = root_156["SensorUpdateTime"]; // 1601752166

// JsonObject root_157 = doc[157];
// const char* root_157_SensorApp = root_157["SensorApp"]; // "HWiNFO"
// const char* root_157_SensorClass = root_157["SensorClass"]; // "Corsair CLCP"
// const char* root_157_SensorName = root_157["SensorName"]; // "+5V"
// const char* root_157_SensorValue = root_157["SensorValue"]; // "12.186"
// const char* root_157_SensorUnit = root_157["SensorUnit"]; // "V"
// long root_157_SensorUpdateTime = root_157["SensorUpdateTime"]; // 1601752166

// JsonObject root_158 = doc[158];
// const char* root_158_SensorApp = root_158["SensorApp"]; // "HWiNFO"
// const char* root_158_SensorClass = root_158["SensorClass"]; // "Corsair CLCP"
// const char* root_158_SensorName = root_158["SensorName"]; // "+3.3V"
// const char* root_158_SensorValue = root_158["SensorValue"]; // "4.866"
// const char* root_158_SensorUnit = root_158["SensorUnit"]; // "V"
// long root_158_SensorUpdateTime = root_158["SensorUpdateTime"]; // 1601752166

// JsonObject root_159 = doc[159];
// const char* root_159_SensorApp = root_159["SensorApp"]; // "HWiNFO"
// const char* root_159_SensorClass = root_159["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_159_SensorName = root_159["SensorName"]; // "GPU Temperature"
// const char* root_159_SensorValue = root_159["SensorValue"]; // "52"
// const char* root_159_SensorUnit = root_159["SensorUnit"]; // "Â°C"
// long root_159_SensorUpdateTime = root_159["SensorUpdateTime"]; // 1601752166

// JsonObject root_160 = doc[160];
// const char* root_160_SensorApp = root_160["SensorApp"]; // "HWiNFO"
// const char* root_160_SensorClass = root_160["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_160_SensorName = root_160["SensorName"]; // "GPU Core Voltage"
// const char* root_160_SensorValue = root_160["SensorValue"]; // "0.74375"
// const char* root_160_SensorUnit = root_160["SensorUnit"]; // "V"
// long root_160_SensorUpdateTime = root_160["SensorUpdateTime"]; // 1601752166

// JsonObject root_161 = doc[161];
// const char* root_161_SensorApp = root_161["SensorApp"]; // "HWiNFO"
// const char* root_161_SensorClass = root_161["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_161_SensorName = root_161["SensorName"]; // "GPU Fan1"
// const char* root_161_SensorValue = root_161["SensorValue"]; // "0"
// const char* root_161_SensorUnit = root_161["SensorUnit"]; // "RPM"
// long root_161_SensorUpdateTime = root_161["SensorUpdateTime"]; // 1601752166

// JsonObject root_162 = doc[162];
// const char* root_162_SensorApp = root_162["SensorApp"]; // "HWiNFO"
// const char* root_162_SensorClass = root_162["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_162_SensorName = root_162["SensorName"]; // "GPU Power"
// const char* root_162_SensorValue = root_162["SensorValue"]; // "37.098"
// const char* root_162_SensorUnit = root_162["SensorUnit"]; // "W"
// long root_162_SensorUpdateTime = root_162["SensorUpdateTime"]; // 1601752166

// JsonObject root_163 = doc[163];
// const char* root_163_SensorApp = root_163["SensorApp"]; // "HWiNFO"
// const char* root_163_SensorClass = root_163["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_163_SensorName = root_163["SensorName"]; // "GPU Clock"
// const char* root_163_SensorValue = root_163["SensorValue"]; // "1530"
// const char* root_163_SensorUnit = root_163["SensorUnit"]; // "MHz"
// long root_163_SensorUpdateTime = root_163["SensorUpdateTime"]; // 1601752166

// JsonObject root_164 = doc[164];
// const char* root_164_SensorApp = root_164["SensorApp"]; // "HWiNFO"
// const char* root_164_SensorClass = root_164["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_164_SensorName = root_164["SensorName"]; // "GPU Memory Clock"
// const char* root_164_SensorValue = root_164["SensorValue"]; // "7000.98"
// const char* root_164_SensorUnit = root_164["SensorUnit"]; // "MHz"
// long root_164_SensorUpdateTime = root_164["SensorUpdateTime"]; // 1601752166

// JsonObject root_165 = doc[165];
// const char* root_165_SensorApp = root_165["SensorApp"]; // "HWiNFO"
// const char* root_165_SensorClass = root_165["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_165_SensorName = root_165["SensorName"]; // "GPU Video Clock"
// const char* root_165_SensorValue = root_165["SensorValue"]; // "1410"
// const char* root_165_SensorUnit = root_165["SensorUnit"]; // "MHz"
// long root_165_SensorUpdateTime = root_165["SensorUpdateTime"]; // 1601752166

// JsonObject root_166 = doc[166];
// const char* root_166_SensorApp = root_166["SensorApp"]; // "HWiNFO"
// const char* root_166_SensorClass = root_166["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_166_SensorName = root_166["SensorName"]; // "GPU Core Load"
// const char* root_166_SensorValue = root_166["SensorValue"]; // "4"
// const char* root_166_SensorUnit = root_166["SensorUnit"]; // "%"
// long root_166_SensorUpdateTime = root_166["SensorUpdateTime"]; // 1601752166

// JsonObject root_167 = doc[167];
// const char* root_167_SensorApp = root_167["SensorApp"]; // "HWiNFO"
// const char* root_167_SensorClass = root_167["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_167_SensorName = root_167["SensorName"]; // "GPU Memory Controller Load"
// const char* root_167_SensorValue = root_167["SensorValue"]; // "3"
// const char* root_167_SensorUnit = root_167["SensorUnit"]; // "%"
// long root_167_SensorUpdateTime = root_167["SensorUpdateTime"]; // 1601752166

// JsonObject root_168 = doc[168];
// const char* root_168_SensorApp = root_168["SensorApp"]; // "HWiNFO"
// const char* root_168_SensorClass = root_168["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_168_SensorName = root_168["SensorName"]; // "GPU Video Engine Load"
// const char* root_168_SensorValue = root_168["SensorValue"]; // "4"
// const char* root_168_SensorUnit = root_168["SensorUnit"]; // "%"
// long root_168_SensorUpdateTime = root_168["SensorUpdateTime"]; // 1601752166

// JsonObject root_169 = doc[169];
// const char* root_169_SensorApp = root_169["SensorApp"]; // "HWiNFO"
// const char* root_169_SensorClass = root_169["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_169_SensorName = root_169["SensorName"]; // "GPU Bus Load"
// const char* root_169_SensorValue = root_169["SensorValue"]; // "0"
// const char* root_169_SensorUnit = root_169["SensorUnit"]; // "%"
// long root_169_SensorUpdateTime = root_169["SensorUpdateTime"]; // 1601752166

// JsonObject root_170 = doc[170];
// const char* root_170_SensorApp = root_170["SensorApp"]; // "HWiNFO"
// const char* root_170_SensorClass = root_170["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_170_SensorName = root_170["SensorName"]; // "GPU Memory Usage"
// const char* root_170_SensorValue = root_170["SensorValue"]; // "33.9168548583984"
// const char* root_170_SensorUnit = root_170["SensorUnit"]; // "%"
// long root_170_SensorUpdateTime = root_170["SensorUpdateTime"]; // 1601752166

// JsonObject root_171 = doc[171];
// const char* root_171_SensorApp = root_171["SensorApp"]; // "HWiNFO"
// const char* root_171_SensorClass = root_171["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_171_SensorName = root_171["SensorName"]; // "GPU D3D Usage"
// const char* root_171_SensorValue = root_171["SensorValue"]; // "5.59385234899329"
// const char* root_171_SensorUnit = root_171["SensorUnit"]; // "%"
// long root_171_SensorUpdateTime = root_171["SensorUpdateTime"]; // 1601752166

// JsonObject root_172 = doc[172];
// const char* root_172_SensorApp = root_172["SensorApp"]; // "HWiNFO"
// const char* root_172_SensorClass = root_172["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_172_SensorName = root_172["SensorName"]; // "GPU Video Decode 0 Usage"
// const char* root_172_SensorValue = root_172["SensorValue"]; // "4.53221476510067"
// const char* root_172_SensorUnit = root_172["SensorUnit"]; // "%"
// long root_172_SensorUpdateTime = root_172["SensorUpdateTime"]; // 1601752166

// JsonObject root_173 = doc[173];
// const char* root_173_SensorApp = root_173["SensorApp"]; // "HWiNFO"
// const char* root_173_SensorClass = root_173["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_173_SensorName = root_173["SensorName"]; // "GPU Video Encode 0 Usage"
// const char* root_173_SensorValue = root_173["SensorValue"]; // "0"
// const char* root_173_SensorUnit = root_173["SensorUnit"]; // "%"
// long root_173_SensorUpdateTime = root_173["SensorUpdateTime"]; // 1601752166

// JsonObject root_174 = doc[174];
// const char* root_174_SensorApp = root_174["SensorApp"]; // "HWiNFO"
// const char* root_174_SensorClass = root_174["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_174_SensorName = root_174["SensorName"]; // "GPU Computing (Compute_0) Usage"
// const char* root_174_SensorValue = root_174["SensorValue"]; // "0"
// const char* root_174_SensorUnit = root_174["SensorUnit"]; // "%"
// long root_174_SensorUpdateTime = root_174["SensorUpdateTime"]; // 1601752166

// JsonObject root_175 = doc[175];
// const char* root_175_SensorApp = root_175["SensorApp"]; // "HWiNFO"
// const char* root_175_SensorClass = root_175["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_175_SensorName = root_175["SensorName"]; // "GPU Computing (Compute_1) Usage"
// const char* root_175_SensorValue = root_175["SensorValue"]; // "0"
// const char* root_175_SensorUnit = root_175["SensorUnit"]; // "%"
// long root_175_SensorUpdateTime = root_175["SensorUpdateTime"]; // 1601752166

// JsonObject root_176 = doc[176];
// const char* root_176_SensorApp = root_176["SensorApp"]; // "HWiNFO"
// const char* root_176_SensorClass = root_176["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_176_SensorName = root_176["SensorName"]; // "GPU VR Usage"
// const char* root_176_SensorValue = root_176["SensorValue"]; // "0"
// const char* root_176_SensorUnit = root_176["SensorUnit"]; // "%"
// long root_176_SensorUpdateTime = root_176["SensorUpdateTime"]; // 1601752166

// JsonObject root_177 = doc[177];
// const char* root_177_SensorApp = root_177["SensorApp"]; // "HWiNFO"
// const char* root_177_SensorClass = root_177["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_177_SensorName = root_177["SensorName"]; // "GPU Fan1"
// const char* root_177_SensorValue = root_177["SensorValue"]; // "6"
// const char* root_177_SensorUnit = root_177["SensorUnit"]; // "%"
// long root_177_SensorUpdateTime = root_177["SensorUpdateTime"]; // 1601752166

// JsonObject root_178 = doc[178];
// const char* root_178_SensorApp = root_178["SensorApp"]; // "HWiNFO"
// const char* root_178_SensorClass = root_178["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_178_SensorName = root_178["SensorName"]; // "Performance Limit - Power"
// const char* root_178_SensorValue = root_178["SensorValue"]; // "0"
// const char* root_178_SensorUnit = root_178["SensorUnit"]; // "Yes/No"
// long root_178_SensorUpdateTime = root_178["SensorUpdateTime"]; // 1601752166

// JsonObject root_179 = doc[179];
// const char* root_179_SensorApp = root_179["SensorApp"]; // "HWiNFO"
// const char* root_179_SensorClass = root_179["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_179_SensorName = root_179["SensorName"]; // "Performance Limit - Thermal"
// const char* root_179_SensorValue = root_179["SensorValue"]; // "0"
// const char* root_179_SensorUnit = root_179["SensorUnit"]; // "Yes/No"
// long root_179_SensorUpdateTime = root_179["SensorUpdateTime"]; // 1601752166

// JsonObject root_180 = doc[180];
// const char* root_180_SensorApp = root_180["SensorApp"]; // "HWiNFO"
// const char* root_180_SensorClass = root_180["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_180_SensorName = root_180["SensorName"]; // "Performance Limit - Reliability Voltage"
// const char* root_180_SensorValue = root_180["SensorValue"]; // "0"
// const char* root_180_SensorUnit = root_180["SensorUnit"]; // "Yes/No"
// long root_180_SensorUpdateTime = root_180["SensorUpdateTime"]; // 1601752166

// JsonObject root_181 = doc[181];
// const char* root_181_SensorApp = root_181["SensorApp"]; // "HWiNFO"
// const char* root_181_SensorClass = root_181["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_181_SensorName = root_181["SensorName"]; // "Performance Limit - Max Operating Voltage"
// const char* root_181_SensorValue = root_181["SensorValue"]; // "0"
// const char* root_181_SensorUnit = root_181["SensorUnit"]; // "Yes/No"
// long root_181_SensorUpdateTime = root_181["SensorUpdateTime"]; // 1601752166

// JsonObject root_182 = doc[182];
// const char* root_182_SensorApp = root_182["SensorApp"]; // "HWiNFO"
// const char* root_182_SensorClass = root_182["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_182_SensorName = root_182["SensorName"]; // "Performance Limit - Utilization"
// const char* root_182_SensorValue = root_182["SensorValue"]; // "16"
// const char* root_182_SensorUnit = root_182["SensorUnit"]; // "Yes/No"
// long root_182_SensorUpdateTime = root_182["SensorUpdateTime"]; // 1601752166

// JsonObject root_183 = doc[183];
// const char* root_183_SensorApp = root_183["SensorApp"]; // "HWiNFO"
// const char* root_183_SensorClass = root_183["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_183_SensorName = root_183["SensorName"]; // "Performance Limit - SLI GPUBoost Sync"
// const char* root_183_SensorValue = root_183["SensorValue"]; // "0"
// const char* root_183_SensorUnit = root_183["SensorUnit"]; // "Yes/No"
// long root_183_SensorUpdateTime = root_183["SensorUpdateTime"]; // 1601752166

// JsonObject root_184 = doc[184];
// const char* root_184_SensorApp = root_184["SensorApp"]; // "HWiNFO"
// const char* root_184_SensorClass = root_184["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_184_SensorName = root_184["SensorName"]; // "Total GPU Power (normalized) [% of TDP]"
// const char* root_184_SensorValue = root_184["SensorValue"]; // "30.102"
// const char* root_184_SensorUnit = root_184["SensorUnit"]; // "%"
// long root_184_SensorUpdateTime = root_184["SensorUpdateTime"]; // 1601752166

// JsonObject root_185 = doc[185];
// const char* root_185_SensorApp = root_185["SensorApp"]; // "HWiNFO"
// const char* root_185_SensorClass = root_185["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_185_SensorName = root_185["SensorName"]; // "Total GPU Power [% of TDP]"
// const char* root_185_SensorValue = root_185["SensorValue"]; // "29.678"
// const char* root_185_SensorUnit = root_185["SensorUnit"]; // "%"
// long root_185_SensorUpdateTime = root_185["SensorUpdateTime"]; // 1601752166

// JsonObject root_186 = doc[186];
// const char* root_186_SensorApp = root_186["SensorApp"]; // "HWiNFO"
// const char* root_186_SensorClass = root_186["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_186_SensorName = root_186["SensorName"]; // "GPU Memory Allocated"
// const char* root_186_SensorValue = root_186["SensorValue"]; // "2083.8515625"
// const char* root_186_SensorUnit = root_186["SensorUnit"]; // "MB"
// long root_186_SensorUpdateTime = root_186["SensorUpdateTime"]; // 1601752166

// JsonObject root_187 = doc[187];
// const char* root_187_SensorApp = root_187["SensorApp"]; // "HWiNFO"
// const char* root_187_SensorClass = root_187["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_187_SensorName = root_187["SensorName"]; // "GPU D3D Memory Dedicated"
// const char* root_187_SensorValue = root_187["SensorValue"]; // "1938.41796875"
// const char* root_187_SensorUnit = root_187["SensorUnit"]; // "MB"
// long root_187_SensorUpdateTime = root_187["SensorUpdateTime"]; // 1601752166

// JsonObject root_188 = doc[188];
// const char* root_188_SensorApp = root_188["SensorApp"]; // "HWiNFO"
// const char* root_188_SensorClass = root_188["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_188_SensorName = root_188["SensorName"]; // "GPU D3D Memory Dynamic"
// const char* root_188_SensorValue = root_188["SensorValue"]; // "118.69921875"
// const char* root_188_SensorUnit = root_188["SensorUnit"]; // "MB"
// long root_188_SensorUpdateTime = root_188["SensorUpdateTime"]; // 1601752166

// JsonObject root_189 = doc[189];
// const char* root_189_SensorApp = root_189["SensorApp"]; // "HWiNFO"
// const char* root_189_SensorClass = root_189["SensorClass"]; // "GPU [#0]: NVIDIA GeForce GTX 1660 Super: "
// const char* root_189_SensorName = root_189["SensorName"]; // "PCIe Link Speed"
// const char* root_189_SensorValue = root_189["SensorValue"]; // "8"
// const char* root_189_SensorUnit = root_189["SensorUnit"]; // "GT/s"
// long root_189_SensorUpdateTime = root_189["SensorUpdateTime"]; // 1601752166

// JsonObject root_190 = doc[190];
// const char* root_190_SensorApp = root_190["SensorApp"]; // "HWiNFO"
// const char* root_190_SensorClass = root_190["SensorClass"]; // "RTSS"
// const char* root_190_SensorName = root_190["SensorName"]; // "Frames per Second"
// const char* root_190_SensorValue = root_190["SensorValue"]; // "1.79999995231628"
// const char* root_190_SensorUnit = root_190["SensorUnit"]; // "FPS"
// long root_190_SensorUpdateTime = root_190["SensorUpdateTime"]; // 1601752166

// JsonObject root_191 = doc[191];
// const char* root_191_SensorApp = root_191["SensorApp"]; // "HWiNFO"
// const char* root_191_SensorClass = root_191["SensorClass"]; // "Network: Intel I211AT Copper (Pearsonville) Network Adapter"
// const char* root_191_SensorName = root_191["SensorName"]; // "Total DL"
// const char* root_191_SensorValue = root_191["SensorValue"]; // "57712.6176309586"
// const char* root_191_SensorUnit = root_191["SensorUnit"]; // "MB"
// long root_191_SensorUpdateTime = root_191["SensorUpdateTime"]; // 1601752166

// JsonObject root_192 = doc[192];
// const char* root_192_SensorApp = root_192["SensorApp"]; // "HWiNFO"
// const char* root_192_SensorClass = root_192["SensorClass"]; // "Network: Intel I211AT Copper (Pearsonville) Network Adapter"
// const char* root_192_SensorName = root_192["SensorName"]; // "Total UP"
// const char* root_192_SensorValue = root_192["SensorValue"]; // "1729.46013355255"
// const char* root_192_SensorUnit = root_192["SensorUnit"]; // "MB"
// long root_192_SensorUpdateTime = root_192["SensorUpdateTime"]; // 1601752166

// JsonObject root_193 = doc[193];
// const char* root_193_SensorApp = root_193["SensorApp"]; // "HWiNFO"
// const char* root_193_SensorClass = root_193["SensorClass"]; // "Network: Intel I211AT Copper (Pearsonville) Network Adapter"
// const char* root_193_SensorName = root_193["SensorName"]; // "Current DL rate"
// const char* root_193_SensorValue = root_193["SensorValue"]; // "96.2527989803966"
// const char* root_193_SensorUnit = root_193["SensorUnit"]; // "KB/s"
// long root_193_SensorUpdateTime = root_193["SensorUpdateTime"]; // 1601752166

// JsonObject root_194 = doc[194];
// const char* root_194_SensorApp = root_194["SensorApp"]; // "HWiNFO"
// const char* root_194_SensorClass = root_194["SensorClass"]; // "Network: Intel I211AT Copper (Pearsonville) Network Adapter"
// const char* root_194_SensorName = root_194["SensorName"]; // "Current UP rate"
// const char* root_194_SensorValue = root_194["SensorValue"]; // "256.35095693443"
// const char* root_194_SensorUnit = root_194["SensorUnit"]; // "KB/s"
// long root_194_SensorUpdateTime = root_194["SensorUpdateTime"]; // 1601752166

// JsonObject root_195 = doc[195];
// const char* root_195_SensorApp = root_195["SensorApp"]; // "HWiNFO"
// const char* root_195_SensorClass = root_195["SensorClass"]; // "Windows Hardware Errors (WHEA)"
// const char* root_195_SensorName = root_195["SensorName"]; // "Total Errors"
// const char* root_195_SensorValue = root_195["SensorValue"]; // "0"
// const char* root_195_SensorUnit = root_195["SensorUnit"]; // ""
// long root_195_SensorUpdateTime = root_195["SensorUpdateTime"]; // 1601752166

// JsonObject root_196 = doc[196];
// const char* root_196_SensorApp = root_196["SensorApp"]; // "Open Hardware Monitor"
// const char* root_196_SensorClass = root_196["SensorClass"]; // "Load"
// const char* root_196_SensorName = root_196["SensorName"]; // "AMD Ryzen 5 3600X 6-Core Processor: CPU Core #1"
// const char* root_196_SensorValue = root_196["SensorValue"]; // "17.59361"
// const char* root_196_SensorUnit = root_196["SensorUnit"]; // "%"
// int root_196_SensorUpdateTime = root_196["SensorUpdateTime"]; // 0

// JsonObject root_197 = doc[197];
// const char* root_197_SensorApp = root_197["SensorApp"]; // "Open Hardware Monitor"
// const char* root_197_SensorClass = root_197["SensorClass"]; // "Load"
// const char* root_197_SensorName = root_197["SensorName"]; // "AMD Ryzen 5 3600X 6-Core Processor: CPU Core #2"
// const char* root_197_SensorValue = root_197["SensorValue"]; // "12.07323"
// const char* root_197_SensorUnit = root_197["SensorUnit"]; // "%"
// int root_197_SensorUpdateTime = root_197["SensorUpdateTime"]; // 0

// JsonObject root_198 = doc[198];
// const char* root_198_SensorApp = root_198["SensorApp"]; // "Open Hardware Monitor"
// const char* root_198_SensorClass = root_198["SensorClass"]; // "Load"
// const char* root_198_SensorName = root_198["SensorName"]; // "AMD Ryzen 5 3600X 6-Core Processor: CPU Core #3"
// const char* root_198_SensorValue = root_198["SensorValue"]; // "30.72136"
// const char* root_198_SensorUnit = root_198["SensorUnit"]; // "%"
// int root_198_SensorUpdateTime = root_198["SensorUpdateTime"]; // 0

// JsonObject root_199 = doc[199];
// const char* root_199_SensorApp = root_199["SensorApp"]; // "Open Hardware Monitor"
// const char* root_199_SensorClass = root_199["SensorClass"]; // "Load"
// const char* root_199_SensorName = root_199["SensorName"]; // "AMD Ryzen 5 3600X 6-Core Processor: CPU Core #4"
// const char* root_199_SensorValue = root_199["SensorValue"]; // "16.43722"
// const char* root_199_SensorUnit = root_199["SensorUnit"]; // "%"
// int root_199_SensorUpdateTime = root_199["SensorUpdateTime"]; // 0

// JsonObject root_200 = doc[200];
// const char* root_200_SensorApp = root_200["SensorApp"]; // "Open Hardware Monitor"
// const char* root_200_SensorClass = root_200["SensorClass"]; // "Load"
// const char* root_200_SensorName = root_200["SensorName"]; // "AMD Ryzen 5 3600X 6-Core Processor: CPU Core #5"
// const char* root_200_SensorValue = root_200["SensorValue"]; // "19.26211"
// const char* root_200_SensorUnit = root_200["SensorUnit"]; // "%"
// int root_200_SensorUpdateTime = root_200["SensorUpdateTime"]; // 0

// JsonObject root_201 = doc[201];
// const char* root_201_SensorApp = root_201["SensorApp"]; // "Open Hardware Monitor"
// const char* root_201_SensorClass = root_201["SensorClass"]; // "Load"
// const char* root_201_SensorName = root_201["SensorName"]; // "AMD Ryzen 5 3600X 6-Core Processor: CPU Core #6"
// const char* root_201_SensorValue = root_201["SensorValue"]; // "15.11839"
// const char* root_201_SensorUnit = root_201["SensorUnit"]; // "%"
// int root_201_SensorUpdateTime = root_201["SensorUpdateTime"]; // 0

// JsonObject root_202 = doc[202];
// const char* root_202_SensorApp = root_202["SensorApp"]; // "Open Hardware Monitor"
// const char* root_202_SensorClass = root_202["SensorClass"]; // "Load"
// const char* root_202_SensorName = root_202["SensorName"]; // "AMD Ryzen 5 3600X 6-Core Processor: CPU Core #7"
// const char* root_202_SensorValue = root_202["SensorValue"]; // "10.39372"
// const char* root_202_SensorUnit = root_202["SensorUnit"]; // "%"
// int root_202_SensorUpdateTime = root_202["SensorUpdateTime"]; // 0

// JsonObject root_203 = doc[203];
// const char* root_203_SensorApp = root_203["SensorApp"]; // "Open Hardware Monitor"
// const char* root_203_SensorClass = root_203["SensorClass"]; // "Load"
// const char* root_203_SensorName = root_203["SensorName"]; // "AMD Ryzen 5 3600X 6-Core Processor: CPU Core #8"
// const char* root_203_SensorValue = root_203["SensorValue"]; // "11.33535"
// const char* root_203_SensorUnit = root_203["SensorUnit"]; // "%"
// int root_203_SensorUpdateTime = root_203["SensorUpdateTime"]; // 0

// JsonObject root_204 = doc[204];
// const char* root_204_SensorApp = root_204["SensorApp"]; // "Open Hardware Monitor"
// const char* root_204_SensorClass = root_204["SensorClass"]; // "Load"
// const char* root_204_SensorName = root_204["SensorName"]; // "AMD Ryzen 5 3600X 6-Core Processor: CPU Core #9"
// const char* root_204_SensorValue = root_204["SensorValue"]; // "14.53469"
// const char* root_204_SensorUnit = root_204["SensorUnit"]; // "%"
// int root_204_SensorUpdateTime = root_204["SensorUpdateTime"]; // 0

// JsonObject root_205 = doc[205];
// const char* root_205_SensorApp = root_205["SensorApp"]; // "Open Hardware Monitor"
// const char* root_205_SensorClass = root_205["SensorClass"]; // "Load"
// const char* root_205_SensorName = root_205["SensorName"]; // "AMD Ryzen 5 3600X 6-Core Processor: CPU Core #10"
// const char* root_205_SensorValue = root_205["SensorValue"]; // "10.3827"
// const char* root_205_SensorUnit = root_205["SensorUnit"]; // "%"
// int root_205_SensorUpdateTime = root_205["SensorUpdateTime"]; // 0

// JsonObject root_206 = doc[206];
// const char* root_206_SensorApp = root_206["SensorApp"]; // "Open Hardware Monitor"
// const char* root_206_SensorClass = root_206["SensorClass"]; // "Load"
// const char* root_206_SensorName = root_206["SensorName"]; // "AMD Ryzen 5 3600X 6-Core Processor: CPU Core #11"
// const char* root_206_SensorValue = root_206["SensorValue"]; // "24.2456"
// const char* root_206_SensorUnit = root_206["SensorUnit"]; // "%"
// int root_206_SensorUpdateTime = root_206["SensorUpdateTime"]; // 0

// JsonObject root_207 = doc[207];
// const char* root_207_SensorApp = root_207["SensorApp"]; // "Open Hardware Monitor"
// const char* root_207_SensorClass = root_207["SensorClass"]; // "Load"
// const char* root_207_SensorName = root_207["SensorName"]; // "AMD Ryzen 5 3600X 6-Core Processor: CPU Core #12"
// const char* root_207_SensorValue = root_207["SensorValue"]; // "23.02037"
// const char* root_207_SensorUnit = root_207["SensorUnit"]; // "%"
// int root_207_SensorUpdateTime = root_207["SensorUpdateTime"]; // 0

// JsonObject root_208 = doc[208];
// const char* root_208_SensorApp = root_208["SensorApp"]; // "Open Hardware Monitor"
// const char* root_208_SensorClass = root_208["SensorClass"]; // "Load"
// const char* root_208_SensorName = root_208["SensorName"]; // "AMD Ryzen 5 3600X 6-Core Processor: CPU Total"
// const char* root_208_SensorValue = root_208["SensorValue"]; // "17.09319"
// const char* root_208_SensorUnit = root_208["SensorUnit"]; // "%"
// int root_208_SensorUpdateTime = root_208["SensorUpdateTime"]; // 0

// JsonObject root_209 = doc[209];
// const char* root_209_SensorApp = root_209["SensorApp"]; // "Open Hardware Monitor"
// const char* root_209_SensorClass = root_209["SensorClass"]; // "Load"
// const char* root_209_SensorName = root_209["SensorName"]; // "Generic Memory: Memory"
// const char* root_209_SensorValue = root_209["SensorValue"]; // "32.21276"
// const char* root_209_SensorUnit = root_209["SensorUnit"]; // "%"
// int root_209_SensorUpdateTime = root_209["SensorUpdateTime"]; // 0

// JsonObject root_210 = doc[210];
// const char* root_210_SensorApp = root_210["SensorApp"]; // "Open Hardware Monitor"
// const char* root_210_SensorClass = root_210["SensorClass"]; // "Data"
// const char* root_210_SensorName = root_210["SensorName"]; // "Generic Memory: Used Memory"
// const char* root_210_SensorValue = root_210["SensorValue"]; // "10.29214"
// int root_210_SensorUpdateTime = root_210["SensorUpdateTime"]; // 0

// JsonObject root_211 = doc[211];
// const char* root_211_SensorApp = root_211["SensorApp"]; // "Open Hardware Monitor"
// const char* root_211_SensorClass = root_211["SensorClass"]; // "Data"
// const char* root_211_SensorName = root_211["SensorName"]; // "Generic Memory: Available Memory"
// const char* root_211_SensorValue = root_211["SensorValue"]; // "21.65836"
// int root_211_SensorUpdateTime = root_211["SensorUpdateTime"]; // 0

// JsonObject root_212 = doc[212];
// const char* root_212_SensorApp = root_212["SensorApp"]; // "Open Hardware Monitor"
// const char* root_212_SensorClass = root_212["SensorClass"]; // "Temperature"
// const char* root_212_SensorName = root_212["SensorName"]; // "NVIDIA GeForce GTX 1660 SUPER: GPU Core"
// const char* root_212_SensorValue = root_212["SensorValue"]; // "52"
// const char* root_212_SensorUnit = root_212["SensorUnit"]; // "C"
// int root_212_SensorUpdateTime = root_212["SensorUpdateTime"]; // 0

// JsonObject root_213 = doc[213];
// const char* root_213_SensorApp = root_213["SensorApp"]; // "Open Hardware Monitor"
// const char* root_213_SensorClass = root_213["SensorClass"]; // "Clock"
// const char* root_213_SensorName = root_213["SensorName"]; // "NVIDIA GeForce GTX 1660 SUPER: GPU Core"
// const char* root_213_SensorValue = root_213["SensorValue"]; // "1530"
// const char* root_213_SensorUnit = root_213["SensorUnit"]; // "MHz"
// int root_213_SensorUpdateTime = root_213["SensorUpdateTime"]; // 0

// JsonObject root_214 = doc[214];
// const char* root_214_SensorApp = root_214["SensorApp"]; // "Open Hardware Monitor"
// const char* root_214_SensorClass = root_214["SensorClass"]; // "Clock"
// const char* root_214_SensorName = root_214["SensorName"]; // "NVIDIA GeForce GTX 1660 SUPER: GPU Memory"
// const char* root_214_SensorValue = root_214["SensorValue"]; // "7000.98"
// const char* root_214_SensorUnit = root_214["SensorUnit"]; // "MHz"
// int root_214_SensorUpdateTime = root_214["SensorUpdateTime"]; // 0

// JsonObject root_215 = doc[215];
// const char* root_215_SensorApp = root_215["SensorApp"]; // "Open Hardware Monitor"
// const char* root_215_SensorClass = root_215["SensorClass"]; // "Clock"
// const char* root_215_SensorName = root_215["SensorName"]; // "NVIDIA GeForce GTX 1660 SUPER: GPU Shader"
// const char* root_215_SensorValue = root_215["SensorValue"]; // "0"
// const char* root_215_SensorUnit = root_215["SensorUnit"]; // "MHz"
// int root_215_SensorUpdateTime = root_215["SensorUpdateTime"]; // 0

// JsonObject root_216 = doc[216];
// const char* root_216_SensorApp = root_216["SensorApp"]; // "Open Hardware Monitor"
// const char* root_216_SensorClass = root_216["SensorClass"]; // "Load"
// const char* root_216_SensorName = root_216["SensorName"]; // "NVIDIA GeForce GTX 1660 SUPER: GPU Core"
// const char* root_216_SensorValue = root_216["SensorValue"]; // "4"
// const char* root_216_SensorUnit = root_216["SensorUnit"]; // "%"
// int root_216_SensorUpdateTime = root_216["SensorUpdateTime"]; // 0

// JsonObject root_217 = doc[217];
// const char* root_217_SensorApp = root_217["SensorApp"]; // "Open Hardware Monitor"
// const char* root_217_SensorClass = root_217["SensorClass"]; // "Load"
// const char* root_217_SensorName = root_217["SensorName"]; // "NVIDIA GeForce GTX 1660 SUPER: GPU Memory Controller"
// const char* root_217_SensorValue = root_217["SensorValue"]; // "3"
// const char* root_217_SensorUnit = root_217["SensorUnit"]; // "%"
// int root_217_SensorUpdateTime = root_217["SensorUpdateTime"]; // 0

// JsonObject root_218 = doc[218];
// const char* root_218_SensorApp = root_218["SensorApp"]; // "Open Hardware Monitor"
// const char* root_218_SensorClass = root_218["SensorClass"]; // "Load"
// const char* root_218_SensorName = root_218["SensorName"]; // "NVIDIA GeForce GTX 1660 SUPER: GPU Video Engine"
// const char* root_218_SensorValue = root_218["SensorValue"]; // "4"
// const char* root_218_SensorUnit = root_218["SensorUnit"]; // "%"
// int root_218_SensorUpdateTime = root_218["SensorUpdateTime"]; // 0

// JsonObject root_219 = doc[219];
// const char* root_219_SensorApp = root_219["SensorApp"]; // "Open Hardware Monitor"
// const char* root_219_SensorClass = root_219["SensorClass"]; // "Load"
// const char* root_219_SensorName = root_219["SensorName"]; // "NVIDIA GeForce GTX 1660 SUPER: GPU Memory"
// const char* root_219_SensorValue = root_219["SensorValue"]; // "33.91685"
// const char* root_219_SensorUnit = root_219["SensorUnit"]; // "%"
// int root_219_SensorUpdateTime = root_219["SensorUpdateTime"]; // 0

// JsonObject root_220 = doc[220];
// const char* root_220_SensorApp = root_220["SensorApp"]; // "Open Hardware Monitor"
// const char* root_220_SensorClass = root_220["SensorClass"]; // "Load"
// const char* root_220_SensorName = root_220["SensorName"]; // "Generic Hard Disk: Used Space"
// const char* root_220_SensorValue = root_220["SensorValue"]; // "58.7275"
// const char* root_220_SensorUnit = root_220["SensorUnit"]; // "%"
// int root_220_SensorUpdateTime = root_220["SensorUpdateTime"]; // 0
