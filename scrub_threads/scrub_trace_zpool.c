           zpool-31988 [008] 162723.059077: funcgraph_entry:                   |  zfsdev_open() {
           zpool-31988 [008] 162723.059079: funcgraph_entry:        1.452 us   |    zfsdev_minor_alloc();
           zpool-31988 [008] 162723.059081: funcgraph_entry:        1.696 us   |    zfs_onexit_init();
           zpool-31988 [008] 162723.059084: funcgraph_entry:        0.976 us   |    zfs_zevent_init();
           zpool-31988 [008] 162723.059085: funcgraph_exit:         9.083 us   |  }
           zpool-31988 [008] 162723.059127: funcgraph_entry:                   |  zfsdev_open() {
           zpool-31988 [008] 162723.059127: funcgraph_entry:        0.600 us   |    zfsdev_minor_alloc();
           zpool-31988 [008] 162723.059129: funcgraph_entry:        0.839 us   |    zfs_onexit_init();
           zpool-31988 [008] 162723.059130: funcgraph_entry:        0.574 us   |    zfs_zevent_init();
           zpool-31988 [008] 162723.059131: funcgraph_exit:         4.451 us   |  }
           zpool-31988 [008] 162723.059421: funcgraph_entry:                   |  zfsdev_ioctl() {
           zpool-31988 [008] 162723.059429: funcgraph_entry:        0.657 us   |    pool_status_check();
           zpool-31988 [008] 162723.059430: funcgraph_entry:        0.412 us   |    zfs_secpolicy_read();
           zpool-31988 [008] 162723.059432: funcgraph_entry:                   |    zfs_ioc_pool_stats() {
           zpool-31988 [008] 162723.059433: funcgraph_entry:                   |      spa_get_stats() {
           zpool-31988 [008] 162723.059433: funcgraph_entry:                   |        spa_open_common() {
           zpool-31988 [008] 162723.059434: funcgraph_entry:                   |          spa_lookup() {
           zpool-31988 [008] 162723.059436: funcgraph_entry:        0.732 us   |            spa_name_compare();
           zpool-31988 [008] 162723.059437: funcgraph_exit:         2.638 us   |          }
           zpool-31988 [008] 162723.059437: funcgraph_entry:        0.570 us   |          spa_open_ref();
           zpool-31988 [008] 162723.059438: funcgraph_entry:                   |          spa_config_generate() {
           zpool-31988 [008] 162723.059439: funcgraph_entry:        0.907 us   |            spa_config_enter();
           zpool-31988 [008] 162723.059441: funcgraph_entry:        0.427 us   |            spa_name();
           zpool-31988 [008] 162723.059443: funcgraph_entry:        0.497 us   |            spa_version();
           zpool-31988 [008] 162723.059447: funcgraph_entry:        0.453 us   |            spa_state();
           zpool-31988 [008] 162723.059449: funcgraph_entry:                   |            spa_guid() {
           zpool-31988 [008] 162723.059449: funcgraph_entry:                   |              dsl_pool_sync_context() {
           zpool-31988 [008] 162723.059450: funcgraph_entry:        0.454 us   |                spa_is_initializing();
           zpool-31988 [008] 162723.059451: funcgraph_exit:         1.576 us   |              }
           zpool-31988 [008] 162723.059451: funcgraph_exit:         2.695 us   |            }
           zpool-31988 [008] 162723.059455: funcgraph_entry:        2.651 us   |            vdev_top_config_generate();
           zpool-31988 [008] 162723.059458: funcgraph_entry:                   |            vdev_config_generate() {
           zpool-31988 [008] 162723.059464: funcgraph_entry:                   |              vdev_get_stats() {
           zpool-31988 [008] 162723.059465: funcgraph_entry:        0.540 us   |                vdev_get_min_asize();
           zpool-31988 [008] 162723.059466: funcgraph_exit:         2.599 us   |              }
           zpool-31988 [008] 162723.059468: funcgraph_entry:        0.903 us   |              spa_scan_get_stats();
           zpool-31988 [008] 162723.059470: funcgraph_entry:                   |              vdev_config_generate() {
           zpool-31988 [008] 162723.059475: funcgraph_entry:                   |                vdev_get_stats() {
           zpool-31988 [008] 162723.059476: funcgraph_entry:        0.727 us   |                  vdev_get_min_asize();
           zpool-31988 [008] 162723.059477: funcgraph_exit:         1.976 us   |                }
           zpool-31988 [008] 162723.059480: funcgraph_entry:        0.587 us   |                spa_scan_get_stats();
           zpool-31988 [008] 162723.059481: funcgraph_entry:                   |                vdev_config_generate() {
           zpool-31988 [008] 162723.059484: funcgraph_entry:                   |                  vdev_get_stats() {
           zpool-31988 [008] 162723.059485: funcgraph_entry:        0.749 us   |                    vdev_get_min_asize();
           zpool-31988 [008] 162723.059486: funcgraph_exit:         2.025 us   |                  }
           zpool-31988 [008] 162723.059487: funcgraph_entry:        0.463 us   |                  spa_scan_get_stats();
           zpool-31988 [008] 162723.059489: funcgraph_exit:         7.529 us   |                }
           zpool-31988 [008] 162723.059489: funcgraph_entry:                   |                vdev_config_generate() {
           zpool-31988 [008] 162723.059492: funcgraph_entry:                   |                  vdev_get_stats() {
           zpool-31988 [008] 162723.059493: funcgraph_entry:        0.569 us   |                    vdev_get_min_asize();
           zpool-31988 [008] 162723.059494: funcgraph_exit:         1.702 us   |                  }
           zpool-31988 [008] 162723.059495: funcgraph_entry:        0.506 us   |                  spa_scan_get_stats();
           zpool-31988 [008] 162723.059496: funcgraph_exit:         6.862 us   |                }
           zpool-31988 [008] 162723.059508: funcgraph_exit:       + 38.282 us  |              }
           zpool-31988 [008] 162723.059525: funcgraph_exit:       + 66.847 us  |            }
           zpool-31988 [008] 162723.059545: funcgraph_entry:        0.489 us   |            spa_load_state();
           zpool-31988 [008] 162723.059547: funcgraph_entry:      + 41.683 us  |            ddt_get_dedup_histogram();
           zpool-31988 [008] 162723.059593: funcgraph_entry:        0.843 us   |            ddt_get_dedup_object_stats();
           zpool-31988 [008] 162723.059595: funcgraph_entry:                   |            ddt_get_dedup_stats() {
           zpool-31988 [008] 162723.059597: funcgraph_entry:      + 46.624 us  |              ddt_get_dedup_histogram();
           zpool-31988 [008] 162723.059644: funcgraph_entry:        1.705 us   |              ddt_histogram_stat();
           zpool-31988 [008] 162723.059646: funcgraph_exit:       + 50.865 us  |            }
           zpool-31988 [008] 162723.059661: funcgraph_entry:        1.099 us   |            spa_config_exit();
           zpool-31988 [008] 162723.059662: funcgraph_exit:       ! 215.215 us |          }
           zpool-31988 [008] 162723.059663: funcgraph_exit:       ! 220.932 us |        }
           zpool-31988 [008] 162723.059663: funcgraph_entry:        0.579 us   |        spa_config_enter();
           zpool-31988 [008] 162723.059666: funcgraph_entry:        0.963 us   |        spa_get_errlog_size();
           zpool-31988 [008] 162723.059668: funcgraph_entry:        0.574 us   |        spa_suspended();
           zpool-31988 [008] 162723.059669: funcgraph_entry:        0.516 us   |        spa_add_spares();
           zpool-31988 [008] 162723.059670: funcgraph_entry:        0.483 us   |        spa_add_l2cache();
           zpool-31988 [008] 162723.059671: funcgraph_entry:                   |        spa_add_feature_stats() {
           zpool-31988 [008] 162723.059672: funcgraph_entry:        0.463 us   |          zap_cursor_init();
           zpool-31988 [008] 162723.059673: funcgraph_entry:                   |          zap_cursor_retrieve() {
           zpool-31988 [008] 162723.059674: funcgraph_entry:                   |            zap_lockdir() {
           zpool-31988 [008] 162723.059674: funcgraph_entry:                   |              dmu_buf_hold() {
           zpool-31988 [008] 162723.059675: funcgraph_entry:                   |                dnode_hold() {
           zpool-31988 [008] 162723.059675: funcgraph_entry:                   |                  dnode_hold_impl() {
           zpool-31988 [008] 162723.059676: funcgraph_entry:        0.553 us   |                    dbuf_whichblock();
           zpool-31988 [008] 162723.059678: funcgraph_entry:                   |                    dbuf_hold() {
           zpool-31988 [008] 162723.059678: funcgraph_entry:                   |                      dbuf_hold_impl() {
           zpool-31988 [008] 162723.059680: funcgraph_entry:                   |                        __dbuf_hold_impl() {
           zpool-31988 [008] 162723.059680: funcgraph_entry:                   |                          dbuf_find() {
           zpool-31988 [008] 162723.059681: funcgraph_entry:        1.180 us   |                            dbuf_hash();
           zpool-31988 [008] 162723.059683: funcgraph_exit:         2.935 us   |                          }
           zpool-31988 [008] 162723.059684: funcgraph_exit:         4.285 us   |                        }
           zpool-31988 [008] 162723.059685: funcgraph_exit:         6.600 us   |                      }
           zpool-31988 [008] 162723.059685: funcgraph_exit:         7.513 us   |                    }
           zpool-31988 [008] 162723.059686: funcgraph_entry:        0.649 us   |                    RW_WRITE_HELD();
           zpool-31988 [008] 162723.059687: funcgraph_entry:                   |                    dbuf_read() {
           zpool-31988 [008] 162723.059688: funcgraph_entry:        0.666 us   |                      zrl_add();
           zpool-31988 [008] 162723.059689: funcgraph_entry:        1.889 us   |                      dmu_zfetch();
           zpool-31988 [008] 162723.059692: funcgraph_entry:        0.746 us   |                      RW_WRITE_HELD();
           zpool-31988 [008] 162723.059693: funcgraph_entry:        0.470 us   |                      zrl_remove();
           zpool-31988 [008] 162723.059694: funcgraph_exit:         6.800 us   |                    }
           zpool-31988 [008] 162723.059694: funcgraph_entry:        0.544 us   |                    dmu_buf_get_user();
           zpool-31988 [008] 162723.059695: funcgraph_entry:        0.683 us   |                    zrl_add();
           zpool-31988 [008] 162723.059697: funcgraph_entry:        0.453 us   |                    zrl_remove();
           zpool-31988 [008] 162723.059698: funcgraph_entry:                   |                    dmu_buf_rele() {
           zpool-31988 [008] 162723.059699: funcgraph_entry:        0.673 us   |                      dbuf_rele_and_unlock();
           zpool-31988 [008] 162723.059700: funcgraph_exit:         1.633 us   |                    }
           zpool-31988 [008] 162723.059700: funcgraph_exit:       + 24.854 us  |                  }
           zpool-31988 [008] 162723.059701: funcgraph_exit:       + 25.793 us  |                }
           zpool-31988 [008] 162723.059701: funcgraph_entry:        0.443 us   |                dbuf_whichblock();
           zpool-31988 [008] 162723.059702: funcgraph_entry:                   |                dbuf_hold() {
           zpool-31988 [008] 162723.059702: funcgraph_entry:                   |                  dbuf_hold_impl() {
           zpool-31988 [008] 162723.059703: funcgraph_entry:                   |                    __dbuf_hold_impl() {
           zpool-31988 [008] 162723.059704: funcgraph_entry:                   |                      dbuf_find() {
           zpool-31988 [008] 162723.059704: funcgraph_entry:        0.766 us   |                        dbuf_hash();
           zpool-31988 [008] 162723.059706: funcgraph_exit:         2.165 us   |                      }
           zpool-31988 [008] 162723.059707: funcgraph_entry:                   |                      arc_buf_add_ref() {
           zpool-31988 [008] 162723.059709: funcgraph_entry:        0.960 us   |                        add_reference();
           zpool-31988 [008] 162723.059710: funcgraph_entry:        0.789 us   |                        arc_access();
           zpool-31988 [008] 162723.059711: funcgraph_exit:         4.815 us   |                      }
           zpool-31988 [008] 162723.059712: funcgraph_exit:         8.856 us   |                    }
           zpool-31988 [008] 162723.059713: funcgraph_exit:       + 10.125 us  |                  }
           zpool-31988 [008] 162723.059713: funcgraph_exit:       + 10.991 us  |                }
           zpool-31988 [008] 162723.059714: funcgraph_entry:                   |                dbuf_read() {
           zpool-31988 [008] 162723.059714: funcgraph_entry:        0.463 us   |                  zrl_add();
           zpool-31988 [008] 162723.059715: funcgraph_entry:        0.693 us   |                  RW_WRITE_HELD();
           zpool-31988 [008] 162723.059717: funcgraph_entry:        0.453 us   |                  zrl_remove();
           zpool-31988 [008] 162723.059718: funcgraph_exit:         3.965 us   |                }
           zpool-31988 [008] 162723.059718: funcgraph_entry:        0.622 us   |                dnode_rele();
           zpool-31988 [008] 162723.059719: funcgraph_exit:       + 44.955 us  |              }
           zpool-31988 [008] 162723.059720: funcgraph_entry:        0.560 us   |              dmu_buf_get_user();
           zpool-31988 [008] 162723.059721: funcgraph_exit:       + 47.130 us  |            }
           zpool-31988 [008] 162723.059722: funcgraph_entry:        0.597 us   |            mze_compare();
           zpool-31988 [008] 162723.059723: funcgraph_entry:        0.504 us   |            mzap_normalization_conflict();
           zpool-31988 [008] 162723.059725: funcgraph_exit:       + 51.352 us  |          }
           zpool-31988 [008] 162723.059726: funcgraph_entry:        0.433 us   |          zap_cursor_advance();
           zpool-31988 [008] 162723.059727: funcgraph_entry:                   |          zap_cursor_retrieve() {
           zpool-31988 [008] 162723.059727: funcgraph_entry:        0.520 us   |            mze_compare();
           zpool-31988 [008] 162723.059728: funcgraph_exit:         1.829 us   |          }
           zpool-31988 [008] 162723.059729: funcgraph_entry:                   |          zap_cursor_fini() {
           zpool-31988 [008] 162723.059729: funcgraph_entry:                   |            zap_unlockdir() {
           zpool-31988 [008] 162723.059730: funcgraph_entry:                   |              dmu_buf_rele() {
           zpool-31988 [008] 162723.059730: funcgraph_entry:                   |                dbuf_rele_and_unlock() {
           zpool-31988 [008] 162723.059731: funcgraph_entry:        0.520 us   |                  arc_buf_freeze();
           zpool-31988 [008] 162723.059732: funcgraph_entry:        0.553 us   |                  arc_released();
           zpool-31988 [008] 162723.059733: funcgraph_entry:                   |                  arc_buf_remove_ref() {
           zpool-31988 [008] 162723.059734: funcgraph_entry:        0.727 us   |                    remove_reference();
           zpool-31988 [008] 162723.059735: funcgraph_exit:         1.869 us   |                  }
           zpool-31988 [008] 162723.059736: funcgraph_entry:        0.873 us   |                  arc_buf_eviction_needed();
           zpool-31988 [008] 162723.059737: funcgraph_exit:         6.663 us   |                }
           zpool-31988 [008] 162723.059737: funcgraph_exit:         7.516 us   |              }
           zpool-31988 [008] 162723.059738: funcgraph_exit:         8.566 us   |            }
           zpool-31988 [008] 162723.059738: funcgraph_exit:         9.531 us   |          }
           zpool-31988 [008] 162723.059739: funcgraph_entry:        0.433 us   |          zap_cursor_init();
           zpool-31988 [008] 162723.059740: funcgraph_entry:                   |          zap_cursor_retrieve() {
           zpool-31988 [008] 162723.059740: funcgraph_entry:                   |            zap_lockdir() {
           zpool-31988 [008] 162723.059741: funcgraph_entry:                   |              dmu_buf_hold() {
           zpool-31988 [008] 162723.059741: funcgraph_entry:                   |                dnode_hold() {
           zpool-31988 [008] 162723.059741: funcgraph_entry:                   |                  dnode_hold_impl() {
           zpool-31988 [008] 162723.059742: funcgraph_entry:        0.507 us   |                    dbuf_whichblock();
           zpool-31988 [008] 162723.059743: funcgraph_entry:                   |                    dbuf_hold() {
           zpool-31988 [008] 162723.059743: funcgraph_entry:                   |                      dbuf_hold_impl() {
           zpool-31988 [008] 162723.059744: funcgraph_entry:                   |                        __dbuf_hold_impl() {
           zpool-31988 [008] 162723.059745: funcgraph_entry:                   |                          dbuf_find() {
           zpool-31988 [008] 162723.059745: funcgraph_entry:        0.456 us   |                            dbuf_hash();
           zpool-31988 [008] 162723.059746: funcgraph_exit:         1.619 us   |                          }
           zpool-31988 [008] 162723.059747: funcgraph_exit:         2.779 us   |                        }
           zpool-31988 [008] 162723.059747: funcgraph_exit:         3.991 us   |                      }
           zpool-31988 [008] 162723.059748: funcgraph_exit:         4.860 us   |                    }
           zpool-31988 [008] 162723.059748: funcgraph_entry:        0.574 us   |                    RW_WRITE_HELD();
           zpool-31988 [008] 162723.059749: funcgraph_entry:                   |                    dbuf_read() {
           zpool-31988 [008] 162723.059750: funcgraph_entry:        0.477 us   |                      zrl_add();
           zpool-31988 [008] 162723.059751: funcgraph_entry:        0.836 us   |                      dmu_zfetch();
           zpool-31988 [008] 162723.059752: funcgraph_entry:        0.573 us   |                      RW_WRITE_HELD();
           zpool-31988 [008] 162723.059753: funcgraph_entry:        0.492 us   |                      zrl_remove();
           zpool-31988 [008] 162723.059754: funcgraph_exit:         4.790 us   |                    }
           zpool-31988 [008] 162723.059754: funcgraph_entry:        0.456 us   |                    dmu_buf_get_user();
           zpool-31988 [008] 162723.059755: funcgraph_entry:        0.442 us   |                    zrl_add();
           zpool-31988 [008] 162723.059757: funcgraph_entry:        0.450 us   |                    zrl_remove();
           zpool-31988 [008] 162723.059757: funcgraph_entry:                   |                    dmu_buf_rele() {
           zpool-31988 [008] 162723.059758: funcgraph_entry:        0.554 us   |                      dbuf_rele_and_unlock();
           zpool-31988 [008] 162723.059759: funcgraph_exit:         1.392 us   |                    }
           zpool-31988 [008] 162723.059759: funcgraph_exit:       + 17.898 us  |                  }
           zpool-31988 [008] 162723.059760: funcgraph_exit:       + 18.723 us  |                }
           zpool-31988 [008] 162723.059760: funcgraph_entry:        0.440 us   |                dbuf_whichblock();
           zpool-31988 [008] 162723.059762: funcgraph_entry:                   |                dbuf_hold() {
           zpool-31988 [008] 162723.059762: funcgraph_entry:                   |                  dbuf_hold_impl() {
           zpool-31988 [008] 162723.059763: funcgraph_entry:                   |                    __dbuf_hold_impl() {
           zpool-31988 [008] 162723.059763: funcgraph_entry:                   |                      dbuf_find() {
           zpool-31988 [008] 162723.059764: funcgraph_entry:        0.606 us   |                        dbuf_hash();
           zpool-31988 [008] 162723.059766: funcgraph_exit:         2.216 us   |                      }
           zpool-31988 [008] 162723.059766: funcgraph_entry:                   |                      arc_buf_add_ref() {
           zpool-31988 [008] 162723.059767: funcgraph_entry:        0.642 us   |                        add_reference();
           zpool-31988 [008] 162723.059768: funcgraph_entry:        0.767 us   |                        arc_access();
           zpool-31988 [008] 162723.059770: funcgraph_exit:         3.636 us   |                      }
           zpool-31988 [008] 162723.059770: funcgraph_exit:         7.679 us   |                    }
           zpool-31988 [008] 162723.059771: funcgraph_exit:         8.983 us   |                  }
           zpool-31988 [008] 162723.059771: funcgraph_exit:       + 10.272 us  |                }
           zpool-31988 [008] 162723.059772: funcgraph_entry:                   |                dbuf_read() {
           zpool-31988 [008] 162723.059773: funcgraph_entry:        0.470 us   |                  zrl_add();
           zpool-31988 [008] 162723.059774: funcgraph_entry:        0.736 us   |                  RW_WRITE_HELD();
           zpool-31988 [008] 162723.059775: funcgraph_entry:        0.456 us   |                  zrl_remove();
           zpool-31988 [008] 162723.059776: funcgraph_exit:         3.669 us   |                }
           zpool-31988 [008] 162723.059776: funcgraph_entry:        0.607 us   |                dnode_rele();
           zpool-31988 [008] 162723.059777: funcgraph_exit:       + 36.672 us  |              }
           zpool-31988 [008] 162723.059778: funcgraph_entry:        0.410 us   |              dmu_buf_get_user();
           zpool-31988 [008] 162723.059779: funcgraph_exit:       + 38.511 us  |            }
           zpool-31988 [008] 162723.059779: funcgraph_entry:        0.560 us   |            mze_compare();
           zpool-31988 [008] 162723.059780: funcgraph_entry:        0.539 us   |            mze_compare();
           zpool-31988 [008] 162723.059781: funcgraph_entry:        0.444 us   |            mzap_normalization_conflict();
           zpool-31988 [008] 162723.059782: funcgraph_exit:       + 42.773 us  |          }
           zpool-31988 [008] 162723.059783: funcgraph_entry:        0.443 us   |          zap_cursor_advance();
           zpool-31988 [008] 162723.059784: funcgraph_entry:                   |          zap_cursor_retrieve() {
           zpool-31988 [008] 162723.059785: funcgraph_entry:        0.417 us   |            mze_compare();
           zpool-31988 [008] 162723.059786: funcgraph_entry:        0.520 us   |            mze_compare();
           zpool-31988 [008] 162723.059787: funcgraph_entry:        0.437 us   |            mzap_normalization_conflict();
           zpool-31988 [008] 162723.059788: funcgraph_exit:         3.705 us   |          }
           zpool-31988 [008] 162723.059789: funcgraph_entry:        0.426 us   |          zap_cursor_advance();
           zpool-31988 [008] 162723.059790: funcgraph_entry:                   |          zap_cursor_retrieve() {
           zpool-31988 [008] 162723.059790: funcgraph_entry:        0.609 us   |            mze_compare();
           zpool-31988 [008] 162723.059791: funcgraph_exit:         1.719 us   |          }
           zpool-31988 [008] 162723.059792: funcgraph_entry:                   |          zap_cursor_fini() {
           zpool-31988 [008] 162723.059792: funcgraph_entry:                   |            zap_unlockdir() {
           zpool-31988 [008] 162723.059793: funcgraph_entry:                   |              dmu_buf_rele() {
           zpool-31988 [008] 162723.059793: funcgraph_entry:                   |                dbuf_rele_and_unlock() {
           zpool-31988 [008] 162723.059794: funcgraph_entry:        0.430 us   |                  arc_buf_freeze();
           zpool-31988 [008] 162723.059795: funcgraph_entry:        0.524 us   |                  arc_released();
           zpool-31988 [008] 162723.059796: funcgraph_entry:                   |                  arc_buf_remove_ref() {
           zpool-31988 [008] 162723.059797: funcgraph_entry:        0.550 us   |                    remove_reference();
           zpool-31988 [008] 162723.059798: funcgraph_exit:         1.745 us   |                  }
           zpool-31988 [008] 162723.059798: funcgraph_entry:        0.546 us   |                  arc_buf_eviction_needed();
           zpool-31988 [008] 162723.059799: funcgraph_exit:         5.767 us   |                }
           zpool-31988 [008] 162723.059800: funcgraph_exit:         6.671 us   |              }
           zpool-31988 [008] 162723.059800: funcgraph_exit:         7.627 us   |            }
           zpool-31988 [008] 162723.059800: funcgraph_exit:         8.466 us   |          }
           zpool-31988 [008] 162723.059804: funcgraph_exit:       ! 133.309 us |        }
           zpool-31988 [008] 162723.059805: funcgraph_entry:        0.546 us   |        spa_altroot();
           zpool-31988 [008] 162723.059806: funcgraph_entry:        0.636 us   |        spa_config_exit();
           zpool-31988 [008] 162723.059807: funcgraph_entry:        0.424 us   |        spa_close();
           zpool-31988 [008] 162723.059808: funcgraph_exit:       ! 366.564 us |      }
           zpool-31988 [008] 162723.059808: funcgraph_entry:      + 19.320 us  |      put_nvlist();
           zpool-31988 [008] 162723.059838: funcgraph_exit:       ! 397.080 us |    }
           zpool-31988 [008] 162723.059842: funcgraph_exit:       ! 413.068 us |  }
           zpool-31988 [008] 162723.059934: funcgraph_entry:                   |  zfsdev_ioctl() {
           zpool-31988 [008] 162723.059938: funcgraph_entry:                   |    pool_status_check() {
           zpool-31988 [008] 162723.059938: funcgraph_entry:                   |      spa_open() {
           zpool-31988 [008] 162723.059939: funcgraph_entry:                   |        spa_open_common() {
           zpool-31988 [008] 162723.059940: funcgraph_entry:                   |          spa_lookup() {
           zpool-31988 [008] 162723.059941: funcgraph_entry:        0.580 us   |            spa_name_compare();
           zpool-31988 [008] 162723.059942: funcgraph_exit:         2.016 us   |          }
           zpool-31988 [008] 162723.059942: funcgraph_entry:        0.526 us   |          spa_open_ref();
           zpool-31988 [008] 162723.059943: funcgraph_exit:         4.272 us   |        }
           zpool-31988 [008] 162723.059944: funcgraph_exit:         5.295 us   |      }
           zpool-31988 [008] 162723.059944: funcgraph_entry:        0.500 us   |      spa_suspended();
           zpool-31988 [008] 162723.059945: funcgraph_entry:        0.504 us   |      spa_writeable();
           zpool-31988 [008] 162723.059946: funcgraph_entry:        0.446 us   |      spa_close();
           zpool-31988 [008] 162723.059947: funcgraph_exit:         9.333 us   |    }
           zpool-31988 [008] 162723.059948: funcgraph_entry:        0.416 us   |    zfs_secpolicy_config();
           zpool-31988 [008] 162723.059949: funcgraph_entry:                   |    zfs_ioc_pool_scan() {
           zpool-31988 [008] 162723.059950: funcgraph_entry:                   |      spa_open() {
           zpool-31988 [008] 162723.059950: funcgraph_entry:                   |        spa_open_common() {
           zpool-31988 [008] 162723.059951: funcgraph_entry:                   |          spa_lookup() {
           zpool-31988 [008] 162723.059951: funcgraph_entry:        0.507 us   |            spa_name_compare();
           zpool-31988 [008] 162723.059952: funcgraph_exit:         1.533 us   |          }
           zpool-31988 [008] 162723.059952: funcgraph_entry:        0.453 us   |          spa_open_ref();
           zpool-31988 [008] 162723.059953: funcgraph_exit:         3.322 us   |        }
           zpool-31988 [008] 162723.059954: funcgraph_exit:         4.132 us   |      }
           zpool-31988 [008] 162723.059954: funcgraph_entry:                   |      spa_scan() {
           zpool-31988 [008] 162723.059955: funcgraph_entry:                   |        dsl_scan() {
           zpool-31988 [008] 162723.059956: funcgraph_entry:                   |          spa_vdev_state_enter() {
           zpool-31988 [008] 162723.059956: funcgraph_entry:        0.882 us   |            spa_config_enter();
           zpool-31988 [008] 162723.059957: funcgraph_exit:         1.816 us   |          }
           zpool-31988 [008] 162723.059958: funcgraph_entry:                   |          vdev_reopen() {
           zpool-31988 [008] 162723.059958: funcgraph_entry:                   |            vdev_close() {
           zpool-31988 [008] 162723.059959: funcgraph_entry:                   |              vdev_root_close() {
           zpool-31988 [008] 162723.059960: funcgraph_entry:                   |                vdev_close() {
           zpool-31988 [008] 162723.059960: funcgraph_entry:                   |                  vdev_tier_close() {
           zpool-31988 [008] 162723.059961: funcgraph_entry:                   |                    vdev_close() {
           zpool-31988 [008] 162723.059962: funcgraph_entry:        0.529 us   |                      vdev_disk_close();
           zpool-31988 [008] 162723.059963: funcgraph_entry:        0.660 us   |                      vdev_cache_purge();
           zpool-31988 [008] 162723.059964: funcgraph_exit:         2.859 us   |                    }
           zpool-31988 [008] 162723.059964: funcgraph_entry:                   |                    vdev_close() {
           zpool-31988 [008] 162723.059965: funcgraph_entry:        0.457 us   |                      vdev_disk_close();
           zpool-31988 [008] 162723.059966: funcgraph_entry:        0.573 us   |                      vdev_cache_purge();
           zpool-31988 [008] 162723.059967: funcgraph_exit:         2.428 us   |                    }
           zpool-31988 [008] 162723.059967: funcgraph_exit:         6.783 us   |                  }
           zpool-31988 [008] 162723.059968: funcgraph_entry:        0.496 us   |                  vdev_cache_purge();
           zpool-31988 [008] 162723.059969: funcgraph_exit:         8.972 us   |                }
           zpool-31988 [008] 162723.059969: funcgraph_exit:         9.962 us   |              }
           zpool-31988 [008] 162723.059970: funcgraph_entry:        0.567 us   |              vdev_cache_purge();
           zpool-31988 [008] 162723.059971: funcgraph_exit:       + 12.151 us  |            }
           zpool-31988 [008] 162723.059971: funcgraph_entry:                   |            vdev_open() {
           zpool-31988 [008] 162723.059972: funcgraph_entry:        0.543 us   |              vdev_get_min_asize();
           zpool-31988 [008] 162723.059973: funcgraph_entry:                   |              vdev_root_open() {
           zpool-31988 [008] 162723.059973: funcgraph_entry:                   |                vdev_open_children() {
           zpool-31988 [008] 162723.059974: funcgraph_entry:                   |                  vdev_uses_zvols() {
           zpool-31988 [008] 162723.059974: funcgraph_entry:        0.579 us   |                    zvol_is_zvol();
           zpool-31988 [008] 162723.059975: funcgraph_entry:                   |                    vdev_uses_zvols() {
           zpool-31988 [008] 162723.059976: funcgraph_entry:        0.440 us   |                      zvol_is_zvol();
           zpool-31988 [008] 162723.059977: funcgraph_entry:                   |                      vdev_uses_zvols() {
           zpool-31988 [008] 162723.059977: funcgraph_entry:        5.021 us   |                        zvol_is_zvol();
           zpool-31988 [008] 162723.059983: funcgraph_exit:         5.941 us   |                      }
           zpool-31988 [008] 162723.059983: funcgraph_entry:                   |                      vdev_uses_zvols() {
           zpool-31988 [008] 162723.059984: funcgraph_entry:        2.999 us   |                        zvol_is_zvol();
           zpool-31988 [008] 162723.059988: funcgraph_exit:         4.204 us   |                      }
           zpool-31988 [008] 162723.059988: funcgraph_exit:       + 12.648 us  |                    }
           zpool-31988 [008] 162723.059989: funcgraph_exit:       + 14.869 us  |                  }
           zpool-31988 [008] 162723.082625: funcgraph_exit:       + 60.274 us  |                }
           zpool-31988 [008] 162723.082627: funcgraph_exit:       + 62.343 us  |              }
           zpool-31988 [008] 162723.082629: funcgraph_entry:        2.069 us   |              vdev_set_state();
           zpool-31988 [008] 162723.082631: funcgraph_entry:                   |              vdev_set_min_asize() {
           zpool-31988 [008] 162723.082632: funcgraph_entry:        0.987 us   |                vdev_get_min_asize();
           zpool-31988 [008] 162723.082634: funcgraph_entry:                   |                vdev_set_min_asize() {
           zpool-31988 [008] 162723.082635: funcgraph_entry:        1.369 us   |                  vdev_get_min_asize();
           zpool-31988 [008] 162723.082637: funcgraph_entry:                   |                  vdev_set_min_asize() {
           zpool-31988 [008] 162723.082638: funcgraph_entry:        0.796 us   |                    vdev_get_min_asize();
           zpool-31988 [008] 162723.082640: funcgraph_exit:         2.992 us   |                  }
           zpool-31988 [008] 162723.082641: funcgraph_entry:                   |                  vdev_set_min_asize() {
           zpool-31988 [008] 162723.082642: funcgraph_entry:        0.896 us   |                    vdev_get_min_asize();
           zpool-31988 [008] 162723.082643: funcgraph_exit:         2.305 us   |                  }
           zpool-31988 [008] 162723.082644: funcgraph_exit:       + 10.462 us  |                }
           zpool-31988 [008] 162723.082645: funcgraph_exit:       + 13.777 us  |              }
           zpool-31988 [008] 162723.082645: funcgraph_exit:       + 82.816 us  |            }
           zpool-31988 [008] 162723.082646: funcgraph_entry:                   |            vdev_validate() {
           zpool-31988 [008] 162723.082646: funcgraph_entry:                   |              vdev_validate() {
           zpool-31988 [008] 162723.082647: funcgraph_entry:                   |                vdev_validate() {
           zpool-31988 [008] 162723.082648: funcgraph_entry:        0.447 us   |                  spa_last_synced_txg();
           zpool-31988 [008] 162723.082649: funcgraph_entry:        0.440 us   |                  spa_last_synced_txg();
           zpool-31988 [008] 162723.082650: funcgraph_entry:                   |                  vdev_label_read_config() {
           zpool-31988 [008] 162723.082650: funcgraph_entry:        0.433 us   |                    vdev_readable();
           zpool-31988 [008] 162723.082651: funcgraph_entry:        1.585 us   |                    zio_buf_alloc();
           zpool-31988 [008] 162723.082653: funcgraph_entry:                   |                    zio_root() {
           zpool-31988 [008] 162723.082654: funcgraph_entry:                   |                      zio_null() {
           zpool-31988 [008] 162723.082654: funcgraph_entry:        1.872 us   |                        zio_create();
           zpool-31988 [008] 162723.082657: funcgraph_exit:         2.819 us   |                      }
           zpool-31988 [008] 162723.082657: funcgraph_exit:         3.745 us   |                    }
           zpool-31988 [008] 162723.082658: funcgraph_entry:                   |                    zio_read_phys() {
           zpool-31988 [008] 162723.082658: funcgraph_entry:                   |                      zio_create() {
           zpool-31988 [008] 162723.082659: funcgraph_entry:        1.309 us   |                        zio_add_child();
           zpool-31988 [008] 162723.082661: funcgraph_exit:         2.743 us   |                      }
           zpool-31988 [008] 162723.082661: funcgraph_exit:         3.626 us   |                    }
           zpool-31988 [008] 162723.082662: funcgraph_entry:                   |                    zio_nowait() {
           zpool-31988 [008] 162723.082662: funcgraph_entry:        0.460 us   |                      spa_get_dsl();
           zpool-31988 [008] 162723.082663: funcgraph_entry:        0.456 us   |                      spa_is_initializing();
           zpool-31988 [008] 162723.082664: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [008] 162723.082665: funcgraph_entry:        0.480 us   |                        zio_wait_for_children();
           zpool-31988 [008] 162723.082666: funcgraph_entry:        0.450 us   |                        zio_wait_for_children();
           zpool-31988 [008] 162723.082667: funcgraph_entry:        0.486 us   |                        zio_walk_parents();
           zpool-31988 [008] 162723.082668: funcgraph_entry:        0.464 us   |                        zio_walk_parents();
           zpool-31988 [008] 162723.082669: funcgraph_exit:         4.645 us   |                      }
           zpool-31988 [008] 162723.082670: funcgraph_entry:        0.553 us   |                      spa_get_dsl();
           zpool-31988 [008] 162723.082671: funcgraph_entry:        0.547 us   |                      spa_is_initializing();
           zpool-31988 [008] 162723.082672: funcgraph_entry:                   |                      zio_vdev_io_start() {
           zpool-31988 [008] 162723.082673: funcgraph_entry:        0.473 us   |                        vdev_cache_read();
           zpool-31988 [008] 162723.082674: funcgraph_entry:                   |                        vdev_queue_io() {
           zpool-31988 [008] 162723.082675: funcgraph_entry:                   |                          vdev_queue_io_to_issue() {
           zpool-31988 [008] 162723.082676: funcgraph_entry:        0.973 us   |                            zio_buf_alloc();
           zpool-31988 [008] 162723.082678: funcgraph_entry:        0.429 us   |                            vdev_queue_timestamp_compare();
           zpool-31988 [008] 162723.082679: funcgraph_entry:        0.683 us   |                            zio_buf_free();
           zpool-31988 [008] 162723.082680: funcgraph_entry:        0.876 us   |                            vdev_queue_io_remove();
           zpool-31988 [008] 162723.082682: funcgraph_exit:         6.114 us   |                          }
           zpool-31988 [008] 162723.082682: funcgraph_exit:         8.435 us   |                        }
           zpool-31988 [008] 162723.082683: funcgraph_entry:        0.537 us   |                        vdev_accessible();
           zpool-31988 [008] 162723.082684: funcgraph_entry:                   |                        vdev_disk_io_start() {
           zpool-31988 [008] 162723.082684: funcgraph_entry:                   |                          __vdev_disk_physio() {
           zpool-31988 [008] 162723.082715: funcgraph_entry:        0.752 us   |                            vdev_disk_dio_put();
           zpool-31988 [008] 162723.082716: funcgraph_exit:       + 31.718 us  |                          }
           zpool-31988 [008] 162723.082716: funcgraph_exit:       + 32.664 us  |                        }
           zpool-31988 [008] 162723.082717: funcgraph_exit:       + 44.852 us  |                      }
           zpool-31988 [008] 162723.082717: funcgraph_exit:       + 55.460 us  |                    }
           zpool-31988 [008] 162723.082718: funcgraph_entry:                   |                    zio_wait() {
           zpool-31988 [008] 162723.082719: funcgraph_entry:        0.449 us   |                      spa_get_dsl();
           zpool-31988 [008] 162723.082720: funcgraph_entry:        0.450 us   |                      spa_is_initializing();
           zpool-31988 [008] 162723.082721: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [008] 162723.082721: funcgraph_entry:        0.447 us   |                        zio_wait_for_children();
           zpool-31988 [008] 162723.082722: funcgraph_entry:        0.450 us   |                        zio_wait_for_children();
           zpool-31988 [008] 162723.082723: funcgraph_entry:        0.412 us   |                        zio_walk_parents();
           zpool-31988 [008] 162723.082724: funcgraph_exit:         3.145 us   |                      }
           zpool-31988 [008] 162723.082724: funcgraph_entry:        0.443 us   |                      spa_get_dsl();
           zpool-31988 [008] 162723.082725: funcgraph_entry:        0.424 us   |                      spa_is_initializing();
           zpool-31988 [008] 162723.082726: funcgraph_entry:                   |                      zio_done() {
           zpool-31988 [008] 162723.082726: funcgraph_entry:        0.463 us   |                        zio_wait_for_children();
           zpool-31988 [008] 162723.082727: funcgraph_exit:         1.302 us   |                      }
           zpool-31988 [008] 162723.087665: funcgraph_exit:       + 18.871 us  |                    }
           zpool-31988 [008] 162723.087737: funcgraph_entry:                   |                    zio_root() {
           zpool-31988 [008] 162723.087738: funcgraph_entry:                   |                      zio_null() {
           zpool-31988 [008] 162723.087739: funcgraph_entry:        2.416 us   |                        zio_create();
           zpool-31988 [008] 162723.087742: funcgraph_exit:         3.723 us   |                      }
           zpool-31988 [008] 162723.087742: funcgraph_exit:         5.664 us   |                    }
           zpool-31988 [008] 162723.087743: funcgraph_entry:                   |                    zio_read_phys() {
           zpool-31988 [008] 162723.087744: funcgraph_entry:                   |                      zio_create() {
           zpool-31988 [008] 162723.087745: funcgraph_entry:        1.163 us   |                        zio_add_child();
           zpool-31988 [008] 162723.087747: funcgraph_exit:         3.024 us   |                      }
           zpool-31988 [008] 162723.087747: funcgraph_exit:         4.162 us   |                    }
           zpool-31988 [008] 162723.087748: funcgraph_entry:                   |                    zio_nowait() {
           zpool-31988 [008] 162723.087749: funcgraph_entry:        0.574 us   |                      spa_get_dsl();
           zpool-31988 [008] 162723.087750: funcgraph_entry:        0.733 us   |                      spa_is_initializing();
           zpool-31988 [008] 162723.087752: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [008] 162723.087752: funcgraph_entry:        0.586 us   |                        zio_wait_for_children();
           zpool-31988 [008] 162723.087754: funcgraph_entry:        0.610 us   |                        zio_wait_for_children();
           zpool-31988 [008] 162723.087755: funcgraph_entry:        0.590 us   |                        zio_walk_parents();
           zpool-31988 [008] 162723.087756: funcgraph_entry:        0.582 us   |                        zio_walk_parents();
           zpool-31988 [008] 162723.087757: funcgraph_exit:         5.657 us   |                      }
           zpool-31988 [008] 162723.087758: funcgraph_entry:        0.543 us   |                      spa_get_dsl();
           zpool-31988 [008] 162723.087759: funcgraph_entry:        0.543 us   |                      spa_is_initializing();
           zpool-31988 [008] 162723.087760: funcgraph_entry:                   |                      zio_vdev_io_start() {
           zpool-31988 [008] 162723.087761: funcgraph_entry:        0.584 us   |                        vdev_cache_read();
           zpool-31988 [008] 162723.087763: funcgraph_entry:                   |                        vdev_queue_io() {
           zpool-31988 [008] 162723.087765: funcgraph_entry:                   |                          vdev_queue_io_to_issue() {
           zpool-31988 [008] 162723.087765: funcgraph_entry:        0.877 us   |                            zio_buf_alloc();
           zpool-31988 [008] 162723.087767: funcgraph_entry:        0.523 us   |                            vdev_queue_timestamp_compare();
           zpool-31988 [008] 162723.087768: funcgraph_entry:        0.806 us   |                            zio_buf_free();
           zpool-31988 [008] 162723.087769: funcgraph_entry:        1.063 us   |                            vdev_queue_io_remove();
           zpool-31988 [008] 162723.087772: funcgraph_exit:         6.697 us   |                          }
           zpool-31988 [008] 162723.087772: funcgraph_exit:         9.452 us   |                        }
           zpool-31988 [008] 162723.087773: funcgraph_entry:        0.614 us   |                        vdev_accessible();
           zpool-31988 [008] 162723.087774: funcgraph_entry:                   |                        vdev_disk_io_start() {
           zpool-31988 [008] 162723.087775: funcgraph_entry:                   |                          __vdev_disk_physio() {
           zpool-31988 [008] 162723.087806: funcgraph_entry:        1.209 us   |                            vdev_disk_dio_put();
           zpool-31988 [008] 162723.087807: funcgraph_exit:       + 32.351 us  |                          }
           zpool-31988 [008] 162723.087808: funcgraph_exit:       + 33.713 us  |                        }
           zpool-31988 [008] 162723.087809: funcgraph_exit:       + 48.239 us  |                      }
           zpool-31988 [008] 162723.087809: funcgraph_exit:       + 61.320 us  |                    }
           zpool-31988 [008] 162723.087810: funcgraph_entry:                   |                    zio_wait() {
           zpool-31988 [008] 162723.087811: funcgraph_entry:        0.590 us   |                      spa_get_dsl();
           zpool-31988 [008] 162723.087812: funcgraph_entry:        0.666 us   |                      spa_is_initializing();
           zpool-31988 [008] 162723.087814: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [008] 162723.087815: funcgraph_entry:        1.433 us   |                        zio_wait_for_children();
           zpool-31988 [008] 162723.087816: funcgraph_entry:        0.590 us   |                        zio_wait_for_children();
           zpool-31988 [008] 162723.087817: funcgraph_entry:        0.602 us   |                        zio_walk_parents();
           zpool-31988 [008] 162723.087819: funcgraph_exit:         5.123 us   |                      }
           zpool-31988 [008] 162723.087819: funcgraph_entry:        0.626 us   |                      spa_get_dsl();
           zpool-31988 [008] 162723.087821: funcgraph_entry:        0.574 us   |                      spa_is_initializing();
           zpool-31988 [008] 162723.087822: funcgraph_entry:                   |                      zio_done() {
           zpool-31988 [008] 162723.087822: funcgraph_entry:        0.643 us   |                        zio_wait_for_children();
           zpool-31988 [008] 162723.087823: funcgraph_exit:         1.709 us   |                      }
           zpool-31988 [001] 162723.092647: funcgraph_exit:       + 25.521 us  |                    }
           zpool-31988 [001] 162723.092690: funcgraph_entry:                   |                    zio_root() {
           zpool-31988 [001] 162723.092691: funcgraph_entry:                   |                      zio_null() {
           zpool-31988 [001] 162723.092691: funcgraph_entry:        1.739 us   |                        zio_create();
           zpool-31988 [001] 162723.092693: funcgraph_exit:         2.713 us   |                      }
           zpool-31988 [001] 162723.092694: funcgraph_exit:         3.981 us   |                    }
           zpool-31988 [001] 162723.092694: funcgraph_entry:                   |                    zio_read_phys() {
           zpool-31988 [001] 162723.092695: funcgraph_entry:                   |                      zio_create() {
           zpool-31988 [001] 162723.092696: funcgraph_entry:        1.106 us   |                        zio_add_child();
           zpool-31988 [001] 162723.092698: funcgraph_exit:         2.813 us   |                      }
           zpool-31988 [001] 162723.092698: funcgraph_exit:         3.871 us   |                    }
           zpool-31988 [001] 162723.092699: funcgraph_entry:                   |                    zio_nowait() {
           zpool-31988 [001] 162723.092699: funcgraph_entry:        0.454 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.092700: funcgraph_entry:        0.573 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.092702: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [001] 162723.092702: funcgraph_entry:        0.593 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.092703: funcgraph_entry:        0.530 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.092704: funcgraph_entry:        0.527 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.092705: funcgraph_entry:        0.510 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.092707: funcgraph_exit:         4.794 us   |                      }
           zpool-31988 [001] 162723.092708: funcgraph_entry:        0.467 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.092709: funcgraph_entry:        0.463 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.092710: funcgraph_entry:                   |                      zio_vdev_io_start() {
           zpool-31988 [001] 162723.092710: funcgraph_entry:        0.524 us   |                        vdev_cache_read();
           zpool-31988 [001] 162723.092711: funcgraph_entry:                   |                        vdev_queue_io() {
           zpool-31988 [001] 162723.092713: funcgraph_entry:                   |                          vdev_queue_io_to_issue() {
           zpool-31988 [001] 162723.092714: funcgraph_entry:        0.859 us   |                            zio_buf_alloc();
           zpool-31988 [001] 162723.092715: funcgraph_entry:        0.410 us   |                            vdev_queue_timestamp_compare();
           zpool-31988 [001] 162723.092716: funcgraph_entry:        0.652 us   |                            zio_buf_free();
           zpool-31988 [001] 162723.092717: funcgraph_entry:        0.780 us   |                            vdev_queue_io_remove();
           zpool-31988 [001] 162723.092719: funcgraph_exit:         5.734 us   |                          }
           zpool-31988 [001] 162723.092719: funcgraph_exit:         7.646 us   |                        }
           zpool-31988 [001] 162723.092720: funcgraph_entry:        0.613 us   |                        vdev_accessible();
           zpool-31988 [001] 162723.092721: funcgraph_entry:                   |                        vdev_disk_io_start() {
           zpool-31988 [001] 162723.092721: funcgraph_entry:                   |                          __vdev_disk_physio() {
           zpool-31988 [001] 162723.092753: funcgraph_entry:        0.749 us   |                            vdev_disk_dio_put();
           zpool-31988 [001] 162723.092754: funcgraph_exit:       + 32.671 us  |                          }
           zpool-31988 [001] 162723.092754: funcgraph_exit:       + 33.631 us  |                        }
           zpool-31988 [001] 162723.092755: funcgraph_exit:       + 45.278 us  |                      }
           zpool-31988 [001] 162723.092755: funcgraph_exit:       + 56.585 us  |                    }
           zpool-31988 [001] 162723.092756: funcgraph_entry:                   |                    zio_wait() {
           zpool-31988 [001] 162723.092756: funcgraph_entry:        0.420 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.092757: funcgraph_entry:        0.446 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.092758: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [001] 162723.092759: funcgraph_entry:        0.450 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.092760: funcgraph_entry:        0.463 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.092760: funcgraph_entry:        0.440 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.092761: funcgraph_exit:         3.122 us   |                      }
           zpool-31988 [001] 162723.092762: funcgraph_entry:        0.433 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.092763: funcgraph_entry:        0.450 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.092764: funcgraph_entry:                   |                      zio_done() {
           zpool-31988 [001] 162723.092764: funcgraph_entry:        0.473 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.092765: funcgraph_exit:         1.440 us   |                      }
           zpool-31988 [001] 162723.096240: funcgraph_exit:       + 16.956 us  |                    }
           zpool-31988 [001] 162723.096258: funcgraph_entry:                   |                    zio_root() {
           zpool-31988 [001] 162723.096258: funcgraph_entry:                   |                      zio_null() {
           zpool-31988 [001] 162723.096258: funcgraph_entry:        0.747 us   |                        zio_create();
           zpool-31988 [001] 162723.096259: funcgraph_exit:         1.296 us   |                      }
           zpool-31988 [001] 162723.096259: funcgraph_exit:         1.879 us   |                    }
           zpool-31988 [001] 162723.096260: funcgraph_entry:                   |                    zio_read_phys() {
           zpool-31988 [001] 162723.096260: funcgraph_entry:                   |                      zio_create() {
           zpool-31988 [001] 162723.096261: funcgraph_entry:        0.585 us   |                        zio_add_child();
           zpool-31988 [001] 162723.096261: funcgraph_exit:         1.457 us   |                      }
           zpool-31988 [001] 162723.096262: funcgraph_exit:         1.909 us   |                    }
           zpool-31988 [001] 162723.096262: funcgraph_entry:                   |                    zio_nowait() {
           zpool-31988 [001] 162723.096262: funcgraph_entry:        0.235 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.096263: funcgraph_entry:        0.231 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.096263: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [001] 162723.096264: funcgraph_entry:        0.245 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.096264: funcgraph_entry:        0.278 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.096265: funcgraph_entry:        0.233 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.096265: funcgraph_entry:        0.252 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.096266: funcgraph_exit:         2.326 us   |                      }
           zpool-31988 [001] 162723.096266: funcgraph_entry:        0.212 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.096266: funcgraph_entry:        0.228 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.096267: funcgraph_entry:                   |                      zio_vdev_io_start() {
           zpool-31988 [001] 162723.096267: funcgraph_entry:        0.261 us   |                        vdev_cache_read();
           zpool-31988 [001] 162723.096268: funcgraph_entry:                   |                        vdev_queue_io() {
           zpool-31988 [001] 162723.096269: funcgraph_entry:                   |                          vdev_queue_io_to_issue() {
           zpool-31988 [001] 162723.096269: funcgraph_entry:        0.387 us   |                            zio_buf_alloc();
           zpool-31988 [001] 162723.096270: funcgraph_entry:        0.318 us   |                            vdev_queue_timestamp_compare();
           zpool-31988 [001] 162723.096270: funcgraph_entry:        0.374 us   |                            zio_buf_free();
           zpool-31988 [001] 162723.096271: funcgraph_entry:        0.467 us   |                            vdev_queue_io_remove();
           zpool-31988 [001] 162723.096272: funcgraph_exit:         3.261 us   |                          }
           zpool-31988 [001] 162723.096272: funcgraph_exit:         4.311 us   |                        }
           zpool-31988 [001] 162723.096272: funcgraph_entry:        0.320 us   |                        vdev_accessible();
           zpool-31988 [001] 162723.096273: funcgraph_entry:                   |                        vdev_disk_io_start() {
           zpool-31988 [001] 162723.096273: funcgraph_entry:                   |                          __vdev_disk_physio() {
           zpool-31988 [001] 162723.096288: funcgraph_entry:        0.309 us   |                            vdev_disk_dio_put();
           zpool-31988 [001] 162723.096289: funcgraph_exit:       + 15.189 us  |                          }
           zpool-31988 [001] 162723.096289: funcgraph_exit:       + 15.798 us  |                        }
           zpool-31988 [001] 162723.096289: funcgraph_exit:       + 22.413 us  |                      }
           zpool-31988 [001] 162723.096289: funcgraph_exit:       + 27.677 us  |                    }
           zpool-31988 [001] 162723.096290: funcgraph_entry:                   |                    zio_wait() {
           zpool-31988 [001] 162723.096290: funcgraph_entry:        0.256 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.096291: funcgraph_entry:        0.320 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.096291: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [001] 162723.096292: funcgraph_entry:        0.280 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.096292: funcgraph_entry:        0.306 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.096293: funcgraph_entry:        0.313 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.096293: funcgraph_exit:         1.987 us   |                      }
           zpool-31988 [001] 162723.096294: funcgraph_entry:        0.268 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.096294: funcgraph_entry:        0.305 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.096295: funcgraph_entry:                   |                      zio_done() {
           zpool-31988 [001] 162723.096295: funcgraph_entry:        0.348 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.096296: funcgraph_exit:         0.996 us   |                      }
           zpool-31988 [001] 162723.099069: funcgraph_exit:       + 10.212 us  |                    }
           zpool-31988 [001] 162723.099086: funcgraph_entry:        0.891 us   |                    zio_buf_free();
           zpool-31988 [001] 162723.099087: funcgraph_exit:       ! 462.780 us |                  }
           zpool-31988 [001] 162723.099089: funcgraph_entry:                   |                  spa_guid() {
           zpool-31988 [001] 162723.099089: funcgraph_entry:                   |                    dsl_pool_sync_context() {
           zpool-31988 [001] 162723.099089: funcgraph_entry:        0.316 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.099090: funcgraph_exit:         1.027 us   |                    }
           zpool-31988 [001] 162723.099090: funcgraph_exit:         1.704 us   |                  }
           zpool-31988 [001] 162723.099096: funcgraph_entry:        0.358 us   |                  spa_load_state();
           zpool-31988 [001] 162723.099096: funcgraph_exit:       ! 474.603 us |                }
           zpool-31988 [001] 162723.099097: funcgraph_entry:                   |                vdev_validate() {
           zpool-31988 [001] 162723.099097: funcgraph_entry:        0.360 us   |                  spa_last_synced_txg();
           zpool-31988 [001] 162723.099098: funcgraph_entry:        0.348 us   |                  spa_last_synced_txg();
           zpool-31988 [001] 162723.099099: funcgraph_entry:                   |                  vdev_label_read_config() {
           zpool-31988 [001] 162723.099099: funcgraph_entry:        0.285 us   |                    vdev_readable();
           zpool-31988 [001] 162723.099099: funcgraph_entry:        0.480 us   |                    zio_buf_alloc();
           zpool-31988 [001] 162723.099100: funcgraph_entry:                   |                    zio_root() {
           zpool-31988 [001] 162723.099101: funcgraph_entry:                   |                      zio_null() {
           zpool-31988 [001] 162723.099101: funcgraph_entry:        0.721 us   |                        zio_create();
           zpool-31988 [001] 162723.099102: funcgraph_exit:         1.340 us   |                      }
           zpool-31988 [001] 162723.099102: funcgraph_exit:         1.924 us   |                    }
           zpool-31988 [001] 162723.099102: funcgraph_entry:                   |                    zio_read_phys() {
           zpool-31988 [001] 162723.099103: funcgraph_entry:                   |                      zio_create() {
           zpool-31988 [001] 162723.099103: funcgraph_entry:        0.556 us   |                        zio_add_child();
           zpool-31988 [001] 162723.099104: funcgraph_exit:         1.438 us   |                      }
           zpool-31988 [001] 162723.099104: funcgraph_exit:         2.023 us   |                    }
           zpool-31988 [001] 162723.099105: funcgraph_entry:                   |                    zio_nowait() {
           zpool-31988 [001] 162723.099105: funcgraph_entry:        0.296 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.099106: funcgraph_entry:        0.302 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.099107: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [001] 162723.099107: funcgraph_entry:        0.318 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.099108: funcgraph_entry:        0.350 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.099108: funcgraph_entry:        0.264 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.099109: funcgraph_entry:        0.299 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.099110: funcgraph_exit:         3.064 us   |                      }
           zpool-31988 [001] 162723.099110: funcgraph_entry:        0.329 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.099110: funcgraph_entry:        0.303 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.099111: funcgraph_entry:                   |                      zio_vdev_io_start() {
           zpool-31988 [001] 162723.099111: funcgraph_entry:        0.314 us   |                        vdev_cache_read();
           zpool-31988 [001] 162723.099112: funcgraph_entry:                   |                        vdev_queue_io() {
           zpool-31988 [001] 162723.099113: funcgraph_entry:                   |                          vdev_queue_io_to_issue() {
           zpool-31988 [001] 162723.099113: funcgraph_entry:        0.449 us   |                            zio_buf_alloc();
           zpool-31988 [001] 162723.099114: funcgraph_entry:        0.273 us   |                            vdev_queue_timestamp_compare();
           zpool-31988 [001] 162723.099114: funcgraph_entry:        0.333 us   |                            zio_buf_free();
           zpool-31988 [001] 162723.099115: funcgraph_entry:        0.407 us   |                            vdev_queue_io_remove();
           zpool-31988 [001] 162723.099116: funcgraph_exit:         3.239 us   |                          }
           zpool-31988 [001] 162723.099116: funcgraph_exit:         4.313 us   |                        }
           zpool-31988 [001] 162723.099117: funcgraph_entry:        0.356 us   |                        vdev_accessible();
           zpool-31988 [001] 162723.099117: funcgraph_entry:                   |                        vdev_disk_io_start() {
           zpool-31988 [001] 162723.099118: funcgraph_entry:                   |                          __vdev_disk_physio() {
           zpool-31988 [001] 162723.099123: funcgraph_entry:        0.281 us   |                            vdev_disk_dio_put();
           zpool-31988 [001] 162723.099124: funcgraph_exit:         6.193 us   |                          }
           zpool-31988 [001] 162723.099124: funcgraph_exit:         6.847 us   |                        }
           zpool-31988 [001] 162723.099124: funcgraph_exit:       + 13.376 us  |                      }
           zpool-31988 [001] 162723.099125: funcgraph_exit:       + 19.902 us  |                    }
           zpool-31988 [001] 162723.099125: funcgraph_entry:                   |                    zio_wait() {
           zpool-31988 [001] 162723.099125: funcgraph_entry:        0.292 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.099126: funcgraph_entry:        0.270 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.099127: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [001] 162723.099127: funcgraph_entry:        0.310 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.099127: funcgraph_entry:        0.299 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.099128: funcgraph_entry:        0.341 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.099129: funcgraph_exit:         2.206 us   |                      }
           zpool-31988 [001] 162723.099129: funcgraph_entry:        0.323 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.099130: funcgraph_entry:        0.291 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.099130: funcgraph_entry:                   |                      zio_done() {
           zpool-31988 [001] 162723.099131: funcgraph_entry:        0.365 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.099131: funcgraph_exit:         0.974 us   |                      }
           zpool-31988 [001] 162723.103781: funcgraph_exit:       + 10.034 us  |                    }
           zpool-31988 [001] 162723.103806: funcgraph_entry:                   |                    zio_root() {
           zpool-31988 [001] 162723.103806: funcgraph_entry:                   |                      zio_null() {
           zpool-31988 [001] 162723.103807: funcgraph_entry:        0.749 us   |                        zio_create();
           zpool-31988 [001] 162723.103808: funcgraph_exit:         1.328 us   |                      }
           zpool-31988 [001] 162723.103808: funcgraph_exit:         1.968 us   |                    }
           zpool-31988 [001] 162723.103808: funcgraph_entry:                   |                    zio_read_phys() {
           zpool-31988 [001] 162723.103809: funcgraph_entry:                   |                      zio_create() {
           zpool-31988 [001] 162723.103809: funcgraph_entry:        0.608 us   |                        zio_add_child();
           zpool-31988 [001] 162723.103810: funcgraph_exit:         1.519 us   |                      }
           zpool-31988 [001] 162723.103810: funcgraph_exit:         2.079 us   |                    }
           zpool-31988 [001] 162723.103811: funcgraph_entry:                   |                    zio_nowait() {
           zpool-31988 [001] 162723.103811: funcgraph_entry:        0.276 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.103812: funcgraph_entry:        0.292 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.103812: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [001] 162723.103813: funcgraph_entry:        0.393 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.103814: funcgraph_entry:        0.299 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.103814: funcgraph_entry:        0.339 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.103815: funcgraph_entry:        0.596 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.103816: funcgraph_exit:         3.155 us   |                      }
           zpool-31988 [001] 162723.103816: funcgraph_entry:        0.367 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.103817: funcgraph_entry:        0.256 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.103817: funcgraph_entry:                   |                      zio_vdev_io_start() {
           zpool-31988 [001] 162723.103817: funcgraph_entry:        0.277 us   |                        vdev_cache_read();
           zpool-31988 [001] 162723.103818: funcgraph_entry:                   |                        vdev_queue_io() {
           zpool-31988 [001] 162723.103819: funcgraph_entry:                   |                          vdev_queue_io_to_issue() {
           zpool-31988 [001] 162723.103819: funcgraph_entry:        0.419 us   |                            zio_buf_alloc();
           zpool-31988 [001] 162723.103820: funcgraph_entry:        0.309 us   |                            vdev_queue_timestamp_compare();
           zpool-31988 [001] 162723.103820: funcgraph_entry:        0.353 us   |                            zio_buf_free();
           zpool-31988 [001] 162723.103821: funcgraph_entry:        0.416 us   |                            vdev_queue_io_remove();
           zpool-31988 [001] 162723.103822: funcgraph_exit:         3.165 us   |                          }
           zpool-31988 [001] 162723.103822: funcgraph_exit:         4.130 us   |                        }
           zpool-31988 [001] 162723.103823: funcgraph_entry:        0.285 us   |                        vdev_accessible();
           zpool-31988 [001] 162723.103823: funcgraph_entry:                   |                        vdev_disk_io_start() {
           zpool-31988 [001] 162723.103824: funcgraph_entry:                   |                          __vdev_disk_physio() {
           zpool-31988 [001] 162723.103828: funcgraph_entry:        0.283 us   |                            vdev_disk_dio_put();
           zpool-31988 [001] 162723.103829: funcgraph_exit:         5.376 us   |                          }
           zpool-31988 [001] 162723.103829: funcgraph_exit:         5.966 us   |                        }
           zpool-31988 [001] 162723.103829: funcgraph_exit:       + 12.344 us  |                      }
           zpool-31988 [001] 162723.103830: funcgraph_exit:       + 18.977 us  |                    }
           zpool-31988 [001] 162723.103830: funcgraph_entry:                   |                    zio_wait() {
           zpool-31988 [001] 162723.103830: funcgraph_entry:        0.309 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.103831: funcgraph_entry:        0.285 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.103832: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [001] 162723.103832: funcgraph_entry:        0.365 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.103832: funcgraph_entry:        0.309 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.103833: funcgraph_entry:        0.297 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.103834: funcgraph_exit:         2.129 us   |                      }
           zpool-31988 [001] 162723.103834: funcgraph_entry:        0.273 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.103835: funcgraph_entry:        0.339 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.103835: funcgraph_entry:                   |                      zio_done() {
           zpool-31988 [001] 162723.103835: funcgraph_entry:        0.296 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.103836: funcgraph_exit:         0.845 us   |                      }
           zpool-31988 [001] 162723.108771: funcgraph_exit:         9.722 us   |                    }
           zpool-31988 [001] 162723.108787: funcgraph_entry:                   |                    zio_root() {
           zpool-31988 [001] 162723.108788: funcgraph_entry:                   |                      zio_null() {
           zpool-31988 [001] 162723.108788: funcgraph_entry:        0.746 us   |                        zio_create();
           zpool-31988 [001] 162723.108789: funcgraph_exit:         1.341 us   |                      }
           zpool-31988 [001] 162723.108789: funcgraph_exit:         1.947 us   |                    }
           zpool-31988 [001] 162723.108790: funcgraph_entry:                   |                    zio_read_phys() {
           zpool-31988 [001] 162723.108790: funcgraph_entry:                   |                      zio_create() {
           zpool-31988 [001] 162723.108791: funcgraph_entry:        0.543 us   |                        zio_add_child();
           zpool-31988 [001] 162723.108791: funcgraph_exit:         1.528 us   |                      }
           zpool-31988 [001] 162723.108792: funcgraph_exit:         2.216 us   |                    }
           zpool-31988 [001] 162723.108792: funcgraph_entry:                   |                    zio_nowait() {
           zpool-31988 [001] 162723.108792: funcgraph_entry:        0.290 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.108793: funcgraph_entry:        0.310 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.108794: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [001] 162723.108794: funcgraph_entry:        0.327 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.108795: funcgraph_entry:        0.309 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.108795: funcgraph_entry:        0.298 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.108796: funcgraph_entry:        0.329 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.108797: funcgraph_exit:         2.802 us   |                      }
           zpool-31988 [001] 162723.108797: funcgraph_entry:        0.318 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.108797: funcgraph_entry:        0.304 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.108798: funcgraph_entry:                   |                      zio_vdev_io_start() {
           zpool-31988 [001] 162723.108799: funcgraph_entry:        0.316 us   |                        vdev_cache_read();
           zpool-31988 [001] 162723.108799: funcgraph_entry:                   |                        vdev_queue_io() {
           zpool-31988 [001] 162723.108800: funcgraph_entry:                   |                          vdev_queue_io_to_issue() {
           zpool-31988 [001] 162723.108800: funcgraph_entry:        0.439 us   |                            zio_buf_alloc();
           zpool-31988 [001] 162723.108801: funcgraph_entry:        0.318 us   |                            vdev_queue_timestamp_compare();
           zpool-31988 [001] 162723.108802: funcgraph_entry:        0.383 us   |                            zio_buf_free();
           zpool-31988 [001] 162723.108802: funcgraph_entry:        0.452 us   |                            vdev_queue_io_remove();
           zpool-31988 [001] 162723.108803: funcgraph_exit:         3.181 us   |                          }
           zpool-31988 [001] 162723.108803: funcgraph_exit:         4.102 us   |                        }
           zpool-31988 [001] 162723.108804: funcgraph_entry:        0.273 us   |                        vdev_accessible();
           zpool-31988 [001] 162723.108804: funcgraph_entry:                   |                        vdev_disk_io_start() {
           zpool-31988 [001] 162723.108804: funcgraph_entry:                   |                          __vdev_disk_physio() {
           zpool-31988 [001] 162723.108811: funcgraph_entry:        0.273 us   |                            vdev_disk_dio_put();
           zpool-31988 [001] 162723.108812: funcgraph_exit:         7.427 us   |                          }
           zpool-31988 [001] 162723.108812: funcgraph_exit:         7.953 us   |                        }
           zpool-31988 [001] 162723.108812: funcgraph_exit:       + 14.120 us  |                      }
           zpool-31988 [001] 162723.108813: funcgraph_exit:       + 20.558 us  |                    }
           zpool-31988 [001] 162723.108813: funcgraph_entry:                   |                    zio_wait() {
           zpool-31988 [001] 162723.108813: funcgraph_entry:        0.278 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.108814: funcgraph_entry:        0.311 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.108814: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [001] 162723.108815: funcgraph_entry:        0.279 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.108815: funcgraph_entry:        0.301 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.108816: funcgraph_entry:        0.299 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.108816: funcgraph_exit:         1.992 us   |                      }
           zpool-31988 [001] 162723.108817: funcgraph_entry:        0.346 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.108817: funcgraph_entry:        0.277 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.108818: funcgraph_entry:                   |                      zio_done() {
           zpool-31988 [001] 162723.108818: funcgraph_entry:        0.339 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.108819: funcgraph_exit:         0.910 us   |                      }
           zpool-31988 [001] 162723.113751: funcgraph_exit:         9.550 us   |                    }
           zpool-31988 [001] 162723.113767: funcgraph_entry:                   |                    zio_root() {
           zpool-31988 [001] 162723.113767: funcgraph_entry:                   |                      zio_null() {
           zpool-31988 [001] 162723.113768: funcgraph_entry:        0.744 us   |                        zio_create();
           zpool-31988 [001] 162723.113769: funcgraph_exit:         1.324 us   |                      }
           zpool-31988 [001] 162723.113769: funcgraph_exit:         1.958 us   |                    }
           zpool-31988 [001] 162723.113769: funcgraph_entry:                   |                    zio_read_phys() {
           zpool-31988 [001] 162723.113770: funcgraph_entry:                   |                      zio_create() {
           zpool-31988 [001] 162723.113770: funcgraph_entry:        0.571 us   |                        zio_add_child();
           zpool-31988 [001] 162723.113771: funcgraph_exit:         1.553 us   |                      }
           zpool-31988 [001] 162723.113772: funcgraph_exit:         2.133 us   |                    }
           zpool-31988 [001] 162723.113772: funcgraph_entry:                   |                    zio_nowait() {
           zpool-31988 [001] 162723.113772: funcgraph_entry:        0.311 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.113773: funcgraph_entry:        0.297 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.113774: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [001] 162723.113774: funcgraph_entry:        0.334 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.113774: funcgraph_entry:        0.300 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.113775: funcgraph_entry:        0.289 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.113776: funcgraph_entry:        0.316 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.113778: funcgraph_exit:         4.932 us   |                      }
           zpool-31988 [001] 162723.113779: funcgraph_entry:        0.655 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.113780: funcgraph_entry:        0.450 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.113781: funcgraph_entry:                   |                      zio_vdev_io_start() {
           zpool-31988 [001] 162723.113782: funcgraph_entry:        0.402 us   |                        vdev_cache_read();
           zpool-31988 [001] 162723.113783: funcgraph_entry:                   |                        vdev_queue_io() {
           zpool-31988 [001] 162723.113784: funcgraph_entry:                   |                          vdev_queue_io_to_issue() {
           zpool-31988 [001] 162723.113784: funcgraph_entry:        0.688 us   |                            zio_buf_alloc();
           zpool-31988 [001] 162723.113786: funcgraph_entry:        0.499 us   |                            vdev_queue_timestamp_compare();
           zpool-31988 [001] 162723.113787: funcgraph_entry:        0.732 us   |                            zio_buf_free();
           zpool-31988 [001] 162723.113788: funcgraph_entry:        0.643 us   |                            vdev_queue_io_remove();
           zpool-31988 [001] 162723.113790: funcgraph_exit:         6.172 us   |                          }
           zpool-31988 [001] 162723.113790: funcgraph_exit:         7.817 us   |                        }
           zpool-31988 [001] 162723.113791: funcgraph_entry:        0.555 us   |                        vdev_accessible();
           zpool-31988 [001] 162723.113792: funcgraph_entry:                   |                        vdev_disk_io_start() {
           zpool-31988 [001] 162723.113793: funcgraph_entry:                   |                          __vdev_disk_physio() {
           zpool-31988 [001] 162723.113801: funcgraph_entry:        0.388 us   |                            vdev_disk_dio_put();
           zpool-31988 [001] 162723.113801: funcgraph_exit:         8.644 us   |                          }
           zpool-31988 [001] 162723.113802: funcgraph_exit:         9.724 us   |                        }
           zpool-31988 [001] 162723.113802: funcgraph_exit:       + 21.181 us  |                      }
           zpool-31988 [001] 162723.113803: funcgraph_exit:       + 30.707 us  |                    }
           zpool-31988 [001] 162723.113803: funcgraph_entry:                   |                    zio_wait() {
           zpool-31988 [001] 162723.113803: funcgraph_entry:        0.473 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.113804: funcgraph_entry:        0.461 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.113805: funcgraph_entry:                   |                      zio_ready() {
           zpool-31988 [001] 162723.113806: funcgraph_entry:        0.712 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.113807: funcgraph_entry:        0.343 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.113808: funcgraph_entry:        0.423 us   |                        zio_walk_parents();
           zpool-31988 [001] 162723.113809: funcgraph_exit:         3.207 us   |                      }
           zpool-31988 [001] 162723.113809: funcgraph_entry:        0.506 us   |                      spa_get_dsl();
           zpool-31988 [001] 162723.113810: funcgraph_entry:        0.720 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.113811: funcgraph_entry:                   |                      zio_done() {
           zpool-31988 [001] 162723.113812: funcgraph_entry:        0.735 us   |                        zio_wait_for_children();
           zpool-31988 [001] 162723.113813: funcgraph_exit:         1.957 us   |                      }
           zpool-31988 [001] 162723.118801: funcgraph_exit:       + 14.703 us  |                    }
           zpool-31988 [001] 162723.118818: funcgraph_entry:        0.497 us   |                    zio_buf_free();
           zpool-31988 [001] 162723.118818: funcgraph_exit:       ! 231.107 us |                  }
           zpool-31988 [001] 162723.118819: funcgraph_entry:                   |                  spa_guid() {
           zpool-31988 [001] 162723.118820: funcgraph_entry:                   |                    dsl_pool_sync_context() {
           zpool-31988 [001] 162723.118820: funcgraph_entry:        0.321 us   |                      spa_is_initializing();
           zpool-31988 [001] 162723.118821: funcgraph_exit:         0.922 us   |                    }
           zpool-31988 [001] 162723.118821: funcgraph_exit:         1.595 us   |                  }
           zpool-31988 [001] 162723.118825: funcgraph_entry:        0.419 us   |                  spa_load_state();
           zpool-31988 [001] 162723.118826: funcgraph_exit:       ! 239.956 us |                }
           zpool-31988 [001] 162723.118826: funcgraph_exit:       ! 716.034 us |              }
           zpool-31988 [001] 162723.118826: funcgraph_exit:       ! 716.853 us |            }
           zpool-31988 [001] 162723.118827: funcgraph_entry:                   |            vdev_propagate_state() {
           zpool-31988 [001] 162723.118827: funcgraph_entry:                   |              vdev_root_state_change() {
           zpool-31988 [001] 162723.118828: funcgraph_entry:        0.279 us   |                vdev_set_state();
           zpool-31988 [001] 162723.118828: funcgraph_exit:         0.931 us   |              }
           zpool-31988 [001] 162723.118829: funcgraph_exit:         1.714 us   |            }
           zpool-31988 [001] 162723.118829: funcgraph_exit:       ! 815.861 us |          }
           zpool-31988 [001] 162723.118829: funcgraph_entry:                   |          spa_vdev_state_exit() {
           zpool-31988 [001] 162723.118830: funcgraph_entry:                   |            vdev_dtl_reassess() {
           zpool-31988 [001] 162723.118830: funcgraph_entry:                   |              vdev_dtl_reassess() {
           zpool-31988 [001] 162723.118831: funcgraph_entry:                   |                vdev_dtl_reassess() {
           zpool-31988 [001] 162723.118831: funcgraph_entry:        0.443 us   |                  space_map_vacate();
           zpool-31988 [001] 162723.118832: funcgraph_entry:        0.311 us   |                  space_map_walk();
           zpool-31988 [001] 162723.118833: funcgraph_entry:        0.511 us   |                  space_map_vacate();
           zpool-31988 [001] 162723.118833: funcgraph_entry:        0.303 us   |                  space_map_walk();
           zpool-31988 [001] 162723.118834: funcgraph_exit:         3.409 us   |                }
           zpool-31988 [001] 162723.118834: funcgraph_entry:                   |                vdev_dtl_reassess() {
           zpool-31988 [001] 162723.118835: funcgraph_entry:        0.367 us   |                  space_map_vacate();
           zpool-31988 [001] 162723.118835: funcgraph_entry:        0.297 us   |                  space_map_walk();
           zpool-31988 [001] 162723.118836: funcgraph_entry:        0.395 us   |                  space_map_vacate();
           zpool-31988 [001] 162723.118837: funcgraph_entry:        0.313 us   |                  space_map_walk();
           zpool-31988 [001] 162723.118838: funcgraph_exit:         3.193 us   |                }
           zpool-31988 [001] 162723.118838: funcgraph_entry:        0.289 us   |                space_map_ref_create();
           zpool-31988 [001] 162723.118838: funcgraph_entry:        0.262 us   |                space_map_ref_add_map();
           zpool-31988 [001] 162723.118839: funcgraph_entry:        0.285 us   |                space_map_ref_add_map();
           zpool-31988 [001] 162723.118840: funcgraph_entry:                   |                space_map_ref_generate_map() {
           zpool-31988 [001] 162723.118840: funcgraph_entry:        0.245 us   |                  space_map_vacate();
           zpool-31988 [001] 162723.118840: funcgraph_exit:         0.711 us   |                }
           zpool-31988 [001] 162723.118840: funcgraph_entry:        0.240 us   |                space_map_ref_destroy();
           zpool-31988 [001] 162723.118841: funcgraph_entry:        0.220 us   |                space_map_ref_create();
           zpool-31988 [001] 162723.118841: funcgraph_entry:        0.231 us   |                space_map_ref_add_map();
           zpool-31988 [001] 162723.118842: funcgraph_entry:        0.236 us   |                space_map_ref_add_map();
           zpool-31988 [001] 162723.118842: funcgraph_entry:                   |                space_map_ref_generate_map() {
           zpool-31988 [001] 162723.118843: funcgraph_entry:        0.316 us   |                  space_map_vacate();
           zpool-31988 [001] 162723.118843: funcgraph_exit:         0.821 us   |                }
           zpool-31988 [001] 162723.118844: funcgraph_entry:        0.230 us   |                space_map_ref_destroy();
           zpool-31988 [001] 162723.118844: funcgraph_entry:        0.290 us   |                space_map_ref_create();
           zpool-31988 [001] 162723.118845: funcgraph_entry:        0.234 us   |                space_map_ref_add_map();
           zpool-31988 [001] 162723.118845: funcgraph_entry:        0.252 us   |                space_map_ref_add_map();
           zpool-31988 [001] 162723.118846: funcgraph_entry:                   |                space_map_ref_generate_map() {
           zpool-31988 [001] 162723.118846: funcgraph_entry:        0.321 us   |                  space_map_vacate();
           zpool-31988 [001] 162723.118846: funcgraph_exit:         0.799 us   |                }
           zpool-31988 [001] 162723.118847: funcgraph_entry:        0.231 us   |                space_map_ref_destroy();
           zpool-31988 [001] 162723.118847: funcgraph_exit:       + 16.826 us  |              }
           zpool-31988 [001] 162723.118847: funcgraph_exit:       + 17.438 us  |            }
           zpool-31988 [001] 162723.118848: funcgraph_entry:        0.712 us   |            spa_config_exit();
           zpool-31988 [001] 162723.118849: funcgraph_exit:       + 19.269 us  |          }
           zpool-31988 [001] 162723.118849: funcgraph_entry:        0.217 us   |          spa_name();
           zpool-31988 [001] 162723.118849: funcgraph_entry:                   |          dsl_sync_task() {
           zpool-31988 [001] 162723.118850: funcgraph_entry:                   |            spa_open() {
           zpool-31988 [001] 162723.118850: funcgraph_entry:                   |              spa_open_common() {
           zpool-31988 [001] 162723.118850: funcgraph_entry:                   |                spa_lookup() {
           zpool-31988 [001] 162723.118851: funcgraph_entry:        0.269 us   |                  spa_name_compare();
           zpool-31988 [001] 162723.118852: funcgraph_exit:         1.415 us   |                }
           zpool-31988 [001] 162723.118852: funcgraph_entry:        0.249 us   |                spa_open_ref();
           zpool-31988 [001] 162723.118853: funcgraph_exit:         2.651 us   |              }
           zpool-31988 [001] 162723.118853: funcgraph_exit:         3.272 us   |            }
           zpool-31988 [001] 162723.118853: funcgraph_entry:        0.261 us   |            spa_get_dsl();
           zpool-31988 [001] 162723.118854: funcgraph_entry:        0.670 us   |            dmu_tx_create_dd();
           zpool-31988 [001] 162723.118855: funcgraph_entry:                   |            dmu_tx_assign() {
           zpool-31988 [001] 162723.118855: funcgraph_entry:        0.339 us   |              spa_suspended();
           zpool-31988 [001] 162723.118856: funcgraph_entry:        0.400 us   |              dsl_pool_need_dirty_delay();
           zpool-31988 [001] 162723.118857: funcgraph_entry:        0.635 us   |              txg_hold_open();
           zpool-31988 [001] 162723.118858: funcgraph_entry:        0.290 us   |              spa_get_asize();
           zpool-31988 [001] 162723.118858: funcgraph_entry:        0.263 us   |              spa_get_asize();
           zpool-31988 [001] 162723.118859: funcgraph_entry:        0.258 us   |              spa_get_asize();
           zpool-31988 [001] 162723.118859: funcgraph_entry:        0.274 us   |              txg_rele_to_quiesce();
           zpool-31988 [001] 162723.118860: funcgraph_exit:         4.879 us   |            }
           zpool-31988 [001] 162723.118860: funcgraph_entry:        0.220 us   |            dmu_tx_get_txg();
           zpool-31988 [001] 162723.118861: funcgraph_entry:                   |            dsl_pool_config_enter() {
           zpool-31988 [001] 162723.118861: funcgraph_entry:                   |              rrw_enter() {
           zpool-31988 [001] 162723.118862: funcgraph_entry:        2.612 us   |                rrw_enter_read();
           zpool-31988 [001] 162723.118864: funcgraph_exit:         3.162 us   |              }
           zpool-31988 [001] 162723.118865: funcgraph_exit:         3.857 us   |            }
           zpool-31988 [001] 162723.118865: funcgraph_entry:                   |            dsl_scan_setup_check() {
           zpool-31988 [001] 162723.118865: funcgraph_entry:        0.306 us   |              dmu_tx_pool();
           zpool-31988 [001] 162723.118866: funcgraph_exit:         1.302 us   |            }
           zpool-31988 [001] 162723.118866: funcgraph_entry:                   |            dsl_pool_config_exit() {
           zpool-31988 [001] 162723.118867: funcgraph_entry:        0.645 us   |              rrw_exit();
           zpool-31988 [001] 162723.118868: funcgraph_exit:         1.355 us   |            }
           zpool-31988 [001] 162723.118868: funcgraph_entry:        0.398 us   |            txg_list_add_tail();
           zpool-31988 [001] 162723.118869: funcgraph_entry:                   |            dmu_tx_commit() {
           zpool-31988 [001] 162723.118869: funcgraph_entry:        0.459 us   |              txg_rele_to_sync();
           zpool-31988 [001] 162723.118870: funcgraph_exit:         1.496 us   |            }
           zpool-31988 [001] 162723.118871: funcgraph_entry:                   |            txg_wait_synced() {
           zpool-31988 [001] 162723.504133: funcgraph_exit:       + 22.013 us  |            }
           zpool-31988 [001] 162723.504134: funcgraph_entry:        0.706 us   |            spa_close();
           zpool-31988 [001] 162723.504136: funcgraph_exit:       + 46.107 us  |          }
           zpool-31988 [001] 162723.504136: funcgraph_exit:       ! 886.002 us |        }
           zpool-31988 [001] 162723.504137: funcgraph_exit:       ! 887.137 us |      }
           zpool-31988 [001] 162723.504137: funcgraph_entry:        0.362 us   |      spa_close();
           zpool-31988 [001] 162723.504138: funcgraph_exit:       ! 893.688 us |    }
           zpool-31988 [001] 162723.504146: funcgraph_exit:       ! 918.171 us |  }
           zpool-31988 [001] 162723.504225: funcgraph_entry:                   |  zfsdev_ioctl() {
           zpool-31988 [001] 162723.504228: funcgraph_entry:        3.826 us   |    get_nvlist();
           zpool-31988 [001] 162723.504233: funcgraph_entry:        0.814 us   |    zfs_secpolicy_log_history();
           zpool-31988 [001] 162723.504236: funcgraph_entry:                   |    zfs_ioc_log_history() {
           zpool-31988 [001] 162723.504237: funcgraph_entry:                   |      spa_open() {
           zpool-31988 [001] 162723.504237: funcgraph_entry:                   |        spa_open_common() {
           zpool-31988 [001] 162723.504238: funcgraph_entry:                   |          spa_lookup() {
           zpool-31988 [001] 162723.504240: funcgraph_entry:        0.744 us   |            spa_name_compare();
           zpool-31988 [001] 162723.504241: funcgraph_exit:         2.651 us   |          }
           zpool-31988 [001] 162723.504241: funcgraph_entry:        0.590 us   |          spa_open_ref();
           zpool-31988 [001] 162723.504243: funcgraph_exit:         5.329 us   |        }
           zpool-31988 [001] 162723.504243: funcgraph_exit:         6.404 us   |      }
           zpool-31988 [001] 162723.504245: funcgraph_entry:        0.713 us   |      spa_version();
           zpool-31988 [001] 162723.504246: funcgraph_entry:                   |      spa_history_log() {
           zpool-31988 [001] 162723.504248: funcgraph_entry:                   |        spa_history_log_nvl() {
           zpool-31988 [001] 162723.504248: funcgraph_entry:        0.710 us   |          spa_version();
           zpool-31988 [001] 162723.504250: funcgraph_entry:        0.589 us   |          spa_writeable();
           zpool-31988 [001] 162723.504251: funcgraph_entry:        0.541 us   |          spa_get_dsl();
           zpool-31988 [001] 162723.504252: funcgraph_entry:        1.006 us   |          dmu_tx_create_dd();
           zpool-31988 [001] 162723.504254: funcgraph_entry:                   |          dmu_tx_assign() {
           zpool-31988 [001] 162723.504254: funcgraph_entry:        0.589 us   |            spa_suspended();
           zpool-31988 [001] 162723.504256: funcgraph_entry:        0.631 us   |            dsl_pool_need_dirty_delay();
           zpool-31988 [001] 162723.504257: funcgraph_entry:        0.671 us   |            txg_hold_open();
           zpool-31988 [001] 162723.504258: funcgraph_entry:        0.417 us   |            spa_get_asize();
           zpool-31988 [001] 162723.504259: funcgraph_entry:        0.346 us   |            spa_get_asize();
           zpool-31988 [001] 162723.504260: funcgraph_entry:        0.484 us   |            spa_get_asize();
           zpool-31988 [001] 162723.504261: funcgraph_entry:        0.452 us   |            txg_rele_to_quiesce();
           zpool-31988 [001] 162723.504262: funcgraph_exit:         8.422 us   |          }
           zpool-31988 [001] 162723.504265: funcgraph_entry:        0.562 us   |          spa_get_dsl();
           zpool-31988 [001] 162723.504266: funcgraph_entry:                   |          dsl_sync_task_nowait() {
           zpool-31988 [001] 162723.504267: funcgraph_entry:        0.499 us   |            dmu_tx_get_txg();
           zpool-31988 [001] 162723.504268: funcgraph_entry:        0.617 us   |            txg_list_add_tail();
           zpool-31988 [001] 162723.504269: funcgraph_exit:         2.868 us   |          }
           zpool-31988 [001] 162723.504270: funcgraph_entry:                   |          dmu_tx_commit() {
           zpool-31988 [001] 162723.504271: funcgraph_entry:        0.688 us   |            txg_rele_to_sync();
           zpool-31988 [001] 162723.504272: funcgraph_exit:         2.150 us   |          }
           zpool-31988 [001] 162723.504273: funcgraph_exit:       + 24.628 us  |        }
           zpool-31988 [001] 162723.504274: funcgraph_exit:       + 27.715 us  |      }
           zpool-31988 [001] 162723.504274: funcgraph_entry:        0.551 us   |      spa_close();
           zpool-31988 [001] 162723.504275: funcgraph_exit:       + 39.810 us  |    }
           zpool-31988 [001] 162723.504279: funcgraph_exit:       + 53.480 us  |  }
           zpool-31988 [001] 162723.504287: funcgraph_entry:                   |  zfsdev_release() {
           zpool-31988 [001] 162723.504287: funcgraph_entry:        0.904 us   |    zfs_onexit_destroy();
           zpool-31988 [001] 162723.504289: funcgraph_entry:        0.929 us   |    zfs_zevent_destroy();
           zpool-31988 [001] 162723.504290: funcgraph_exit:         3.826 us   |  }
           zpool-31988 [001] 162723.504324: funcgraph_entry:                   |  zfsdev_release() {
           zpool-31988 [001] 162723.504324: funcgraph_entry:        1.048 us   |    zfs_onexit_destroy();
           zpool-31988 [001] 162723.504326: funcgraph_entry:        1.010 us   |    zfs_zevent_destroy();
           zpool-31988 [001] 162723.504328: funcgraph_exit:         3.873 us   |  }
