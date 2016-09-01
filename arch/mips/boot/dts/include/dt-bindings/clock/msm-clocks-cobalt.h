/* Copyright (c) 2015-2016, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MSM_CLOCKS_COBALT_H
#define __MSM_CLOCKS_COBALT_H

/* clock_rpm controlled clocks */
#define clk_ce1_clk				0x42229c55
#define clk_ce1_a_clk				0x44a833fe
#define clk_cxo_clk_src				0x79e95308
#define clk_pnoc_clk				0x4325d220
#define clk_pnoc_a_clk				0x2808c12b
#define clk_bimc_clk				0x4b80bf00
#define clk_bimc_a_clk				0x4b25668a
#define clk_cnoc_clk				0xd5ccb7f4
#define clk_cnoc_a_clk				0xd8fe2ccc
#define clk_snoc_clk				0x2c341aa0
#define clk_snoc_a_clk				0x8fcef2af
#define clk_ln_bb_clk1				0xb867b147
#define clk_ln_bb_clk1_ao			0x7f63a93a
#define clk_ln_bb_clk1_pin			0x6fc5653c
#define clk_ln_bb_clk1_pin_ao			0x25d625bf
#define clk_ln_bb_clk2				0xf83e6387
#define clk_ln_bb_clk2_ao			0x96f09628
#define clk_ln_bb_clk2_pin			0xa9ebe8d5
#define clk_ln_bb_clk2_pin_ao			0x89a1226f
#define clk_ln_bb_clk3				0x4f52a39e
#define clk_ln_bb_clk3_ao			0xb15eba76
#define clk_ln_bb_clk3_pin			0xc4de7dad
#define clk_ln_bb_clk3_pin_ao			0xc01022e8
#define clk_bimc_msmbus_clk			0xd212feea
#define clk_bimc_msmbus_a_clk			0x71d1a499
#define clk_cnoc_msmbus_clk			0x62228b5d
#define clk_cnoc_msmbus_a_clk			0x67442955
#define clk_cxo_clk_src_ao			0x64eb6004
#define clk_cxo_dwc3_clk			0xf79c19f6
#define clk_cxo_lpm_clk				0x94adbf3d
#define clk_cxo_otg_clk				0x4eec0bb9
#define clk_cxo_pil_lpass_clk			0xe17f0ff6
#define clk_cxo_pil_ssc_clk			0x81832015
#define clk_cxo_pil_spss_clk			0x5cd71a61
#define clk_div_clk1				0xaa1157a6
#define clk_div_clk1_ao				0x6b943d68
#define clk_div_clk2				0xd454019f
#define clk_div_clk2_ao				0x53f9e788
#define clk_div_clk3				0xa9a55a68
#define clk_div_clk3_ao				0x3d6725a8
#define clk_ipa_clk				0xfa685cda
#define clk_ipa_a_clk				0xeeec2919
#define clk_mcd_ce1_clk				0xbb615d26
#define clk_mmssnoc_axi_clk			0xdb4b31e6
#define clk_mmssnoc_axi_a_clk			0xd4970614
#define clk_pnoc_keepalive_a_clk		0xf8f91f0b
#define clk_pnoc_msmbus_clk			0x38b95c77
#define clk_pnoc_msmbus_a_clk			0x8c9b4e93
#define clk_pnoc_pm_clk				0xd6f7dfb9
#define clk_pnoc_sps_clk			0xd482ecc7
#define clk_qcedev_ce1_clk			0x293f97b0
#define clk_qcrypto_ce1_clk			0xa6ac14df
#define clk_qdss_clk				0x1492202a
#define clk_qdss_a_clk				0xdd121669
#define clk_qseecom_ce1_clk			0xaa858373
#define clk_rf_clk1				0xaabeea5a
#define clk_rf_clk1_ao				0x72a10cb8
#define clk_rf_clk1_pin				0x8f463562
#define clk_rf_clk1_pin_ao			0x62549ff6
#define clk_rf_clk2				0x24a30992
#define clk_rf_clk2_ao				0x944d8bbd
#define clk_rf_clk2_pin				0xa7c5602a
#define clk_rf_clk2_pin_ao			0x2d75eb4d
#define clk_rf_clk3				0xb673936b
#define clk_rf_clk3_ao				0x038bb968
#define clk_rf_clk3_pin				0x726f53f5
#define clk_rf_clk3_pin_ao			0x76f9240f
#define clk_scm_ce1_clk				0xd8ebcc62
#define clk_snoc_msmbus_clk			0xe6900bb6
#define clk_snoc_msmbus_a_clk			0x5d4683bd
#define clk_gcc_ce1_ahb_m_clk			0x2eb28c01
#define clk_gcc_ce1_axi_m_clk			0xc174dfba
#define clk_aggre1_noc_clk			0x049abba8
#define clk_aggre1_noc_a_clk			0xc12e4220
#define clk_aggre2_noc_clk			0xaa681404
#define clk_aggre2_noc_a_clk			0xcab67089
#define clk_measure_only_bimc_hmss_axi_clk	0xc1cc4f11

/* clock_gcc controlled clocks*/
#define clk_debug_mmss_clk			0x977c99b6
#define clk_debug_rpm_clk			0x8e2b07ca
#define clk_debug_cpu_clk			0x0e696b2b
#define clk_gpu_gcc_debug_clk			0x3eb88190
#define clk_gpll0				0x1ebe3bc4
#define clk_gpll0_out_main			0xe9374de7
#define clk_gpll0_ao				0xa1368304
#define clk_gcc_mmss_gpll0_div_clk		0xdd06848d
#define clk_gpll4				0xb3b5d85b
#define clk_gpll4_out_main			0xa9a0ab9d
#define clk_hmss_ahb_clk_src			0xaec8450f
#define clk_usb30_master_clk_src		0xc6262f89
#define clk_pcie_aux_clk_src			0xebc50566
#define clk_ufs_axi_clk_src			0x297ca380
#define clk_blsp1_qup1_i2c_apps_clk_src		0x17f78f5e
#define clk_blsp1_qup1_spi_apps_clk_src		0xf534c4fa
#define clk_blsp1_qup2_i2c_apps_clk_src		0x8de71c79
#define clk_blsp1_qup2_spi_apps_clk_src		0x33cf809a
#define clk_blsp1_qup3_i2c_apps_clk_src		0xf161b902
#define clk_blsp1_qup3_spi_apps_clk_src		0x5e95683f
#define clk_blsp1_qup4_i2c_apps_clk_src		0xb2ecce68
#define clk_blsp1_qup4_spi_apps_clk_src		0xddb5bbdb
#define clk_blsp1_qup5_i2c_apps_clk_src		0x71ea7804
#define clk_blsp1_qup5_spi_apps_clk_src		0x9752f35f
#define clk_blsp1_qup6_i2c_apps_clk_src		0x28806803
#define clk_blsp1_qup6_spi_apps_clk_src		0x44a1edc4
#define clk_blsp1_uart1_apps_clk_src		0xf8146114
#define clk_blsp1_uart2_apps_clk_src		0xfc9c2f73
#define clk_blsp1_uart3_apps_clk_src		0x600497f2
#define clk_blsp2_qup1_i2c_apps_clk_src		0xd6d1e95d
#define clk_blsp2_qup1_spi_apps_clk_src		0xcc1b8365
#define clk_blsp2_qup2_i2c_apps_clk_src		0x603b5c51
#define clk_blsp2_qup2_spi_apps_clk_src		0xd577dc44
#define clk_blsp2_qup3_i2c_apps_clk_src		0xea82959c
#define clk_blsp2_qup3_spi_apps_clk_src		0xd04b1e92
#define clk_blsp2_qup4_i2c_apps_clk_src		0x73dc968c
#define clk_blsp2_qup4_spi_apps_clk_src		0x25d4a2b1
#define clk_blsp2_qup5_i2c_apps_clk_src		0xcc3698bd
#define clk_blsp2_qup5_spi_apps_clk_src		0xfa0cf45e
#define clk_blsp2_qup6_i2c_apps_clk_src		0x2fa53151
#define clk_blsp2_qup6_spi_apps_clk_src		0x5ca86755
#define clk_blsp2_uart1_apps_clk_src		0x562c66dc
#define clk_blsp2_uart2_apps_clk_src		0xdd448080
#define clk_blsp2_uart3_apps_clk_src		0x46b2e90f
#define clk_glm_clk_src				0x532bf9ac
#define clk_gp1_clk_src				0xad85b97a
#define clk_gp2_clk_src				0xfb1f0065
#define clk_gp3_clk_src				0x63b693d6
#define clk_hmss_rbcpr_clk_src			0xedd9a474
#define clk_pdm2_clk_src			0x31e494fd
#define clk_sdcc2_apps_clk_src			0xfc46c821
#define clk_sdcc4_apps_clk_src			0x7aaaaa0c
#define clk_tsif_ref_clk_src			0x4e9042d1
#define clk_ufs_ice_core_clk_src		0xda8e7119
#define clk_ufs_phy_aux_clk_src			0xc6bca085
#define clk_ufs_unipro_core_clk_src		0x179e80a9
#define clk_usb30_mock_utmi_clk_src		0xa024a976
#define clk_usb3_phy_aux_clk_src		0x15eec63c
#define clk_gcc_pcie_phy_0_reset		0x6bb4df33
#define clk_gcc_usb3_phy_reset			0x03d559f1
#define clk_gcc_usb3phy_phy_reset		0xb1a4f885
#define clk_gcc_aggre1_ufs_axi_clk		0x873459d8
#define clk_gcc_aggre1_usb3_axi_clk		0xc5c3fbe8
#define clk_gcc_bimc_mss_q6_axi_clk		0x7437988f
#define clk_gcc_blsp1_ahb_clk			0x8caa5b4f
#define clk_gcc_blsp1_qup1_i2c_apps_clk		0xc303fae9
#define clk_gcc_blsp1_qup1_spi_apps_clk		0x759a76b0
#define clk_gcc_blsp1_qup2_i2c_apps_clk		0x1076f220
#define clk_gcc_blsp1_qup2_spi_apps_clk		0x3e77d48f
#define clk_gcc_blsp1_qup3_i2c_apps_clk		0x9e25ac82
#define clk_gcc_blsp1_qup3_spi_apps_clk		0xfb978880
#define clk_gcc_blsp1_qup4_i2c_apps_clk		0xd7f40f6f
#define clk_gcc_blsp1_qup4_spi_apps_clk		0x80f8722f
#define clk_gcc_blsp1_qup5_i2c_apps_clk		0xacae5604
#define clk_gcc_blsp1_qup5_spi_apps_clk		0xbf3e15d7
#define clk_gcc_blsp1_qup6_i2c_apps_clk		0x5c6ad820
#define clk_gcc_blsp1_qup6_spi_apps_clk		0x780d9f85
#define clk_gcc_blsp1_uart1_apps_clk		0xc7c62f90
#define clk_gcc_blsp1_uart2_apps_clk		0xf8a61c96
#define clk_gcc_blsp1_uart3_apps_clk		0xc3298bd7
#define clk_gcc_blsp2_ahb_clk			0x8f283c1d
#define clk_gcc_blsp2_qup1_i2c_apps_clk		0x9ace11dd
#define clk_gcc_blsp2_qup1_spi_apps_clk		0xa32604cc
#define clk_gcc_blsp2_qup2_i2c_apps_clk		0x1bf9a57e
#define clk_gcc_blsp2_qup2_spi_apps_clk		0xbf54ca6d
#define clk_gcc_blsp2_qup3_i2c_apps_clk		0x336d4170
#define clk_gcc_blsp2_qup3_spi_apps_clk		0xc68509d6
#define clk_gcc_blsp2_qup4_i2c_apps_clk		0xbd22539d
#define clk_gcc_blsp2_qup4_spi_apps_clk		0x01a72b93
#define clk_gcc_blsp2_qup5_i2c_apps_clk		0xe2b2ce1d
#define clk_gcc_blsp2_qup5_spi_apps_clk		0xf40999cd
#define clk_gcc_blsp2_qup6_i2c_apps_clk		0x894bcea4
#define clk_gcc_blsp2_qup6_spi_apps_clk		0xfe1bd34a
#define clk_gcc_blsp2_uart1_apps_clk		0x8c3512ff
#define clk_gcc_blsp2_uart2_apps_clk		0x1e1965a3
#define clk_gcc_blsp2_uart3_apps_clk		0x382415ab
#define clk_gcc_boot_rom_ahb_clk		0xde2adeb1
#define clk_gcc_bimc_gfx_clk			0x3edd69ad
#define clk_gcc_cfg_noc_usb3_axi_clk		0x9ea4c2d9
#define clk_gcc_glm_ahb_clk			0x9fa410cc
#define clk_gcc_glm_clk				0x8170c540
#define clk_gcc_glm_xo_clk			0x3f1df8b2
#define clk_gcc_gp1_clk				0x057f7b69
#define clk_gcc_gp2_clk				0x9bf83ffd
#define clk_gcc_gp3_clk				0xec6539ee
#define clk_gcc_gpu_snoc_dvm_gfx_clk		0xc9147451
#define clk_gcc_gpu_bimc_gfx_clk		0x3909459b
#define clk_gcc_gpu_bimc_gfx_src_clk		0x377cb748
#define clk_gcc_bimc_hmss_axi_clk		0x84653931
#define clk_gcc_gpu_cfg_ahb_clk			0x72f20a57
#define clk_gcc_hmss_ahb_clk			0x62818713
#define clk_gcc_hmss_dvm_bus_clk		0x17cc8b53
#define clk_gcc_hmss_rbcpr_clk			0x699183be
#define clk_hmss_gpll0_clk_src			0x17eb05d0
#define clk_hmss_gpll4_clk_src			0x20456cae
#define clk_gcc_mmss_qm_ahb_clk			0xc759178c
#define clk_gcc_mmss_qm_core_clk		0xa3412619
#define clk_gcc_mmss_sys_noc_axi_clk		0x4467b15b
#define clk_gcc_mss_at_clk			0x1692c5aa
#define clk_nav_gcc_dbg_clk			0x2221c544
#define clk_gcc_pcie_0_aux_clk			0x3d2e3ece
#define clk_gcc_pcie_0_cfg_ahb_clk		0x4dd325c3
#define clk_gcc_pcie_0_mstr_axi_clk		0x3f85285b
#define clk_gcc_pcie_0_pipe_clk			0x4f37621e
#define clk_gcc_pcie_0_slv_axi_clk		0xd69638a1
#define clk_gcc_pcie_phy_aux_clk		0x4746e74f
#define clk_gcc_pdm2_clk			0x99d55711
#define clk_gcc_pdm_ahb_clk			0x365664f6
#define clk_gcc_prng_ahb_clk			0x397e7eaa
#define clk_gcc_sdcc2_ahb_clk			0x23d5727f
#define clk_gcc_sdcc2_apps_clk			0x861b20ac
#define clk_gcc_sdcc4_ahb_clk			0x64f3e6a8
#define clk_gcc_sdcc4_apps_clk			0xbf7c4dc8
#define clk_gcc_tsif_ahb_clk			0x88d2822c
#define clk_gcc_tsif_ref_clk			0x8f1ed2c2
#define clk_gcc_ufs_ahb_clk			0x1914bb84
#define clk_gcc_ufs_axi_clk			0x47c743a7
#define clk_gcc_ufs_ice_core_clk		0x310b0710
#define clk_gcc_ufs_phy_aux_clk			0x17acc8fb
#define clk_gcc_ufs_rx_symbol_0_clk		0x7f43251c
#define clk_gcc_ufs_tx_symbol_0_clk		0x6a9f747a
#define clk_ufs_tx_symbol_0_clk			0xb3fcd0f7
#define clk_ufs_rx_symbol_0_clk			0x17a0f1cd
#define clk_gcc_ufs_unipro_core_clk		0x2daf7fd2
#define clk_gcc_usb30_master_clk		0xb3b4e2cb
#define clk_gcc_usb30_mock_utmi_clk		0xa800b65a
#define clk_gcc_usb30_sleep_clk			0xd0b65c92
#define clk_gcc_usb3_phy_aux_clk		0x0d9a36e0
#define clk_gcc_usb3_phy_pipe_clk		0xf279aff2
#define clk_gcc_usb_phy_cfg_ahb2phy_clk		0xd1231a0e
#define clk_gcc_wcss_ahb_s0_clk			0x639a01c4
#define clk_gcc_wcss_axi_m_clk			0xabc48ebd
#define clk_gcc_wcss_ecahb_clk			0xf1815ce9
#define clk_gcc_usb3_clkref_clk			0xb6cc8f00
#define clk_gcc_hdmi_clkref_clk			0x4d4eec04
#define clk_gcc_edp_clkref_clk			0xa8685c3f
#define clk_gcc_ufs_clkref_clk			0x92aa126f
#define clk_gcc_pcie_clkref_clk			0xa2e247fa
#define clk_gcc_rx2_qlink_clkref_clk		0xd0ba986d
#define clk_gcc_rx1_usb2_clkref_clk		0x53351d25
#define clk_gcc_pcie_0_phy_reset		0xdc3201c1
#define clk_gcc_pcie_phy_reset			0x9bc3c959
#define clk_gcc_pcie_phy_com_reset		0x8bf513e6
#define clk_gcc_pcie_phy_nocsr_com_phy_reset	0x0c16a2da
#define clk_gcc_qusb2phy_prim_reset		0x07550fa1
#define clk_gcc_qusb2phy_sec_reset		0x3f3a87d0
#define clk_gcc_mmss_noc_cfg_ahb_clk		0xb41a9d99
#define clk_gcc_wcss_shdreg_ahb_clk		0x33459c85
#define clk_hlos1_vote_lpass_core_smmu_clk	0x3aaa1743
#define clk_hlos1_vote_lpass_adsp_smmu_clk	0xc76f702f
#define clk_gcc_mss_cfg_ahb_clk			0x111cde81
#define clk_gcc_mss_q6_bimc_axi_clk		0x67544d62
#define clk_gcc_mss_mnoc_bimc_axi_clk		0xf665d03f
#define clk_gpll0_out_msscc			0x7d794829
#define clk_gcc_mss_snoc_axi_clk		0x0e71de85
#define clk_gcc_debug_mux			0x8121ac15

/* clock_mmss controlled clocks */
#define clk_mmsscc_xo				0x05e63704
#define clk_mmsscc_gpll0			0xe900c515
#define clk_mmsscc_gpll0_div			0x73892e05
#define clk_mmpll0_pll				0x361e3cfd
#define clk_mmpll1_pll				0x198e426b
#define clk_mmpll3_pll				0x18c76899
#define clk_mmpll4_pll				0x22c063c1
#define clk_mmpll5_pll				0xa41e1936
#define clk_mmpll6_pll				0xc56fb440
#define clk_mmpll7_pll				0x3ac216af
#define clk_mmpll10_pll				0x2561263b
#define clk_mmpll0_pll_out			0x1e9e24a8
#define clk_mmpll1_pll_out			0x5fa32257
#define clk_mmpll3_pll_out			0x6eb6328f
#define clk_mmpll4_pll_out			0xfb21c2fd
#define clk_mmpll5_pll_out			0xcc1897bf
#define clk_mmpll6_pll_out			0xfb1060bd
#define clk_mmpll7_pll_out			0x767758ed
#define clk_mmpll10_pll_out			0x3c5668f3
#define clk_ahb_clk_src				0x86f49203
#define clk_csi0_clk_src			0x227e65bc
#define clk_vfe0_clk_src			0xa0c2bd8f
#define clk_vfe1_clk_src			0x4e357366
#define clk_mdp_clk_src				0x6dc1f8f1
#define clk_maxi_clk_src			0x52c09777
#define clk_cpp_clk_src				0x8382f56d
#define clk_jpeg0_clk_src			0x9a0a0ac3
#define clk_rot_clk_src				0xce49b56c
#define clk_video_core_clk_src			0x8be4c944
#define clk_csi1_clk_src			0x6a2a6c36
#define clk_csi2_clk_src			0x4113589f
#define clk_csi3_clk_src			0xfd934012
#define clk_fd_core_clk_src			0xe4799ab7
#define clk_ext_extpclk_clk_src			0xe5b273af
#define clk_ext_pclk0_clk_src			0x087c1612
#define clk_ext_pclk1_clk_src			0x8067c5a3
#define clk_pclk0_clk_src			0xccac1f35
#define clk_pclk1_clk_src			0x090f68ac
#define clk_video_subcore0_clk_src		0x88d79636
#define clk_video_subcore1_clk_src		0x4966930c
#define clk_cci_clk_src				0x822f3d97
#define clk_camss_gp0_clk_src			0x43b063e9
#define clk_camss_gp1_clk_src			0xa3315f1b
#define clk_mclk0_clk_src			0x266b3853
#define clk_mclk1_clk_src			0xa73cad0c
#define clk_mclk2_clk_src			0x42545468
#define clk_mclk3_clk_src			0x2bfbb714
#define clk_csiphy_clk_src			0x8cceb70a
#define clk_csi0phytimer_clk_src		0xc8a309be
#define clk_csi1phytimer_clk_src		0x7c0fe23a
#define clk_csi2phytimer_clk_src		0x62ffea9c
#define clk_ext_byte0_clk_src			0xfb32f31e
#define clk_ext_byte1_clk_src			0x585ef6d4
#define clk_byte0_clk_src			0x75cc885b
#define clk_byte1_clk_src			0x63c2c955
#define clk_dp_aux_clk_src			0x2b6e972b
#define clk_dp_gtc_clk_src			0xc5a86a42
#define clk_esc0_clk_src			0xb41d7c38
#define clk_esc1_clk_src			0x3b0afa42
#define clk_extpclk_clk_src			0xb2c31abd
#define clk_hdmi_clk_src			0xb40aeea9
#define clk_vsync_clk_src			0xecb43940
#define clk_mmss_bimc_smmu_ahb_clk		0x4825baf4
#define clk_mmss_bimc_smmu_axi_clk		0xc365ac39
#define clk_mmss_snoc_dvm_axi_clk		0x2c159a11
#define clk_mmss_camss_ahb_clk			0xa51f2c1d
#define clk_mmss_camss_cci_ahb_clk		0xfda8bb6a
#define clk_mmss_camss_cci_clk			0x71bb5c97
#define clk_mmss_camss_cpp_ahb_clk		0xd5554f15
#define clk_mmss_camss_cpp_clk			0x8e99ef57
#define clk_mmss_camss_cpp_axi_clk		0xd84e390b
#define clk_mmss_camss_cpp_vbif_ahb_clk		0x1b33a88e
#define clk_mmss_camss_cphy_csid0_clk		0x56114361
#define clk_mmss_camss_csi0_ahb_clk		0x2b58d241
#define clk_mmss_camss_csi0_clk			0xccfe39ef
#define clk_mmss_camss_csi0pix_clk		0x9e26509d
#define clk_mmss_camss_csi0rdi_clk		0x01d5bf83
#define clk_mmss_camss_cphy_csid1_clk		0x79fbcd8a
#define clk_mmss_camss_csi1_ahb_clk		0x7073244b
#define clk_mmss_camss_csi1_clk			0x3eeeaac0
#define clk_mmss_camss_csi1pix_clk		0xf1375139
#define clk_mmss_camss_csi1rdi_clk		0x43185024
#define clk_mmss_camss_cphy_csid2_clk		0xf295e3ef
#define clk_mmss_camss_csi2_ahb_clk		0x681c1479
#define clk_mmss_camss_csi2_clk			0x94524569
#define clk_mmss_camss_csi2pix_clk		0xf4de617d
#define clk_mmss_camss_csi2rdi_clk		0x4bf01dc5
#define clk_mmss_camss_cphy_csid3_clk		0x100188e9
#define clk_mmss_camss_csi3_ahb_clk		0xfae7c29b
#define clk_mmss_camss_csi3_clk			0x55e4bbae
#define clk_mmss_camss_csi3pix_clk		0xc166a015
#define clk_mmss_camss_csi3rdi_clk		0x6983a4cd
#define clk_mmss_camss_csi_vfe0_clk		0x3b30b798
#define clk_mmss_camss_csi_vfe1_clk		0xfe729af7
#define clk_mmss_camss_csiphy0_clk		0x96c81af8
#define clk_mmss_camss_csiphy1_clk		0xee9ac2bb
#define clk_mmss_camss_csiphy2_clk		0x3365e70e
#define clk_mmss_fd_ahb_clk			0x4ff1da4d
#define clk_mmss_fd_core_clk			0x749e7eb0
#define clk_mmss_fd_core_uar_clk		0x8ea480c5
#define clk_mmss_camss_gp0_clk			0x3f7f6c87
#define clk_mmss_camss_gp1_clk			0xdccdd730
#define clk_mmss_camss_ispif_ahb_clk		0xbda4f0e3
#define clk_mmss_camss_jpeg0_clk		0x4cc73b07
#define clk_mmss_camss_jpeg_ahb_clk		0xde1fece3
#define clk_mmss_camss_jpeg_axi_clk		0x7534616b
#define clk_mmss_camss_mclk0_clk		0x056293a7
#define clk_mmss_camss_mclk1_clk		0x96c7b69b
#define clk_mmss_camss_mclk2_clk		0x8820556e
#define clk_mmss_camss_mclk3_clk		0xf90ffb67
#define clk_mmss_camss_micro_ahb_clk		0x6c6fd3c7
#define clk_mmss_camss_csi0phytimer_clk		0x7a78864e
#define clk_mmss_camss_csi1phytimer_clk		0x6e6c1de5
#define clk_mmss_camss_csi2phytimer_clk		0x0235e2de
#define clk_mmss_camss_top_ahb_clk		0x120618d6
#define clk_mmss_camss_vfe0_ahb_clk		0x137bd0bd
#define clk_mmss_camss_vfe0_clk			0xead28288
#define clk_mmss_camss_vfe0_stream_clk		0xa0428287
#define clk_mmss_camss_vfe1_ahb_clk		0xac0154c0
#define clk_mmss_camss_vfe1_clk			0xc216b14d
#define clk_mmss_camss_vfe1_stream_clk		0x745af3b6
#define clk_mmss_camss_vfe_vbif_ahb_clk		0x0109a9c6
#define clk_mmss_camss_vfe_vbif_axi_clk		0xe626d8a1
#define clk_mmss_mdss_ahb_clk			0x85d37ab5
#define clk_mmss_mdss_axi_clk			0xdf04fc1d
#define clk_mmss_mdss_byte0_clk			0x38105d25
#define clk_mmss_mdss_byte1_clk			0xe0c21354
#define clk_mmss_mdss_dp_aux_clk		0x23125eb6
#define clk_mmss_mdss_dp_gtc_clk		0xb59c151a
#define clk_mmss_mdss_esc0_clk			0x5721ff83
#define clk_mmss_mdss_esc1_clk			0xc3d0376b
#define clk_mmss_mdss_extpclk_clk		0x74d5a954
#define clk_mmss_mdss_hdmi_clk			0x28460a6d
#define clk_mmss_mdss_hdmi_dp_ahb_clk		0x5448519f
#define clk_mmss_mdss_mdp_clk			0x43539b0e
#define clk_mmss_mdss_pclk0_clk			0xcc0e909d
#define clk_mmss_mdss_pclk1_clk			0x850d9146
#define clk_mmss_mdss_rot_clk			0xbb7e71c4
#define clk_mmss_mdss_vsync_clk			0x629b36dc
#define clk_mmss_misc_ahb_clk			0xea30b0e7
#define clk_mmss_misc_cxo_clk			0xe620cd80
#define clk_mmss_mnoc_ahb_clk			0x49a394f4
#define clk_mmss_mnoc_maxi_clk			0xd8b7278f
#define clk_mmss_throttle_camss_ahb_clk		0x0382ef47
#define clk_mmss_throttle_camss_axi_clk		0x26271bf4
#define clk_mmss_throttle_camss_cxo_clk		0xa3d15f10
#define clk_mmss_throttle_mdss_ahb_clk		0x1ab259f7
#define clk_mmss_throttle_mdss_axi_clk		0x80067438
#define clk_mmss_throttle_mdss_cxo_clk		0x8a8daaf7
#define clk_mmss_throttle_video_ahb_clk		0x9efb223e
#define clk_mmss_throttle_video_axi_clk		0xe160287c
#define clk_mmss_throttle_video_cxo_clk		0x7aa7d641
#define clk_mmss_video_subcore0_clk		0x23fae359
#define clk_mmss_video_subcore1_clk		0x5213a0c7
#define clk_mmss_video_ahb_clk			0x94334ae9
#define clk_mmss_video_axi_clk			0xf3178ba5
#define clk_mmss_video_core_clk			0x78f14c85
#define clk_mmss_video_maxi_clk			0x1785ef88
#define clk_mmss_vmem_ahb_clk			0x4b18955b
#define clk_mmss_vmem_maxi_clk			0xb6067889
#define clk_mmss_debug_mux			0xe646ffda

/* clock_gpu controlled clocks*/
#define clk_gpucc_xo				0xc4e1a890
#define clk_gpucc_gpll0				0x0db0e37f
#define clk_gfx3d_clk_src			0x917f76ef
#define clk_rbbmtimer_clk_src			0x17649ecc
#define clk_gfx3d_isense_clk_src		0xecc3eafa
#define clk_rbcpr_clk_src			0x2c2e9af2
#define clk_gpu_debug_div_clk			0x75d6f53f
#define clk_gpucc_gfx3d_clk			0x95f01bd5
#define clk_gpucc_rbbmtimer_clk			0x58a0a7ca
#define clk_gpucc_gfx3d_isense_clk		0xb2678e80
#define clk_gpucc_cxo_clk			0x6532dcae
#define clk_gpucc_rbcpr_clk			0x7bd750e8
#define clk_gpu_pll0_pll			0x0e61ab4d
#define clk_gpu_pll0_pll_out_even		0xb0ed5009
#define clk_gpu_pll0_pll_out_odd		0x08c5a8a5
#define clk_gpu_pll0_postdiv_clk		0x76c19f3c
#define clk_gpu_pll1_pll			0x09ac81ef
#define clk_gpu_pll1_pll_out_even		0xa503de04
#define clk_gpu_pll1_pll_out_odd		0x1c205dfb
#define clk_gpu_pll1_postdiv_clk		0xdf546700
#define clk_gpucc_mx_clk			0x1edbb879
#define clk_gpucc_gcc_dbg_clk			0x9ae8cd3c

#endif
