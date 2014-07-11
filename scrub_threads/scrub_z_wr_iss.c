      z_wr_iss/5-31858 [007] 162723.119279: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/5-31858 [007] 162723.119280: funcgraph_entry:        0.313 us   |    spa_get_dsl();
      z_wr_iss/5-31858 [007] 162723.119281: funcgraph_entry:        0.280 us   |    spa_is_initializing();
      z_wr_iss/5-31858 [007] 162723.119281: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/5-31858 [007] 162723.119282: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/5-31858 [007] 162723.119282: funcgraph_entry:        2.746 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/5-31858 [007] 162723.119285: funcgraph_exit:         3.452 us   |      }
      z_wr_iss/5-31858 [007] 162723.119286: funcgraph_exit:         4.043 us   |    }
      z_wr_iss/5-31858 [007] 162723.119286: funcgraph_exit:         6.621 us   |  }
      z_wr_iss/5-31858 [007] 162723.119287: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/5-31858 [007] 162723.119287: funcgraph_entry:        0.407 us   |    spa_get_dsl();
      z_wr_iss/5-31858 [007] 162723.119288: funcgraph_entry:        0.395 us   |    spa_is_initializing();
      z_wr_iss/5-31858 [007] 162723.119289: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/5-31858 [007] 162723.119289: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/4-31857 [003] 162723.119289: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/5-31858 [007] 162723.119290: funcgraph_entry:        3.157 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/4-31857 [003] 162723.119290: funcgraph_entry:        0.301 us   |    spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119291: funcgraph_entry:        0.288 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119292: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/4-31857 [003] 162723.119292: funcgraph_entry:        0.392 us   |      zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119293: funcgraph_entry:        0.448 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [007] 162723.119293: funcgraph_exit:         4.233 us   |      }
      z_wr_iss/4-31857 [003] 162723.119294: funcgraph_entry:        1.106 us   |      zio_buf_alloc();
      z_wr_iss/5-31858 [007] 162723.119294: funcgraph_exit:         5.218 us   |    }
      z_wr_iss/5-31858 [007] 162723.119294: funcgraph_exit:         7.980 us   |  }
      z_wr_iss/4-31857 [003] 162723.119295: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/5-31858 [007] 162723.119296: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/5-31858 [007] 162723.119296: funcgraph_entry:        0.522 us   |    spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119297: funcgraph_entry:      + 50.565 us  |        lzjb_compress();
      z_wr_iss/5-31858 [007] 162723.119297: funcgraph_entry:        0.584 us   |    spa_is_initializing();
      z_wr_iss/5-31858 [007] 162723.119299: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/5-31858 [007] 162723.119299: funcgraph_entry:        0.494 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [007] 162723.119300: funcgraph_entry:        0.512 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [007] 162723.119301: funcgraph_exit:         2.331 us   |    }
      z_wr_iss/5-31858 [007] 162723.119301: funcgraph_exit:         5.827 us   |  }
      z_wr_iss/4-31857 [003] 162723.119348: funcgraph_exit:       + 52.314 us  |      }
      z_wr_iss/4-31857 [003] 162723.119348: funcgraph_entry:        0.530 us   |      zio_push_transform();
      z_wr_iss/4-31857 [003] 162723.119349: funcgraph_exit:       + 57.622 us  |    }
      z_wr_iss/4-31857 [003] 162723.119350: funcgraph_entry:        0.315 us   |    spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119350: funcgraph_entry:        0.275 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119351: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/4-31857 [003] 162723.119351: funcgraph_entry:        1.240 us   |      zio_checksum_compute();
      z_wr_iss/4-31857 [003] 162723.119353: funcgraph_exit:         1.938 us   |    }
      z_wr_iss/4-31857 [003] 162723.119353: funcgraph_entry:        0.357 us   |    spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119354: funcgraph_entry:        3.438 us   |    zio_taskq_member();
      z_wr_iss/4-31857 [003] 162723.119358: funcgraph_entry:        0.271 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119358: funcgraph_entry:                   |    zio_dva_allocate() {
      z_wr_iss/4-31857 [003] 162723.119359: funcgraph_entry:        0.318 us   |      spa_normal_class();
      z_wr_iss/4-31857 [003] 162723.119359: funcgraph_entry:                   |      metaslab_alloc() {
      z_wr_iss/4-31857 [003] 162723.119360: funcgraph_entry:        0.421 us   |        spa_config_enter();
      z_wr_iss/4-31857 [003] 162723.119361: funcgraph_entry:        0.362 us   |        vdev_allocatable();
      z_wr_iss/4-31857 [003] 162723.119362: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/4-31857 [003] 162723.119362: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/4-31857 [003] 162723.119363: funcgraph_entry:        0.320 us   |            vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.119363: funcgraph_entry:        0.299 us   |            vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.119364: funcgraph_exit:         1.792 us   |          }
      z_wr_iss/4-31857 [003] 162723.119364: funcgraph_exit:         2.639 us   |        }
      z_wr_iss/4-31857 [003] 162723.119366: funcgraph_entry:        0.307 us   |        metaslab_activate();
      z_wr_iss/4-31857 [003] 162723.119367: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.119367: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/4-31857 [003] 162723.119368: funcgraph_entry:        0.544 us   |            metaslab_pp_maxsize();
      z_wr_iss/4-31857 [003] 162723.119369: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/4-31857 [003] 162723.119369: funcgraph_entry:        0.324 us   |              space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119370: funcgraph_exit:         1.089 us   |            }
      z_wr_iss/4-31857 [003] 162723.119370: funcgraph_exit:         2.722 us   |          }
      z_wr_iss/4-31857 [003] 162723.119370: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/4-31857 [003] 162723.119371: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/4-31857 [003] 162723.119371: funcgraph_entry:        0.313 us   |              space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119372: funcgraph_exit:         1.015 us   |            }
      z_wr_iss/4-31857 [003] 162723.119372: funcgraph_entry:        0.424 us   |            metaslab_segsize_compare();
      z_wr_iss/4-31857 [003] 162723.119373: funcgraph_exit:         2.834 us   |          }
      z_wr_iss/4-31857 [003] 162723.119373: funcgraph_exit:         6.840 us   |        }
      z_wr_iss/4-31857 [003] 162723.119374: funcgraph_entry:                   |        vdev_dirty() {
      z_wr_iss/4-31857 [003] 162723.119374: funcgraph_entry:        0.403 us   |          txg_list_add();
      z_wr_iss/4-31857 [003] 162723.119375: funcgraph_entry:        0.371 us   |          txg_list_add();
      z_wr_iss/4-31857 [003] 162723.119376: funcgraph_exit:         1.699 us   |        }
      z_wr_iss/4-31857 [003] 162723.119376: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/4-31857 [003] 162723.119376: funcgraph_entry:        0.321 us   |          space_map_find();
      z_wr_iss/4-31857 [003] 162723.119377: funcgraph_exit:         1.389 us   |        }
      z_wr_iss/4-31857 [003] 162723.119378: funcgraph_entry:        0.377 us   |        vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119378: funcgraph_entry:        0.361 us   |        vdev_allocatable();
      z_wr_iss/4-31857 [003] 162723.119379: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/4-31857 [003] 162723.119379: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/4-31857 [003] 162723.119380: funcgraph_entry:        0.325 us   |            vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.119381: funcgraph_entry:        0.339 us   |            vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.119381: funcgraph_exit:         1.982 us   |          }
      z_wr_iss/4-31857 [003] 162723.119382: funcgraph_exit:         2.597 us   |        }
      z_wr_iss/4-31857 [003] 162723.119392: funcgraph_entry:        0.367 us   |        metaslab_activate();
      z_wr_iss/4-31857 [003] 162723.119392: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.119393: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/4-31857 [003] 162723.119393: funcgraph_entry:        0.480 us   |            metaslab_pp_maxsize();
      z_wr_iss/4-31857 [003] 162723.119394: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/4-31857 [003] 162723.119394: funcgraph_entry:        0.334 us   |              space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119395: funcgraph_exit:         1.075 us   |            }
      z_wr_iss/4-31857 [003] 162723.119395: funcgraph_exit:         2.527 us   |          }
      z_wr_iss/4-31857 [003] 162723.119395: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/4-31857 [003] 162723.119396: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/4-31857 [003] 162723.119396: funcgraph_entry:        0.301 us   |              space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119397: funcgraph_exit:         0.944 us   |            }
      z_wr_iss/4-31857 [003] 162723.119397: funcgraph_entry:        0.300 us   |            metaslab_segsize_compare();
      z_wr_iss/4-31857 [003] 162723.119398: funcgraph_exit:         2.411 us   |          }
      z_wr_iss/4-31857 [003] 162723.119398: funcgraph_exit:         5.920 us   |        }
      z_wr_iss/4-31857 [003] 162723.119399: funcgraph_entry:                   |        vdev_dirty() {
      z_wr_iss/4-31857 [003] 162723.119399: funcgraph_entry:        1.436 us   |          txg_list_add();
      z_wr_iss/4-31857 [003] 162723.119405: funcgraph_entry:        0.344 us   |          txg_list_add();
      z_wr_iss/4-31857 [003] 162723.119406: funcgraph_exit:         2.684 us   |        }
      z_wr_iss/4-31857 [003] 162723.119406: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/4-31857 [003] 162723.119406: funcgraph_entry:        0.319 us   |          space_map_find();
      z_wr_iss/4-31857 [003] 162723.119407: funcgraph_exit:         1.325 us   |        }
      z_wr_iss/4-31857 [003] 162723.119408: funcgraph_entry:        0.373 us   |        vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119408: funcgraph_entry:        0.307 us   |        vdev_allocatable();
      z_wr_iss/4-31857 [003] 162723.119409: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/4-31857 [003] 162723.119409: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/4-31857 [003] 162723.119410: funcgraph_entry:        0.315 us   |            vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.119410: funcgraph_entry:        0.346 us   |            vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.119411: funcgraph_exit:         1.683 us   |          }
      z_wr_iss/4-31857 [003] 162723.119411: funcgraph_exit:         2.286 us   |        }
      z_wr_iss/4-31857 [003] 162723.119412: funcgraph_entry:        0.364 us   |        metaslab_activate();
      z_wr_iss/4-31857 [003] 162723.119413: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.119413: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/4-31857 [003] 162723.119413: funcgraph_entry:        0.506 us   |            metaslab_pp_maxsize();
      z_wr_iss/4-31857 [003] 162723.119414: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/4-31857 [003] 162723.119415: funcgraph_entry:        0.329 us   |              space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119415: funcgraph_exit:         0.989 us   |            }
      z_wr_iss/4-31857 [003] 162723.119416: funcgraph_exit:         2.586 us   |          }
      z_wr_iss/4-31857 [003] 162723.119416: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/4-31857 [003] 162723.119416: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/4-31857 [003] 162723.119417: funcgraph_entry:        0.311 us   |              space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119417: funcgraph_exit:         0.956 us   |            }
      z_wr_iss/4-31857 [003] 162723.119418: funcgraph_exit:         1.750 us   |          }
      z_wr_iss/4-31857 [003] 162723.119418: funcgraph_exit:         5.300 us   |        }
      z_wr_iss/4-31857 [003] 162723.119418: funcgraph_entry:                   |        vdev_dirty() {
      z_wr_iss/4-31857 [003] 162723.119419: funcgraph_entry:        0.344 us   |          txg_list_add();
      z_wr_iss/4-31857 [003] 162723.119419: funcgraph_entry:        0.334 us   |          txg_list_add();
      z_wr_iss/4-31857 [003] 162723.119420: funcgraph_exit:         1.582 us   |        }
      z_wr_iss/4-31857 [003] 162723.119420: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/4-31857 [003] 162723.119421: funcgraph_entry:        0.309 us   |          space_map_find();
      z_wr_iss/4-31857 [003] 162723.119422: funcgraph_exit:         1.224 us   |        }
      z_wr_iss/4-31857 [003] 162723.119422: funcgraph_entry:        0.476 us   |        spa_config_exit();
      z_wr_iss/4-31857 [003] 162723.119423: funcgraph_exit:       + 59.126 us  |      }
      z_wr_iss/4-31857 [003] 162723.119423: funcgraph_exit:       + 60.402 us  |    }
      z_wr_iss/4-31857 [003] 162723.119423: funcgraph_entry:        0.317 us   |    spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119424: funcgraph_entry:        0.301 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119425: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/4-31857 [003] 162723.119425: funcgraph_entry:        0.619 us   |      zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119426: funcgraph_entry:        0.357 us   |      zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119427: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/4-31857 [003] 162723.119427: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/4-31857 [003] 162723.119428: funcgraph_entry:        0.469 us   |          zrl_add();
      z_wr_iss/4-31857 [003] 162723.119428: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.119429: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.119429: funcgraph_entry:        0.456 us   |              vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119430: funcgraph_exit:         1.067 us   |            }
      z_wr_iss/4-31857 [003] 162723.119430: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.119430: funcgraph_entry:        0.358 us   |              vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119431: funcgraph_exit:         0.961 us   |            }
      z_wr_iss/4-31857 [003] 162723.119431: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.119432: funcgraph_entry:        0.325 us   |              vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119432: funcgraph_exit:         0.934 us   |            }
      z_wr_iss/4-31857 [003] 162723.119432: funcgraph_exit:         4.208 us   |          }
      z_wr_iss/4-31857 [003] 162723.119433: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.119433: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.119433: funcgraph_entry:        0.338 us   |              vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119434: funcgraph_exit:         0.951 us   |            }
      z_wr_iss/4-31857 [003] 162723.119434: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.119435: funcgraph_entry:        0.323 us   |              vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119435: funcgraph_exit:         0.904 us   |            }
      z_wr_iss/4-31857 [003] 162723.119435: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.119436: funcgraph_entry:        0.336 us   |              vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119436: funcgraph_exit:         0.967 us   |            }
      z_wr_iss/4-31857 [003] 162723.119437: funcgraph_exit:         3.991 us   |          }
      z_wr_iss/4-31857 [003] 162723.119437: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/4-31857 [003] 162723.119437: funcgraph_entry:        0.314 us   |            spa_version();
      z_wr_iss/4-31857 [003] 162723.119438: funcgraph_exit:         1.076 us   |          }
      z_wr_iss/4-31857 [003] 162723.119439: funcgraph_entry:        0.289 us   |          zrl_remove();
      z_wr_iss/4-31857 [003] 162723.119439: funcgraph_exit:       + 12.260 us  |        }
      z_wr_iss/4-31857 [003] 162723.119440: funcgraph_entry:        0.335 us   |        arc_cksum_compute();
      z_wr_iss/4-31857 [003] 162723.119440: funcgraph_exit:       + 13.781 us  |      }
      z_wr_iss/4-31857 [003] 162723.119441: funcgraph_entry:        0.316 us   |      zio_walk_parents();
      z_wr_iss/4-31857 [003] 162723.119441: funcgraph_entry:        0.316 us   |      zio_walk_parents();
      z_wr_iss/4-31857 [003] 162723.119442: funcgraph_entry:        0.317 us   |      spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119443: funcgraph_entry:        0.308 us   |      spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119443: funcgraph_entry:                   |      zio_write_bp_init() {
      z_wr_iss/4-31857 [003] 162723.119444: funcgraph_entry:        0.320 us   |        zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119444: funcgraph_entry:        0.331 us   |        zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119445: funcgraph_entry:        0.753 us   |        zio_buf_alloc();
      z_wr_iss/4-31857 [003] 162723.119446: funcgraph_entry:                   |        zio_compress_data() {
      z_wr_iss/4-31857 [003] 162723.119446: funcgraph_entry:        5.740 us   |          lzjb_compress();
      z_wr_iss/4-31857 [003] 162723.119453: funcgraph_exit:         6.527 us   |        }
      z_wr_iss/4-31857 [003] 162723.119453: funcgraph_entry:        0.384 us   |        zio_push_transform();
      z_wr_iss/4-31857 [003] 162723.119454: funcgraph_exit:       + 10.237 us  |      }
      z_wr_iss/4-31857 [003] 162723.119454: funcgraph_entry:        0.358 us   |      spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119455: funcgraph_entry:        0.316 us   |      spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119455: funcgraph_entry:                   |      zio_checksum_generate() {
      z_wr_iss/4-31857 [003] 162723.119456: funcgraph_entry:        0.471 us   |        zio_checksum_compute();
      z_wr_iss/4-31857 [003] 162723.119456: funcgraph_exit:         1.050 us   |      }
      z_wr_iss/4-31857 [003] 162723.119457: funcgraph_entry:        0.295 us   |      spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119457: funcgraph_entry:        1.086 us   |      zio_taskq_member();
      z_wr_iss/4-31857 [003] 162723.119459: funcgraph_entry:        0.285 us   |      spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119459: funcgraph_entry:                   |      zio_dva_allocate() {
      z_wr_iss/4-31857 [003] 162723.119460: funcgraph_entry:        0.285 us   |        spa_normal_class();
      z_wr_iss/4-31857 [003] 162723.119460: funcgraph_entry:                   |        metaslab_alloc() {
      z_wr_iss/4-31857 [003] 162723.119461: funcgraph_entry:        0.386 us   |          spa_config_enter();
      z_wr_iss/4-31857 [003] 162723.119462: funcgraph_entry:        0.327 us   |          vdev_allocatable();
      z_wr_iss/4-31857 [003] 162723.119462: funcgraph_entry:                   |          vdev_psize_to_asize() {
      z_wr_iss/4-31857 [003] 162723.119463: funcgraph_entry:                   |            vdev_default_asize() {
      z_wr_iss/4-31857 [003] 162723.119463: funcgraph_entry:        0.327 us   |              vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.119464: funcgraph_entry:        0.387 us   |              vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.119465: funcgraph_exit:         1.829 us   |            }
      z_wr_iss/4-31857 [003] 162723.119465: funcgraph_exit:         2.506 us   |          }
      z_wr_iss/4-31857 [003] 162723.119465: funcgraph_entry:        0.432 us   |          metaslab_activate();
      z_wr_iss/4-31857 [003] 162723.119466: funcgraph_entry:                   |          space_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.119466: funcgraph_entry:                   |            metaslab_df_alloc() {
      z_wr_iss/4-31857 [003] 162723.119467: funcgraph_entry:        0.424 us   |              metaslab_pp_maxsize();
      z_wr_iss/4-31857 [003] 162723.119467: funcgraph_entry:                   |              metaslab_block_picker.clone.0() {
      z_wr_iss/4-31857 [003] 162723.119468: funcgraph_entry:        0.318 us   |                space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119468: funcgraph_exit:         0.939 us   |              }
      z_wr_iss/4-31857 [003] 162723.119469: funcgraph_exit:         2.281 us   |            }
      z_wr_iss/4-31857 [003] 162723.119469: funcgraph_entry:                   |            space_map_remove() {
      z_wr_iss/4-31857 [003] 162723.119469: funcgraph_entry:                   |              space_map_find() {
      z_wr_iss/4-31857 [003] 162723.119469: funcgraph_entry:        0.361 us   |                space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119470: funcgraph_exit:         0.958 us   |              }
      z_wr_iss/4-31857 [003] 162723.119471: funcgraph_entry:        0.329 us   |              metaslab_segsize_compare();
      z_wr_iss/4-31857 [003] 162723.119471: funcgraph_exit:         2.435 us   |            }
      z_wr_iss/4-31857 [003] 162723.119472: funcgraph_exit:         5.597 us   |          }
      z_wr_iss/4-31857 [003] 162723.119472: funcgraph_entry:                   |          space_map_add() {
      z_wr_iss/4-31857 [003] 162723.119472: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/4-31857 [003] 162723.119472: funcgraph_entry:        0.313 us   |              space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119473: funcgraph_exit:         0.964 us   |            }
      z_wr_iss/4-31857 [003] 162723.119473: funcgraph_exit:         1.638 us   |          }
      z_wr_iss/4-31857 [003] 162723.119474: funcgraph_entry:        0.342 us   |          vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119474: funcgraph_entry:        0.316 us   |          vdev_allocatable();
      z_wr_iss/4-31857 [003] 162723.119475: funcgraph_entry:                   |          vdev_psize_to_asize() {
      z_wr_iss/4-31857 [003] 162723.119475: funcgraph_entry:                   |            vdev_default_asize() {
      z_wr_iss/4-31857 [003] 162723.119476: funcgraph_entry:        0.294 us   |              vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.119476: funcgraph_entry:        0.345 us   |              vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.119477: funcgraph_exit:         1.606 us   |            }
      z_wr_iss/4-31857 [003] 162723.119477: funcgraph_exit:         2.202 us   |          }
      z_wr_iss/4-31857 [003] 162723.119478: funcgraph_entry:        0.348 us   |          metaslab_activate();
      z_wr_iss/4-31857 [003] 162723.119479: funcgraph_entry:                   |          space_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.119479: funcgraph_entry:                   |            metaslab_df_alloc() {
      z_wr_iss/4-31857 [003] 162723.119479: funcgraph_entry:        0.321 us   |              metaslab_pp_maxsize();
      z_wr_iss/4-31857 [003] 162723.119480: funcgraph_entry:                   |              metaslab_block_picker.clone.0() {
      z_wr_iss/4-31857 [003] 162723.119480: funcgraph_entry:        0.337 us   |                space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119481: funcgraph_exit:         0.977 us   |              }
      z_wr_iss/4-31857 [003] 162723.119481: funcgraph_exit:         2.276 us   |            }
      z_wr_iss/4-31857 [003] 162723.119481: funcgraph_entry:                   |            space_map_remove() {
      z_wr_iss/4-31857 [003] 162723.119482: funcgraph_entry:                   |              space_map_find() {
      z_wr_iss/4-31857 [003] 162723.119482: funcgraph_entry:        0.325 us   |                space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119483: funcgraph_exit:         0.979 us   |              }
      z_wr_iss/4-31857 [003] 162723.119483: funcgraph_entry:        0.311 us   |              metaslab_segsize_compare();
      z_wr_iss/4-31857 [003] 162723.119484: funcgraph_exit:         2.272 us   |            }
      z_wr_iss/4-31857 [003] 162723.119484: funcgraph_exit:         5.599 us   |          }
      z_wr_iss/4-31857 [003] 162723.119484: funcgraph_entry:                   |          space_map_add() {
      z_wr_iss/4-31857 [003] 162723.119485: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/4-31857 [003] 162723.119485: funcgraph_entry:        0.341 us   |              space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119486: funcgraph_exit:         0.926 us   |            }
      z_wr_iss/4-31857 [003] 162723.119486: funcgraph_exit:         1.554 us   |          }
      z_wr_iss/4-31857 [003] 162723.119486: funcgraph_entry:        0.332 us   |          vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119487: funcgraph_entry:        0.293 us   |          vdev_allocatable();
      z_wr_iss/4-31857 [003] 162723.119488: funcgraph_entry:                   |          vdev_psize_to_asize() {
      z_wr_iss/4-31857 [003] 162723.119488: funcgraph_entry:                   |            vdev_default_asize() {
      z_wr_iss/4-31857 [003] 162723.119488: funcgraph_entry:        0.323 us   |              vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.119489: funcgraph_entry:        0.313 us   |              vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.119490: funcgraph_exit:         1.878 us   |            }
      z_wr_iss/4-31857 [003] 162723.119490: funcgraph_exit:         2.513 us   |          }
      z_wr_iss/4-31857 [003] 162723.119491: funcgraph_entry:        0.327 us   |          metaslab_activate();
      z_wr_iss/4-31857 [003] 162723.119491: funcgraph_entry:                   |          space_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.119492: funcgraph_entry:                   |            metaslab_df_alloc() {
      z_wr_iss/4-31857 [003] 162723.119492: funcgraph_entry:        0.438 us   |              metaslab_pp_maxsize();
      z_wr_iss/4-31857 [003] 162723.119493: funcgraph_entry:                   |              metaslab_block_picker.clone.0() {
      z_wr_iss/4-31857 [003] 162723.119493: funcgraph_entry:        0.311 us   |                space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119494: funcgraph_exit:         0.916 us   |              }
      z_wr_iss/4-31857 [003] 162723.119494: funcgraph_exit:         2.234 us   |            }
      z_wr_iss/4-31857 [003] 162723.119494: funcgraph_entry:                   |            space_map_remove() {
      z_wr_iss/4-31857 [003] 162723.119495: funcgraph_entry:                   |              space_map_find() {
      z_wr_iss/4-31857 [003] 162723.119495: funcgraph_entry:        0.337 us   |                space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119495: funcgraph_exit:         0.945 us   |              }
      z_wr_iss/4-31857 [003] 162723.119496: funcgraph_exit:         1.646 us   |            }
      z_wr_iss/4-31857 [003] 162723.119496: funcgraph_exit:         4.765 us   |          }
      z_wr_iss/4-31857 [003] 162723.119497: funcgraph_entry:                   |          space_map_add() {
      z_wr_iss/4-31857 [003] 162723.119497: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/4-31857 [003] 162723.119497: funcgraph_entry:        0.330 us   |              space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.119498: funcgraph_exit:         0.972 us   |            }
      z_wr_iss/4-31857 [003] 162723.119498: funcgraph_exit:         1.683 us   |          }
      z_wr_iss/4-31857 [003] 162723.119499: funcgraph_entry:        0.377 us   |          spa_config_exit();
      z_wr_iss/4-31857 [003] 162723.119499: funcgraph_exit:       + 38.985 us  |        }
      z_wr_iss/4-31857 [003] 162723.119500: funcgraph_exit:       + 40.217 us  |      }
      z_wr_iss/4-31857 [003] 162723.119500: funcgraph_entry:        0.335 us   |      spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119501: funcgraph_entry:        0.325 us   |      spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119501: funcgraph_entry:                   |      zio_ready() {
      z_wr_iss/4-31857 [003] 162723.119502: funcgraph_entry:        0.406 us   |        zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119502: funcgraph_entry:        0.343 us   |        zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119503: funcgraph_entry:                   |        arc_write_ready() {
      z_wr_iss/4-31857 [003] 162723.119503: funcgraph_entry:        0.331 us   |          dmu_objset_write_ready();
      z_wr_iss/4-31857 [003] 162723.119504: funcgraph_entry:        0.316 us   |          arc_cksum_compute();
      z_wr_iss/4-31857 [003] 162723.119505: funcgraph_exit:         1.829 us   |        }
      z_wr_iss/4-31857 [003] 162723.119505: funcgraph_entry:        0.334 us   |        zio_walk_parents();
      z_wr_iss/4-31857 [003] 162723.119506: funcgraph_entry:        0.328 us   |        zio_walk_parents();
      z_wr_iss/4-31857 [003] 162723.119507: funcgraph_exit:         5.377 us   |      }
      z_wr_iss/4-31857 [003] 162723.119507: funcgraph_entry:        0.286 us   |      spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119507: funcgraph_entry:        0.963 us   |      zio_taskq_member();
      z_wr_iss/4-31857 [003] 162723.119509: funcgraph_entry:        0.294 us   |      spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119509: funcgraph_entry:                   |      zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.119510: funcgraph_entry:        0.370 us   |        spa_config_enter();
      z_wr_iss/4-31857 [003] 162723.119511: funcgraph_entry:                   |        vdev_mirror_io_start() {
      z_wr_iss/4-31857 [003] 162723.119511: funcgraph_entry:                   |          vdev_mirror_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.119512: funcgraph_entry:        3.550 us   |            spa_get_random();
      z_wr_iss/4-31857 [003] 162723.119516: funcgraph_entry:        0.348 us   |            vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119516: funcgraph_entry:        0.301 us   |            vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119517: funcgraph_entry:        0.349 us   |            vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119518: funcgraph_exit:         6.877 us   |          }
      z_wr_iss/4-31857 [003] 162723.119518: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.119519: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/4-31857 [003] 162723.119520: funcgraph_entry:        0.698 us   |              zio_add_child();
      z_wr_iss/4-31857 [003] 162723.119521: funcgraph_exit:         2.220 us   |            }
      z_wr_iss/4-31857 [003] 162723.119521: funcgraph_exit:         2.877 us   |          }
      z_wr_iss/4-31857 [003] 162723.119521: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.119522: funcgraph_entry:        0.313 us   |            spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119522: funcgraph_entry:        0.292 us   |            spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119523: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.119523: funcgraph_entry:        0.724 us   |              zio_buf_alloc();
      z_wr_iss/4-31857 [003] 162723.119525: funcgraph_entry:        0.405 us   |              zio_push_transform();
      z_wr_iss/4-31857 [003] 162723.119526: funcgraph_entry:        0.293 us   |              spa_writeable();
      z_wr_iss/4-31857 [003] 162723.119527: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/4-31857 [003] 162723.119529: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.119530: funcgraph_entry:        0.353 us   |                  vdev_readable();
      z_wr_iss/4-31857 [003] 162723.119530: funcgraph_entry:        0.400 us   |                  vdev_readable();
      z_wr_iss/4-31857 [003] 162723.119531: funcgraph_exit:         2.451 us   |                }
      z_wr_iss/4-31857 [003] 162723.119534: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.119534: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/4-31857 [003] 162723.119534: funcgraph_entry:        0.670 us   |                    zio_add_child();
      z_wr_iss/4-31857 [003] 162723.119535: funcgraph_exit:         1.569 us   |                  }
      z_wr_iss/4-31857 [003] 162723.119536: funcgraph_exit:         2.258 us   |                }
      z_wr_iss/4-31857 [003] 162723.119536: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.119537: funcgraph_entry:        0.325 us   |                  spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119537: funcgraph_entry:        0.362 us   |                  spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119538: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.119538: funcgraph_entry:        0.325 us   |                    spa_writeable();
      z_wr_iss/4-31857 [003] 162723.119539: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/4-31857 [003] 162723.119540: funcgraph_entry:                   |                      vdev_queue_io_to_issue() {
      z_wr_iss/4-31857 [003] 162723.119540: funcgraph_entry:        0.623 us   |                        zio_buf_alloc();
      z_wr_iss/4-31857 [003] 162723.119541: funcgraph_entry:        0.327 us   |                        vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.119542: funcgraph_entry:        0.423 us   |                        zio_buf_free();
      z_wr_iss/4-31857 [003] 162723.119543: funcgraph_entry:        0.509 us   |                        vdev_queue_io_remove();
      z_wr_iss/4-31857 [003] 162723.119544: funcgraph_exit:         4.017 us   |                      }
      z_wr_iss/4-31857 [003] 162723.119544: funcgraph_exit:         4.997 us   |                    }
      z_wr_iss/4-31857 [003] 162723.119544: funcgraph_entry:        0.373 us   |                    vdev_accessible();
      z_wr_iss/4-31857 [003] 162723.119545: funcgraph_entry:                   |                    vdev_disk_io_start() {
      z_wr_iss/4-31857 [003] 162723.119545: funcgraph_entry:                   |                      __vdev_disk_physio() {
      z_wr_iss/4-31857 [003] 162723.119562: funcgraph_entry:        0.415 us   |                        vdev_disk_dio_put();
      z_wr_iss/4-31857 [003] 162723.119563: funcgraph_exit:       + 17.501 us  |                      }
      z_wr_iss/4-31857 [003] 162723.119563: funcgraph_exit:       + 18.146 us  |                    }
      z_wr_iss/4-31857 [003] 162723.119563: funcgraph_exit:       + 25.462 us  |                  }
      z_wr_iss/4-31857 [003] 162723.119564: funcgraph_exit:       + 27.618 us  |                }
      z_wr_iss/4-31857 [003] 162723.119565: funcgraph_exit:       + 37.886 us  |              }
      z_wr_iss/4-31857 [003] 162723.119565: funcgraph_exit:       + 42.043 us  |            }
      z_wr_iss/4-31857 [003] 162723.119565: funcgraph_entry:        0.311 us   |            spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119566: funcgraph_entry:        0.282 us   |            spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119567: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/4-31857 [003] 162723.119567: funcgraph_entry:        0.316 us   |              zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119568: funcgraph_exit:         0.979 us   |            }
      z_wr_iss/4-31857 [003] 162723.119568: funcgraph_exit:       + 46.487 us  |          }
      z_wr_iss/4-31857 [003] 162723.119568: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.119569: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/4-31857 [003] 162723.119569: funcgraph_entry:        0.636 us   |              zio_add_child();
      z_wr_iss/4-31857 [003] 162723.119570: funcgraph_exit:         1.693 us   |            }
      z_wr_iss/4-31857 [003] 162723.119571: funcgraph_exit:         2.378 us   |          }
      z_wr_iss/4-31857 [003] 162723.119571: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.119571: funcgraph_entry:        0.297 us   |            spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119572: funcgraph_entry:        0.294 us   |            spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119572: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.119573: funcgraph_entry:        0.484 us   |              zio_buf_alloc();
      z_wr_iss/4-31857 [003] 162723.119574: funcgraph_entry:        0.393 us   |              zio_push_transform();
      z_wr_iss/4-31857 [003] 162723.119575: funcgraph_entry:        0.309 us   |              spa_writeable();
      z_wr_iss/4-31857 [003] 162723.119575: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/4-31857 [003] 162723.119576: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.119577: funcgraph_entry:        0.323 us   |                  vdev_readable();
      z_wr_iss/4-31857 [003] 162723.119577: funcgraph_entry:        0.306 us   |                  vdev_readable();
      z_wr_iss/4-31857 [003] 162723.119578: funcgraph_exit:         1.802 us   |                }
      z_wr_iss/4-31857 [003] 162723.119579: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.119580: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/4-31857 [003] 162723.119580: funcgraph_entry:        0.512 us   |                    zio_add_child();
      z_wr_iss/4-31857 [003] 162723.119581: funcgraph_exit:         1.624 us   |                  }
      z_wr_iss/4-31857 [003] 162723.119581: funcgraph_exit:         2.374 us   |                }
      z_wr_iss/4-31857 [003] 162723.119582: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.119582: funcgraph_entry:        0.291 us   |                  spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119583: funcgraph_entry:        0.283 us   |                  spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119583: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.119584: funcgraph_entry:        0.297 us   |                    spa_writeable();
      z_wr_iss/4-31857 [003] 162723.119584: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/4-31857 [003] 162723.119585: funcgraph_entry:        0.608 us   |                      vdev_queue_io_to_issue();
      z_wr_iss/4-31857 [003] 162723.119586: funcgraph_exit:         1.350 us   |                    }
      z_wr_iss/4-31857 [003] 162723.119586: funcgraph_exit:         2.612 us   |                  }
      z_wr_iss/4-31857 [003] 162723.119586: funcgraph_exit:         4.424 us   |                }
      z_wr_iss/4-31857 [003] 162723.119587: funcgraph_exit:       + 11.564 us  |              }
      z_wr_iss/4-31857 [003] 162723.119587: funcgraph_exit:       + 14.831 us  |            }
      z_wr_iss/4-31857 [003] 162723.119588: funcgraph_entry:        0.287 us   |            spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119588: funcgraph_entry:        0.311 us   |            spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119589: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/4-31857 [003] 162723.119589: funcgraph_entry:        0.330 us   |              zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119590: funcgraph_exit:         0.888 us   |            }
      z_wr_iss/4-31857 [003] 162723.119590: funcgraph_exit:       + 19.073 us  |          }
      z_wr_iss/4-31857 [003] 162723.119590: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.119591: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/4-31857 [003] 162723.119591: funcgraph_entry:        0.511 us   |              zio_add_child();
      z_wr_iss/4-31857 [003] 162723.119592: funcgraph_exit:         1.321 us   |            }
      z_wr_iss/4-31857 [003] 162723.119592: funcgraph_exit:         1.973 us   |          }
      z_wr_iss/4-31857 [003] 162723.119593: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.119593: funcgraph_entry:        0.272 us   |            spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119593: funcgraph_entry:        0.307 us   |            spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119594: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.119594: funcgraph_entry:        0.425 us   |              zio_buf_alloc();
      z_wr_iss/4-31857 [003] 162723.119596: funcgraph_entry:        0.377 us   |              zio_push_transform();
      z_wr_iss/4-31857 [003] 162723.119596: funcgraph_entry:        0.307 us   |              spa_writeable();
      z_wr_iss/4-31857 [003] 162723.119597: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/4-31857 [003] 162723.119598: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.119598: funcgraph_entry:        0.328 us   |                  vdev_readable();
      z_wr_iss/4-31857 [003] 162723.119599: funcgraph_entry:        0.325 us   |                  vdev_readable();
      z_wr_iss/4-31857 [003] 162723.119600: funcgraph_exit:         1.950 us   |                }
      z_wr_iss/4-31857 [003] 162723.119601: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.119601: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/4-31857 [003] 162723.119601: funcgraph_entry:        0.504 us   |                    zio_add_child();
      z_wr_iss/4-31857 [003] 162723.119602: funcgraph_exit:         1.342 us   |                  }
      z_wr_iss/4-31857 [003] 162723.119603: funcgraph_exit:         1.939 us   |                }
      z_wr_iss/4-31857 [003] 162723.119603: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.119603: funcgraph_entry:        0.312 us   |                  spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119604: funcgraph_entry:        0.280 us   |                  spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119604: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.119605: funcgraph_entry:        0.317 us   |                    spa_writeable();
      z_wr_iss/4-31857 [003] 162723.119605: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/4-31857 [003] 162723.119606: funcgraph_entry:        0.341 us   |                      vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.119606: funcgraph_entry:        0.438 us   |                      vdev_queue_io_to_issue();
      z_wr_iss/4-31857 [003] 162723.119607: funcgraph_exit:         1.883 us   |                    }
      z_wr_iss/4-31857 [003] 162723.119607: funcgraph_exit:         3.122 us   |                  }
      z_wr_iss/4-31857 [003] 162723.119608: funcgraph_exit:         4.888 us   |                }
      z_wr_iss/4-31857 [003] 162723.119609: funcgraph_exit:       + 11.600 us  |              }
      z_wr_iss/4-31857 [003] 162723.119609: funcgraph_exit:       + 14.746 us  |            }
      z_wr_iss/4-31857 [003] 162723.119609: funcgraph_entry:        0.272 us   |            spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119610: funcgraph_entry:        0.315 us   |            spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119610: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/4-31857 [003] 162723.119611: funcgraph_entry:        0.512 us   |              zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119611: funcgraph_exit:         1.086 us   |            }
      z_wr_iss/4-31857 [003] 162723.119612: funcgraph_exit:       + 19.165 us  |          }
      z_wr_iss/4-31857 [003] 162723.119612: funcgraph_exit:       ! 101.565 us |        }
      z_wr_iss/4-31857 [003] 162723.119613: funcgraph_exit:       ! 103.146 us |      }
      z_wr_iss/4-31857 [003] 162723.119613: funcgraph_entry:        0.306 us   |      spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119613: funcgraph_entry:        0.426 us   |      spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119614: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_wr_iss/4-31857 [003] 162723.119615: funcgraph_entry:        0.385 us   |        zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119615: funcgraph_exit:         1.010 us   |      }
      z_wr_iss/4-31857 [003] 162723.119616: funcgraph_exit:       ! 190.997 us |    }
      z_wr_iss/4-31857 [003] 162723.119616: funcgraph_entry:        0.327 us   |    spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119617: funcgraph_entry:        1.028 us   |    zio_taskq_member();
      z_wr_iss/4-31857 [003] 162723.119618: funcgraph_entry:        0.276 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119618: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.119619: funcgraph_entry:        0.330 us   |      spa_config_enter();
      z_wr_iss/4-31857 [003] 162723.119619: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/4-31857 [003] 162723.119620: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.119621: funcgraph_entry:        2.346 us   |          spa_get_random();
      z_wr_iss/4-31857 [003] 162723.119623: funcgraph_entry:        0.410 us   |          vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119624: funcgraph_entry:        0.342 us   |          vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119625: funcgraph_entry:        0.309 us   |          vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.119625: funcgraph_exit:         5.497 us   |        }
      z_wr_iss/4-31857 [003] 162723.119626: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.119626: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/4-31857 [003] 162723.119626: funcgraph_entry:        0.636 us   |            zio_add_child();
      z_wr_iss/4-31857 [003] 162723.119627: funcgraph_exit:         1.505 us   |          }
      z_wr_iss/4-31857 [003] 162723.119628: funcgraph_exit:         2.153 us   |        }
      z_wr_iss/4-31857 [003] 162723.119628: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.119628: funcgraph_entry:        0.354 us   |          spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119629: funcgraph_entry:        0.281 us   |          spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119630: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.119630: funcgraph_entry:        0.534 us   |            zio_buf_alloc();
      z_wr_iss/4-31857 [003] 162723.119631: funcgraph_entry:        0.398 us   |            zio_push_transform();
      z_wr_iss/4-31857 [003] 162723.119632: funcgraph_entry:        0.294 us   |            spa_writeable();
      z_wr_iss/4-31857 [003] 162723.119633: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/4-31857 [003] 162723.119633: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.119634: funcgraph_entry:        0.368 us   |                vdev_readable();
      z_wr_iss/4-31857 [003] 162723.119635: funcgraph_entry:        0.304 us   |                vdev_readable();
      z_wr_iss/4-31857 [003] 162723.119635: funcgraph_exit:         1.992 us   |              }
      z_wr_iss/4-31857 [003] 162723.119636: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.119637: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/4-31857 [003] 162723.119637: funcgraph_entry:        0.503 us   |                  zio_add_child();
      z_wr_iss/4-31857 [003] 162723.119638: funcgraph_exit:         1.443 us   |                }
      z_wr_iss/4-31857 [003] 162723.119639: funcgraph_exit:         2.049 us   |              }
      z_wr_iss/4-31857 [003] 162723.119639: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.119639: funcgraph_entry:        0.327 us   |                spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119640: funcgraph_entry:        0.308 us   |                spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119640: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.119641: funcgraph_entry:        0.325 us   |                  spa_writeable();
      z_wr_iss/4-31857 [003] 162723.119641: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/4-31857 [003] 162723.119643: funcgraph_entry:        0.280 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.119644: funcgraph_entry:        0.355 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/4-31857 [003] 162723.119644: funcgraph_exit:         3.191 us   |                  }
      z_wr_iss/4-31857 [003] 162723.119645: funcgraph_exit:         4.432 us   |                }
      z_wr_iss/4-31857 [003] 162723.119645: funcgraph_exit:         6.181 us   |              }
      z_wr_iss/4-31857 [003] 162723.119646: funcgraph_exit:       + 13.025 us  |            }
      z_wr_iss/4-31857 [003] 162723.119646: funcgraph_exit:       + 16.425 us  |          }
      z_wr_iss/4-31857 [003] 162723.119646: funcgraph_entry:        0.576 us   |          spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119647: funcgraph_entry:        0.299 us   |          spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119648: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/4-31857 [003] 162723.119648: funcgraph_entry:        0.358 us   |            zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119649: funcgraph_exit:         0.945 us   |          }
      z_wr_iss/4-31857 [003] 162723.119649: funcgraph_exit:       + 21.174 us  |        }
      z_wr_iss/4-31857 [003] 162723.119650: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.119650: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/4-31857 [003] 162723.119651: funcgraph_entry:        0.506 us   |            zio_add_child();
      z_wr_iss/4-31857 [003] 162723.119651: funcgraph_exit:         1.520 us   |          }
      z_wr_iss/4-31857 [003] 162723.119652: funcgraph_exit:         2.159 us   |        }
      z_wr_iss/4-31857 [003] 162723.119652: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.119652: funcgraph_entry:        0.292 us   |          spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119653: funcgraph_entry:        0.297 us   |          spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119653: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.119654: funcgraph_entry:        0.481 us   |            zio_buf_alloc();
      z_wr_iss/4-31857 [003] 162723.119655: funcgraph_entry:        0.400 us   |            zio_push_transform();
      z_wr_iss/4-31857 [003] 162723.119656: funcgraph_entry:        0.307 us   |            spa_writeable();
      z_wr_iss/4-31857 [003] 162723.119656: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/4-31857 [003] 162723.119657: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.119658: funcgraph_entry:        0.328 us   |                vdev_readable();
      z_wr_iss/4-31857 [003] 162723.119658: funcgraph_entry:        0.315 us   |                vdev_readable();
      z_wr_iss/4-31857 [003] 162723.119659: funcgraph_exit:         1.910 us   |              }
      z_wr_iss/4-31857 [003] 162723.119660: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.119660: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/4-31857 [003] 162723.119661: funcgraph_entry:        0.501 us   |                  zio_add_child();
      z_wr_iss/4-31857 [003] 162723.119662: funcgraph_exit:         1.310 us   |                }
      z_wr_iss/4-31857 [003] 162723.119662: funcgraph_exit:         1.937 us   |              }
      z_wr_iss/4-31857 [003] 162723.119662: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.119663: funcgraph_entry:        0.319 us   |                spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119663: funcgraph_entry:        0.306 us   |                spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119664: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.119664: funcgraph_entry:        0.329 us   |                  spa_writeable();
      z_wr_iss/4-31857 [003] 162723.119665: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/4-31857 [003] 162723.119665: funcgraph_entry:        0.340 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.119666: funcgraph_entry:        0.351 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.119667: funcgraph_entry:        0.376 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/4-31857 [003] 162723.119668: funcgraph_exit:         2.759 us   |                  }
      z_wr_iss/4-31857 [003] 162723.119668: funcgraph_exit:         3.979 us   |                }
      z_wr_iss/4-31857 [003] 162723.119668: funcgraph_exit:         5.802 us   |              }
      z_wr_iss/4-31857 [003] 162723.119669: funcgraph_exit:       + 12.427 us  |            }
      z_wr_iss/4-31857 [003] 162723.119669: funcgraph_exit:       + 15.709 us  |          }
      z_wr_iss/4-31857 [003] 162723.119669: funcgraph_entry:        0.308 us   |          spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119670: funcgraph_entry:        0.360 us   |          spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119671: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/4-31857 [003] 162723.119671: funcgraph_entry:        0.339 us   |            zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119672: funcgraph_exit:         0.983 us   |          }
      z_wr_iss/4-31857 [003] 162723.119672: funcgraph_exit:       + 20.178 us  |        }
      z_wr_iss/4-31857 [003] 162723.119672: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.119673: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/4-31857 [003] 162723.119673: funcgraph_entry:        0.565 us   |            zio_add_child();
      z_wr_iss/4-31857 [003] 162723.119674: funcgraph_exit:         1.270 us   |          }
      z_wr_iss/4-31857 [003] 162723.119674: funcgraph_exit:         1.928 us   |        }
      z_wr_iss/4-31857 [003] 162723.119675: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.119675: funcgraph_entry:        0.309 us   |          spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119676: funcgraph_entry:        0.282 us   |          spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119676: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.119677: funcgraph_entry:        0.424 us   |            zio_buf_alloc();
      z_wr_iss/4-31857 [003] 162723.119678: funcgraph_entry:        0.469 us   |            zio_push_transform();
      z_wr_iss/4-31857 [003] 162723.119679: funcgraph_entry:        0.485 us   |            spa_writeable();
      z_wr_iss/4-31857 [003] 162723.119679: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/4-31857 [003] 162723.119680: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.119681: funcgraph_entry:        0.388 us   |                vdev_readable();
      z_wr_iss/4-31857 [003] 162723.119681: funcgraph_entry:        0.334 us   |                vdev_readable();
      z_wr_iss/4-31857 [003] 162723.119682: funcgraph_exit:         1.992 us   |              }
      z_wr_iss/4-31857 [003] 162723.119683: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.119683: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/4-31857 [003] 162723.119684: funcgraph_entry:        0.541 us   |                  zio_add_child();
      z_wr_iss/4-31857 [003] 162723.119685: funcgraph_exit:         1.349 us   |                }
      z_wr_iss/4-31857 [003] 162723.119685: funcgraph_exit:         2.078 us   |              }
      z_wr_iss/4-31857 [003] 162723.119685: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.119686: funcgraph_entry:        0.285 us   |                spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119686: funcgraph_entry:        0.316 us   |                spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119687: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.119687: funcgraph_entry:        0.299 us   |                  spa_writeable();
      z_wr_iss/4-31857 [003] 162723.119688: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/4-31857 [003] 162723.119688: funcgraph_entry:        0.311 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.119689: funcgraph_entry:        0.307 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.119690: funcgraph_entry:        0.379 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/4-31857 [003] 162723.119690: funcgraph_exit:         2.429 us   |                  }
      z_wr_iss/4-31857 [003] 162723.119691: funcgraph_exit:         3.626 us   |                }
      z_wr_iss/4-31857 [003] 162723.119691: funcgraph_exit:         5.462 us   |              }
      z_wr_iss/4-31857 [003] 162723.119692: funcgraph_exit:       + 12.246 us  |            }
      z_wr_iss/4-31857 [003] 162723.119692: funcgraph_exit:       + 15.742 us  |          }
      z_wr_iss/4-31857 [003] 162723.119692: funcgraph_entry:        0.303 us   |          spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119693: funcgraph_entry:        0.278 us   |          spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119693: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/4-31857 [003] 162723.119694: funcgraph_entry:        0.311 us   |            zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119694: funcgraph_exit:         0.930 us   |          }
      z_wr_iss/4-31857 [003] 162723.119695: funcgraph_exit:       + 19.985 us  |        }
      z_wr_iss/4-31857 [003] 162723.119695: funcgraph_exit:       + 75.592 us  |      }
      z_wr_iss/4-31857 [003] 162723.119695: funcgraph_exit:       + 76.811 us  |    }
      z_wr_iss/4-31857 [003] 162723.119696: funcgraph_entry:        0.381 us   |    spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.119696: funcgraph_entry:        0.313 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.119697: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/4-31857 [003] 162723.119697: funcgraph_entry:        0.314 us   |      zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.119698: funcgraph_exit:         0.958 us   |    }
      z_wr_iss/4-31857 [003] 162723.119698: funcgraph_exit:       ! 404.451 us |  }
      z_wr_iss/3-31856 [007] 162723.347862: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/3-31856 [007] 162723.347863: funcgraph_entry:        0.659 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.347864: funcgraph_entry:        0.688 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.347866: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/3-31856 [007] 162723.347866: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/3-31856 [007] 162723.347867: funcgraph_entry:        3.370 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/3-31856 [007] 162723.347871: funcgraph_exit:         4.570 us   |      }
      z_wr_iss/3-31856 [007] 162723.347871: funcgraph_exit:         5.738 us   |    }
      z_wr_iss/3-31856 [007] 162723.347872: funcgraph_exit:         9.572 us   |  }
      z_wr_iss/3-31856 [007] 162723.347873: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/3-31856 [007] 162723.347873: funcgraph_entry:        0.610 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.347874: funcgraph_entry:        0.633 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.347876: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/3-31856 [007] 162723.347876: funcgraph_entry:        0.718 us   |      zio_wait_for_children();
      z_wr_iss/3-31856 [007] 162723.347878: funcgraph_entry:        0.569 us   |      zio_wait_for_children();
      z_wr_iss/3-31856 [007] 162723.347879: funcgraph_entry:        0.922 us   |      zio_buf_alloc();
      z_wr_iss/3-31856 [007] 162723.347880: funcgraph_entry:        0.703 us   |      zio_compress_data();
      z_wr_iss/3-31856 [007] 162723.347882: funcgraph_entry:        0.851 us   |      zio_buf_free();
      z_wr_iss/3-31856 [007] 162723.347883: funcgraph_exit:         7.506 us   |    }
      z_wr_iss/3-31856 [007] 162723.347884: funcgraph_entry:        0.504 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.347885: funcgraph_entry:        0.606 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.347886: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/3-31856 [007] 162723.347887: funcgraph_entry:        1.101 us   |      zio_checksum_compute();
      z_wr_iss/3-31856 [007] 162723.347888: funcgraph_exit:         2.240 us   |    }
      z_wr_iss/3-31856 [007] 162723.347889: funcgraph_entry:        0.551 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.347890: funcgraph_entry:        3.581 us   |    zio_taskq_member();
      z_wr_iss/3-31856 [007] 162723.347894: funcgraph_entry:        0.580 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.347896: funcgraph_entry:                   |    zio_dva_allocate() {
      z_wr_iss/3-31856 [007] 162723.347896: funcgraph_entry:        0.635 us   |      spa_normal_class();
      z_wr_iss/3-31856 [007] 162723.347898: funcgraph_entry:                   |      metaslab_alloc() {
      z_wr_iss/3-31856 [007] 162723.347898: funcgraph_entry:        0.886 us   |        spa_config_enter();
      z_wr_iss/3-31856 [007] 162723.347901: funcgraph_entry:        0.804 us   |        vdev_allocatable();
      z_wr_iss/3-31856 [007] 162723.347902: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/3-31856 [007] 162723.347903: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/3-31856 [007] 162723.347904: funcgraph_entry:        0.813 us   |            vdev_default_asize();
      z_wr_iss/3-31856 [007] 162723.347906: funcgraph_entry:        0.668 us   |            vdev_default_asize();
      z_wr_iss/3-31856 [007] 162723.347907: funcgraph_exit:         3.812 us   |          }
      z_wr_iss/3-31856 [007] 162723.347908: funcgraph_exit:         5.409 us   |        }
      z_wr_iss/3-31856 [007] 162723.347909: funcgraph_entry:        0.718 us   |        metaslab_activate();
      z_wr_iss/3-31856 [007] 162723.347911: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/3-31856 [007] 162723.347912: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/3-31856 [007] 162723.347912: funcgraph_entry:        0.749 us   |            metaslab_pp_maxsize();
      z_wr_iss/3-31856 [007] 162723.347914: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/3-31856 [007] 162723.347915: funcgraph_entry:        0.619 us   |              space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.347916: funcgraph_exit:         2.181 us   |            }
      z_wr_iss/3-31856 [007] 162723.347917: funcgraph_exit:         5.102 us   |          }
      z_wr_iss/3-31856 [007] 162723.347917: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/3-31856 [007] 162723.347918: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/3-31856 [007] 162723.347919: funcgraph_entry:        0.661 us   |              space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.347920: funcgraph_exit:         2.228 us   |            }
      z_wr_iss/7-31860 [004] 162723.347921: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/3-31856 [007] 162723.347921: funcgraph_entry:        0.516 us   |            metaslab_segsize_compare();
      z_wr_iss/7-31860 [004] 162723.347922: funcgraph_entry:        0.316 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.347922: funcgraph_entry:        0.249 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.347923: funcgraph_exit:         5.095 us   |          }
      z_wr_iss/3-31856 [007] 162723.347923: funcgraph_exit:       + 12.406 us  |        }
      z_wr_iss/7-31860 [004] 162723.347923: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/7-31860 [004] 162723.347924: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/7-31860 [004] 162723.347924: funcgraph_entry:        4.075 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/3-31856 [007] 162723.347924: funcgraph_entry:                   |        vdev_dirty() {
      z_wr_iss/3-31856 [007] 162723.347925: funcgraph_entry:        0.626 us   |          txg_list_add();
      z_wr_iss/3-31856 [007] 162723.347926: funcgraph_entry:        0.567 us   |          txg_list_add();
      z_wr_iss/3-31856 [007] 162723.347927: funcgraph_exit:         3.139 us   |        }
      z_wr_iss/3-31856 [007] 162723.347928: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/7-31860 [004] 162723.347928: funcgraph_exit:         4.693 us   |      }
      z_wr_iss/3-31856 [007] 162723.347928: funcgraph_entry:        0.487 us   |          space_map_find();
      z_wr_iss/7-31860 [004] 162723.347928: funcgraph_exit:         5.210 us   |    }
      z_wr_iss/7-31860 [004] 162723.347929: funcgraph_exit:         8.401 us   |  }
      z_wr_iss/8-31861 [005] 162723.347929: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/7-31860 [004] 162723.347929: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/8-31861 [005] 162723.347930: funcgraph_entry:        0.261 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.347930: funcgraph_entry:        0.278 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.347930: funcgraph_exit:         2.375 us   |        }
      z_wr_iss/8-31861 [005] 162723.347930: funcgraph_entry:        0.308 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.347930: funcgraph_entry:        0.273 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.347931: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/3-31856 [007] 162723.347931: funcgraph_entry:        0.680 us   |        vdev_lookup_top();
      z_wr_iss/8-31861 [005] 162723.347931: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/7-31860 [004] 162723.347931: funcgraph_entry:        0.474 us   |      zio_wait_for_children();
      z_wr_iss/8-31861 [005] 162723.347931: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/8-31861 [005] 162723.347932: funcgraph_entry:        2.261 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/7-31860 [004] 162723.347932: funcgraph_entry:        0.291 us   |      zio_wait_for_children();
      z_wr_iss/3-31856 [007] 162723.347932: funcgraph_entry:        0.628 us   |        vdev_allocatable();
      z_wr_iss/7-31860 [004] 162723.347932: funcgraph_entry:        1.024 us   |      zio_buf_alloc();
      z_wr_iss/3-31856 [007] 162723.347934: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/7-31860 [004] 162723.347934: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/8-31861 [005] 162723.347934: funcgraph_exit:         2.842 us   |      }
      z_wr_iss/3-31856 [007] 162723.347934: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/7-31860 [004] 162723.347934: funcgraph_entry:      + 25.792 us  |        lzjb_compress();
      z_wr_iss/8-31861 [005] 162723.347934: funcgraph_exit:         3.296 us   |    }
      z_wr_iss/8-31861 [005] 162723.347935: funcgraph_exit:         5.898 us   |  }
      z_wr_iss/3-31856 [007] 162723.347935: funcgraph_entry:        0.626 us   |            vdev_default_asize();
      z_wr_iss/8-31861 [005] 162723.347935: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/8-31861 [005] 162723.347936: funcgraph_entry:        0.257 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.347936: funcgraph_entry:        0.709 us   |            vdev_default_asize();
      z_wr_iss/8-31861 [005] 162723.347936: funcgraph_entry:        0.262 us   |    spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.347937: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/8-31861 [005] 162723.347937: funcgraph_entry:        0.320 us   |      zio_wait_for_children();
      z_wr_iss/3-31856 [007] 162723.347937: funcgraph_exit:         3.255 us   |          }
      z_wr_iss/8-31861 [005] 162723.347938: funcgraph_entry:        0.290 us   |      zio_wait_for_children();
      z_wr_iss/3-31856 [007] 162723.347938: funcgraph_exit:         4.358 us   |        }
      z_wr_iss/8-31861 [005] 162723.347938: funcgraph_entry:        0.730 us   |      zio_buf_alloc();
      z_wr_iss/3-31856 [007] 162723.347939: funcgraph_entry:        0.844 us   |        metaslab_activate();
      z_wr_iss/8-31861 [005] 162723.347939: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/8-31861 [005] 162723.347940: funcgraph_entry:      + 53.937 us  |        lzjb_compress();
      z_wr_iss/3-31856 [007] 162723.347941: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/3-31856 [007] 162723.347941: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/3-31856 [007] 162723.347942: funcgraph_entry:        0.725 us   |            metaslab_pp_maxsize();
      z_wr_iss/3-31856 [007] 162723.347943: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/3-31856 [007] 162723.347944: funcgraph_entry:        0.683 us   |              space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.347945: funcgraph_exit:         2.144 us   |            }
      z_wr_iss/3-31856 [007] 162723.347946: funcgraph_exit:         4.746 us   |          }
      z_wr_iss/3-31856 [007] 162723.347947: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/3-31856 [007] 162723.347947: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/3-31856 [007] 162723.347948: funcgraph_entry:        0.720 us   |              space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.347949: funcgraph_exit:         2.192 us   |            }
      z_wr_iss/3-31856 [007] 162723.347950: funcgraph_entry:        0.714 us   |            metaslab_segsize_compare();
      z_wr_iss/3-31856 [007] 162723.347952: funcgraph_exit:         5.137 us   |          }
      z_wr_iss/3-31856 [007] 162723.347952: funcgraph_exit:       + 11.764 us  |        }
      z_wr_iss/3-31856 [007] 162723.347953: funcgraph_entry:                   |        vdev_dirty() {
      z_wr_iss/3-31856 [007] 162723.347954: funcgraph_entry:        0.723 us   |          txg_list_add();
      z_wr_iss/3-31856 [007] 162723.347955: funcgraph_entry:        0.798 us   |          txg_list_add();
      z_wr_iss/3-31856 [007] 162723.347957: funcgraph_exit:         3.461 us   |        }
      z_wr_iss/3-31856 [007] 162723.347957: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/3-31856 [007] 162723.347958: funcgraph_entry:        0.607 us   |          space_map_find();
      z_wr_iss/3-31856 [007] 162723.347960: funcgraph_exit:         2.521 us   |        }
      z_wr_iss/3-31856 [007] 162723.347960: funcgraph_entry:        0.738 us   |        vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.347960: funcgraph_exit:       + 26.590 us  |      }
      z_wr_iss/7-31860 [004] 162723.347961: funcgraph_entry:        0.551 us   |      zio_push_transform();
      z_wr_iss/7-31860 [004] 162723.347962: funcgraph_exit:       + 30.745 us  |    }
      z_wr_iss/3-31856 [007] 162723.347962: funcgraph_entry:        0.542 us   |        vdev_allocatable();
      z_wr_iss/7-31860 [004] 162723.347962: funcgraph_entry:        0.233 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.347962: funcgraph_entry:        0.238 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.347963: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/7-31860 [004] 162723.347963: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/7-31860 [004] 162723.347963: funcgraph_entry:        0.617 us   |      zio_checksum_compute();
      z_wr_iss/3-31856 [007] 162723.347964: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/7-31860 [004] 162723.347964: funcgraph_exit:         1.103 us   |    }
      z_wr_iss/3-31856 [007] 162723.347964: funcgraph_entry:        0.725 us   |            vdev_default_asize();
      z_wr_iss/7-31860 [004] 162723.347965: funcgraph_entry:        0.229 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.347965: funcgraph_entry:        1.855 us   |    zio_taskq_member();
      z_wr_iss/3-31856 [007] 162723.347966: funcgraph_entry:        0.711 us   |            vdev_default_asize();
      z_wr_iss/3-31856 [007] 162723.347967: funcgraph_exit:         3.655 us   |          }
      z_wr_iss/7-31860 [004] 162723.347967: funcgraph_entry:        0.253 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.347968: funcgraph_exit:         4.756 us   |        }
      z_wr_iss/7-31860 [004] 162723.347968: funcgraph_entry:                   |    zio_dva_allocate() {
      z_wr_iss/7-31860 [004] 162723.347968: funcgraph_entry:        0.282 us   |      spa_normal_class();
      z_wr_iss/7-31860 [004] 162723.347969: funcgraph_entry:                   |      metaslab_alloc() {
      z_wr_iss/7-31860 [004] 162723.347969: funcgraph_entry:        0.346 us   |        spa_config_enter();
      z_wr_iss/3-31856 [007] 162723.347969: funcgraph_entry:        0.584 us   |        metaslab_activate();
      z_wr_iss/7-31860 [004] 162723.347970: funcgraph_entry:        0.304 us   |        vdev_allocatable();
      z_wr_iss/3-31856 [007] 162723.347970: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/7-31860 [004] 162723.347970: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/7-31860 [004] 162723.347971: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/3-31856 [007] 162723.347971: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/7-31860 [004] 162723.347971: funcgraph_entry:        0.285 us   |            vdev_default_asize();
      z_wr_iss/3-31856 [007] 162723.347972: funcgraph_entry:        0.531 us   |            metaslab_pp_maxsize();
      z_wr_iss/7-31860 [004] 162723.347972: funcgraph_entry:        0.240 us   |            vdev_default_asize();
      z_wr_iss/7-31860 [004] 162723.347972: funcgraph_exit:         1.352 us   |          }
      z_wr_iss/7-31860 [004] 162723.347972: funcgraph_exit:         1.879 us   |        }
      z_wr_iss/3-31856 [007] 162723.347973: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/7-31860 [004] 162723.347973: funcgraph_entry:        0.270 us   |        metaslab_activate();
      z_wr_iss/3-31856 [007] 162723.347973: funcgraph_entry:        0.445 us   |              space_map_seg_compare();
      z_wr_iss/7-31860 [004] 162723.347974: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/7-31860 [004] 162723.347974: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/3-31856 [007] 162723.347974: funcgraph_exit:         1.666 us   |            }
      z_wr_iss/7-31860 [004] 162723.347974: funcgraph_entry:        0.459 us   |            metaslab_pp_maxsize();
      z_wr_iss/3-31856 [007] 162723.347975: funcgraph_exit:         3.834 us   |          }
      z_wr_iss/7-31860 [004] 162723.347975: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/3-31856 [007] 162723.347975: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/7-31860 [004] 162723.347976: funcgraph_entry:        0.242 us   |              space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.347976: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/1-31854 [009] 162723.347976: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/7-31860 [004] 162723.347976: funcgraph_exit:         0.845 us   |            }
      z_wr_iss/3-31856 [007] 162723.347976: funcgraph_entry:        0.597 us   |              space_map_seg_compare();
      z_wr_iss/7-31860 [004] 162723.347977: funcgraph_exit:         2.437 us   |          }
      z_wr_iss/1-31854 [009] 162723.347977: funcgraph_entry:        0.292 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.347977: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/7-31860 [004] 162723.347977: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/1-31854 [009] 162723.347978: funcgraph_entry:        0.320 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.347978: funcgraph_entry:        0.271 us   |              space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.347978: funcgraph_exit:         1.950 us   |            }
      z_wr_iss/7-31860 [004] 162723.347978: funcgraph_exit:         0.857 us   |            }
      z_wr_iss/1-31854 [009] 162723.347978: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/1-31854 [009] 162723.347979: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/3-31856 [007] 162723.347979: funcgraph_exit:         3.256 us   |          }
      z_wr_iss/7-31860 [004] 162723.347979: funcgraph_entry:        0.341 us   |            metaslab_segsize_compare();
      z_wr_iss/1-31854 [009] 162723.347979: funcgraph_entry:        2.170 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/3-31856 [007] 162723.347979: funcgraph_exit:         8.828 us   |        }
      z_wr_iss/7-31860 [004] 162723.347979: funcgraph_exit:         2.545 us   |          }
      z_wr_iss/7-31860 [004] 162723.347980: funcgraph_exit:         5.931 us   |        }
      z_wr_iss/3-31856 [007] 162723.347980: funcgraph_entry:                   |        vdev_dirty() {
      z_wr_iss/7-31860 [004] 162723.347980: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/3-31856 [007] 162723.347980: funcgraph_entry:        0.734 us   |          txg_list_add();
      z_wr_iss/7-31860 [004] 162723.347981: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/7-31860 [004] 162723.347981: funcgraph_entry:        0.335 us   |            space_map_seg_compare();
      z_wr_iss/1-31854 [009] 162723.347981: funcgraph_exit:         2.821 us   |      }
      z_wr_iss/7-31860 [004] 162723.347981: funcgraph_exit:         0.928 us   |          }
      z_wr_iss/1-31854 [009] 162723.347982: funcgraph_exit:         3.357 us   |    }
      z_wr_iss/3-31856 [007] 162723.347982: funcgraph_entry:        0.636 us   |          txg_list_add();
      z_wr_iss/7-31860 [004] 162723.347982: funcgraph_exit:         1.670 us   |        }
      z_wr_iss/1-31854 [009] 162723.347982: funcgraph_exit:         6.015 us   |  }
      z_wr_iss/7-31860 [004] 162723.347982: funcgraph_entry:        0.349 us   |        vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.347982: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/1-31854 [009] 162723.347983: funcgraph_entry:        0.278 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.347983: funcgraph_entry:        0.275 us   |        vdev_allocatable();
      z_wr_iss/3-31856 [007] 162723.347983: funcgraph_exit:         3.175 us   |        }
      z_wr_iss/1-31854 [009] 162723.347983: funcgraph_entry:        0.283 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.347983: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/3-31856 [007] 162723.347983: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/7-31860 [004] 162723.347984: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/1-31854 [009] 162723.347984: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/7-31860 [004] 162723.347984: funcgraph_entry:        0.346 us   |            vdev_default_asize();
      z_wr_iss/1-31854 [009] 162723.347984: funcgraph_entry:        0.301 us   |      zio_wait_for_children();
      z_wr_iss/3-31856 [007] 162723.347984: funcgraph_entry:        0.527 us   |          space_map_find();
      z_wr_iss/7-31860 [004] 162723.347985: funcgraph_entry:        0.291 us   |            vdev_default_asize();
      z_wr_iss/1-31854 [009] 162723.347985: funcgraph_entry:        0.263 us   |      zio_wait_for_children();
      z_wr_iss/7-31860 [004] 162723.347985: funcgraph_exit:         1.471 us   |          }
      z_wr_iss/3-31856 [007] 162723.347985: funcgraph_exit:         1.857 us   |        }
      z_wr_iss/1-31854 [009] 162723.347985: funcgraph_entry:        0.880 us   |      zio_buf_alloc();
      z_wr_iss/7-31860 [004] 162723.347985: funcgraph_exit:         1.998 us   |        }
      z_wr_iss/3-31856 [007] 162723.347986: funcgraph_entry:        0.616 us   |        spa_config_exit();
      z_wr_iss/7-31860 [004] 162723.347986: funcgraph_entry:        0.302 us   |        metaslab_activate();
      z_wr_iss/1-31854 [009] 162723.347987: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/7-31860 [004] 162723.347987: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/7-31860 [004] 162723.347987: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/3-31856 [007] 162723.347987: funcgraph_exit:       + 89.226 us  |      }
      z_wr_iss/1-31854 [009] 162723.347987: funcgraph_entry:      ! 204.254 us |        lzjb_compress();
      z_wr_iss/7-31860 [004] 162723.347987: funcgraph_entry:        0.480 us   |            metaslab_pp_maxsize();
      z_wr_iss/3-31856 [007] 162723.347988: funcgraph_exit:       + 92.405 us  |    }
      z_wr_iss/7-31860 [004] 162723.347988: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/7-31860 [004] 162723.347988: funcgraph_entry:        0.328 us   |              space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.347988: funcgraph_entry:        0.676 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.347989: funcgraph_exit:         1.066 us   |            }
      z_wr_iss/7-31860 [004] 162723.347989: funcgraph_exit:         2.378 us   |          }
      z_wr_iss/7-31860 [004] 162723.347990: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/3-31856 [007] 162723.347990: funcgraph_entry:        0.713 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.347990: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/7-31860 [004] 162723.347990: funcgraph_entry:        0.292 us   |              space_map_seg_compare();
      z_wr_iss/7-31860 [004] 162723.347991: funcgraph_exit:         0.854 us   |            }
      z_wr_iss/7-31860 [004] 162723.347991: funcgraph_entry:        0.341 us   |            metaslab_segsize_compare();
      z_wr_iss/3-31856 [007] 162723.347991: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/3-31856 [007] 162723.347992: funcgraph_entry:        0.643 us   |      zio_wait_for_children();
      z_wr_iss/7-31860 [004] 162723.347992: funcgraph_exit:         2.148 us   |          }
      z_wr_iss/7-31860 [004] 162723.347992: funcgraph_exit:         5.377 us   |        }
      z_wr_iss/7-31860 [004] 162723.347992: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/7-31860 [004] 162723.347993: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/3-31856 [007] 162723.347993: funcgraph_entry:        0.654 us   |      zio_wait_for_children();
      z_wr_iss/7-31860 [004] 162723.347993: funcgraph_entry:        0.357 us   |            space_map_seg_compare();
      z_wr_iss/7-31860 [004] 162723.347994: funcgraph_exit:         0.934 us   |          }
      z_wr_iss/7-31860 [004] 162723.347994: funcgraph_exit:         1.575 us   |        }
      z_wr_iss/7-31860 [004] 162723.347994: funcgraph_entry:        0.327 us   |        vdev_lookup_top();
      z_wr_iss/8-31861 [005] 162723.347994: funcgraph_exit:       + 54.964 us  |      }
      z_wr_iss/3-31856 [007] 162723.347994: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/8-31861 [005] 162723.347995: funcgraph_entry:        0.655 us   |      zio_push_transform();
      z_wr_iss/7-31860 [004] 162723.347995: funcgraph_entry:        0.265 us   |        vdev_allocatable();
      z_wr_iss/3-31856 [007] 162723.347995: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/7-31860 [004] 162723.347995: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/7-31860 [004] 162723.347996: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/8-31861 [005] 162723.347996: funcgraph_exit:       + 58.926 us  |    }
      z_wr_iss/7-31860 [004] 162723.347996: funcgraph_entry:        0.338 us   |            vdev_default_asize();
      z_wr_iss/3-31856 [007] 162723.347996: funcgraph_entry:        0.726 us   |          zrl_add();
      z_wr_iss/8-31861 [005] 162723.347996: funcgraph_entry:        0.249 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.347996: funcgraph_entry:        0.291 us   |            vdev_default_asize();
      z_wr_iss/8-31861 [005] 162723.347997: funcgraph_entry:        0.252 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.347997: funcgraph_exit:         1.479 us   |          }
      z_wr_iss/7-31860 [004] 162723.347997: funcgraph_exit:         1.963 us   |        }
      z_wr_iss/8-31861 [005] 162723.347997: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/3-31856 [007] 162723.347997: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/8-31861 [005] 162723.347998: funcgraph_entry:        1.160 us   |      zio_checksum_compute();
      z_wr_iss/3-31856 [007] 162723.347998: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/7-31860 [004] 162723.347998: funcgraph_entry:        0.334 us   |        metaslab_activate();
      z_wr_iss/3-31856 [007] 162723.347999: funcgraph_entry:        0.898 us   |              vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.347999: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/7-31860 [004] 162723.347999: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/8-31861 [005] 162723.347999: funcgraph_exit:         1.739 us   |    }
      z_wr_iss/7-31860 [004] 162723.347999: funcgraph_entry:        0.412 us   |            metaslab_pp_maxsize();
      z_wr_iss/8-31861 [005] 162723.347999: funcgraph_entry:        0.252 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.348000: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/8-31861 [005] 162723.348000: funcgraph_entry:        1.151 us   |    zio_taskq_member();
      z_wr_iss/3-31856 [007] 162723.348000: funcgraph_exit:         2.072 us   |            }
      z_wr_iss/7-31860 [004] 162723.348000: funcgraph_entry:        0.273 us   |              space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.348001: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/7-31860 [004] 162723.348001: funcgraph_exit:         0.873 us   |            }
      z_wr_iss/7-31860 [004] 162723.348001: funcgraph_exit:         2.093 us   |          }
      z_wr_iss/7-31860 [004] 162723.348001: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/3-31856 [007] 162723.348001: funcgraph_entry:        0.622 us   |              vdev_lookup_top();
      z_wr_iss/8-31861 [005] 162723.348001: funcgraph_entry:        0.247 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.348001: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/7-31860 [004] 162723.348002: funcgraph_entry:        0.299 us   |              space_map_seg_compare();
      z_wr_iss/8-31861 [005] 162723.348002: funcgraph_entry:                   |    zio_dva_allocate() {
      z_wr_iss/8-31861 [005] 162723.348002: funcgraph_entry:        0.261 us   |      spa_normal_class();
      z_wr_iss/7-31860 [004] 162723.348002: funcgraph_exit:         0.824 us   |            }
      z_wr_iss/3-31856 [007] 162723.348002: funcgraph_exit:         1.799 us   |            }
      z_wr_iss/7-31860 [004] 162723.348003: funcgraph_exit:         1.483 us   |          }
      z_wr_iss/8-31861 [005] 162723.348003: funcgraph_entry:                   |      metaslab_alloc() {
      z_wr_iss/3-31856 [007] 162723.348003: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/8-31861 [005] 162723.348003: funcgraph_entry:        0.463 us   |        spa_config_enter();
      z_wr_iss/7-31860 [004] 162723.348003: funcgraph_exit:         4.349 us   |        }
      z_wr_iss/7-31860 [004] 162723.348003: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/3-31856 [007] 162723.348004: funcgraph_entry:        0.751 us   |              vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.348004: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/8-31861 [005] 162723.348004: funcgraph_entry:        0.363 us   |        vdev_allocatable();
      z_wr_iss/7-31860 [004] 162723.348004: funcgraph_entry:        0.346 us   |            space_map_seg_compare();
      z_wr_iss/7-31860 [004] 162723.348005: funcgraph_exit:         0.951 us   |          }
      z_wr_iss/8-31861 [005] 162723.348005: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/3-31856 [007] 162723.348005: funcgraph_exit:         2.119 us   |            }
      z_wr_iss/8-31861 [005] 162723.348005: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/7-31860 [004] 162723.348005: funcgraph_exit:         1.618 us   |        }
      z_wr_iss/8-31861 [005] 162723.348005: funcgraph_entry:        0.380 us   |            vdev_default_asize();
      z_wr_iss/7-31860 [004] 162723.348005: funcgraph_entry:        0.416 us   |        spa_config_exit();
      z_wr_iss/3-31856 [007] 162723.348006: funcgraph_exit:         8.228 us   |          }
      z_wr_iss/8-31861 [005] 162723.348006: funcgraph_entry:        0.402 us   |            vdev_default_asize();
      z_wr_iss/3-31856 [007] 162723.348006: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/7-31860 [004] 162723.348006: funcgraph_exit:       + 37.646 us  |      }
      z_wr_iss/7-31860 [004] 162723.348006: funcgraph_exit:       + 38.731 us  |    }
      z_wr_iss/3-31856 [007] 162723.348007: funcgraph_entry:        0.596 us   |            dva_get_dsize_sync();
      z_wr_iss/8-31861 [005] 162723.348007: funcgraph_exit:         1.709 us   |          }
      z_wr_iss/7-31860 [004] 162723.348007: funcgraph_entry:        0.259 us   |    spa_get_dsl();
      z_wr_iss/8-31861 [005] 162723.348007: funcgraph_exit:         2.311 us   |        }
      z_wr_iss/7-31860 [004] 162723.348007: funcgraph_entry:        0.266 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.348008: funcgraph_entry:        0.678 us   |            dva_get_dsize_sync();
      z_wr_iss/8-31861 [005] 162723.348008: funcgraph_entry:        0.346 us   |        metaslab_activate();
      z_wr_iss/7-31860 [004] 162723.348008: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/7-31860 [004] 162723.348008: funcgraph_entry:        0.263 us   |      zio_wait_for_children();
      z_wr_iss/8-31861 [005] 162723.348009: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/7-31860 [004] 162723.348009: funcgraph_entry:        0.297 us   |      zio_wait_for_children();
      z_wr_iss/8-31861 [005] 162723.348009: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/3-31856 [007] 162723.348009: funcgraph_entry:        0.481 us   |            dva_get_dsize_sync();
      z_wr_iss/8-31861 [005] 162723.348009: funcgraph_entry:        0.531 us   |            metaslab_pp_maxsize();
      z_wr_iss/7-31860 [004] 162723.348009: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/7-31860 [004] 162723.348010: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/3-31856 [007] 162723.348010: funcgraph_exit:         4.108 us   |          }
      z_wr_iss/7-31860 [004] 162723.348010: funcgraph_entry:        0.429 us   |          zrl_add();
      z_wr_iss/8-31861 [005] 162723.348010: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/8-31861 [005] 162723.348011: funcgraph_entry:        0.377 us   |              space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.348011: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/7-31860 [004] 162723.348011: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/8-31861 [005] 162723.348011: funcgraph_exit:         1.000 us   |            }
      z_wr_iss/7-31860 [004] 162723.348011: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/8-31861 [005] 162723.348012: funcgraph_exit:         2.586 us   |          }
      z_wr_iss/7-31860 [004] 162723.348012: funcgraph_entry:        0.299 us   |              vdev_lookup_top();
      z_wr_iss/3-31856 [007] 162723.348012: funcgraph_entry:        0.655 us   |            spa_version();
      z_wr_iss/8-31861 [005] 162723.348012: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/7-31860 [004] 162723.348012: funcgraph_exit:         0.862 us   |            }
      z_wr_iss/8-31861 [005] 162723.348012: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/7-31860 [004] 162723.348012: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/8-31861 [005] 162723.348012: funcgraph_entry:        0.283 us   |              space_map_seg_compare();
      z_wr_iss/7-31860 [004] 162723.348013: funcgraph_entry:        0.285 us   |              vdev_lookup_top();
      z_wr_iss/8-31861 [005] 162723.348013: funcgraph_exit:         0.985 us   |            }
      z_wr_iss/7-31860 [004] 162723.348013: funcgraph_exit:         0.797 us   |            }
      z_wr_iss/7-31860 [004] 162723.348013: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/3-31856 [007] 162723.348014: funcgraph_exit:         2.269 us   |          }
      z_wr_iss/8-31861 [005] 162723.348014: funcgraph_entry:        0.322 us   |            metaslab_segsize_compare();
      z_wr_iss/7-31860 [004] 162723.348014: funcgraph_entry:        0.275 us   |              vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.348014: funcgraph_exit:         0.777 us   |            }
      z_wr_iss/8-31861 [005] 162723.348014: funcgraph_exit:         2.491 us   |          }
      z_wr_iss/3-31856 [007] 162723.348014: funcgraph_entry:        0.626 us   |          zrl_remove();
      z_wr_iss/7-31860 [004] 162723.348014: funcgraph_exit:         3.494 us   |          }
      z_wr_iss/8-31861 [005] 162723.348015: funcgraph_exit:         6.052 us   |        }
      z_wr_iss/7-31860 [004] 162723.348015: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/8-31861 [005] 162723.348015: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/7-31860 [004] 162723.348015: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/7-31860 [004] 162723.348015: funcgraph_entry:        0.271 us   |              vdev_lookup_top();
      z_wr_iss/8-31861 [005] 162723.348015: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/8-31861 [005] 162723.348016: funcgraph_entry:        0.323 us   |            space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.348016: funcgraph_exit:       + 20.526 us  |        }
      z_wr_iss/7-31860 [004] 162723.348016: funcgraph_exit:         0.784 us   |            }
      z_wr_iss/7-31860 [004] 162723.348016: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/8-31861 [005] 162723.348016: funcgraph_exit:         0.892 us   |          }
      z_wr_iss/7-31860 [004] 162723.348016: funcgraph_entry:        0.262 us   |              vdev_lookup_top();
      z_wr_iss/3-31856 [007] 162723.348016: funcgraph_entry:        0.685 us   |        arc_cksum_compute();
      z_wr_iss/8-31861 [005] 162723.348017: funcgraph_exit:         1.625 us   |        }
      z_wr_iss/7-31860 [004] 162723.348017: funcgraph_exit:         0.788 us   |            }
      z_wr_iss/8-31861 [005] 162723.348017: funcgraph_entry:        0.367 us   |        vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.348017: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/7-31860 [004] 162723.348017: funcgraph_entry:        0.256 us   |              vdev_lookup_top();
      z_wr_iss/3-31856 [007] 162723.348018: funcgraph_exit:       + 23.234 us  |      }
      z_wr_iss/8-31861 [005] 162723.348018: funcgraph_entry:        0.314 us   |        vdev_allocatable();
      z_wr_iss/7-31860 [004] 162723.348018: funcgraph_exit:         0.756 us   |            }
      z_wr_iss/7-31860 [004] 162723.348018: funcgraph_exit:         3.327 us   |          }
      z_wr_iss/8-31861 [005] 162723.348018: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/7-31860 [004] 162723.348018: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/3-31856 [007] 162723.348018: funcgraph_entry:        0.577 us   |      zio_walk_parents();
      z_wr_iss/8-31861 [005] 162723.348019: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/7-31860 [004] 162723.348019: funcgraph_entry:        0.280 us   |            spa_version();
      z_wr_iss/8-31861 [005] 162723.348019: funcgraph_entry:        0.275 us   |            vdev_default_asize();
      z_wr_iss/7-31860 [004] 162723.348019: funcgraph_exit:         0.982 us   |          }
      z_wr_iss/3-31856 [007] 162723.348019: funcgraph_entry:        0.551 us   |      zio_walk_parents();
      z_wr_iss/8-31861 [005] 162723.348020: funcgraph_entry:        0.276 us   |            vdev_default_asize();
      z_wr_iss/7-31860 [004] 162723.348020: funcgraph_entry:        0.271 us   |          zrl_remove();
      z_wr_iss/8-31861 [005] 162723.348020: funcgraph_exit:         1.412 us   |          }
      z_wr_iss/7-31860 [004] 162723.348020: funcgraph_exit:       + 10.619 us  |        }
      z_wr_iss/8-31861 [005] 162723.348020: funcgraph_exit:         2.159 us   |        }
      z_wr_iss/3-31856 [007] 162723.348021: funcgraph_exit:       + 29.719 us  |    }
      z_wr_iss/7-31860 [004] 162723.348021: funcgraph_entry:        0.290 us   |        arc_cksum_compute();
      z_wr_iss/8-31861 [005] 162723.348021: funcgraph_entry:        0.325 us   |        metaslab_activate();
      z_wr_iss/7-31860 [004] 162723.348021: funcgraph_exit:       + 11.859 us  |      }
      z_wr_iss/3-31856 [007] 162723.348021: funcgraph_entry:        0.666 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.348022: funcgraph_entry:        0.360 us   |      zio_walk_parents();
      z_wr_iss/8-31861 [005] 162723.348022: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/8-31861 [005] 162723.348022: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/7-31860 [004] 162723.348022: funcgraph_entry:        0.338 us   |      zio_walk_parents();
      z_wr_iss/8-31861 [005] 162723.348022: funcgraph_entry:        0.583 us   |            metaslab_pp_maxsize();
      z_wr_iss/3-31856 [007] 162723.348023: funcgraph_entry:        1.767 us   |    zio_taskq_member();
      z_wr_iss/7-31860 [004] 162723.348023: funcgraph_exit:       + 15.196 us  |    }
      z_wr_iss/7-31860 [004] 162723.348023: funcgraph_entry:        0.306 us   |    spa_get_dsl();
      z_wr_iss/8-31861 [005] 162723.348023: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/8-31861 [005] 162723.348024: funcgraph_entry:        0.276 us   |              space_map_seg_compare();
      z_wr_iss/7-31860 [004] 162723.348024: funcgraph_entry:        0.876 us   |    zio_taskq_member();
      z_wr_iss/8-31861 [005] 162723.348024: funcgraph_exit:         0.933 us   |            }
      z_wr_iss/8-31861 [005] 162723.348025: funcgraph_exit:         2.520 us   |          }
      z_wr_iss/3-31856 [007] 162723.348025: funcgraph_entry:        0.683 us   |    spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.348025: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/7-31860 [004] 162723.348025: funcgraph_entry:        0.268 us   |    spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.348025: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/8-31861 [005] 162723.348025: funcgraph_entry:        0.271 us   |              space_map_seg_compare();
      z_wr_iss/7-31860 [004] 162723.348026: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.348026: funcgraph_entry:        0.360 us   |      spa_config_enter();
      z_wr_iss/8-31861 [005] 162723.348026: funcgraph_exit:         0.795 us   |            }
      z_wr_iss/3-31856 [007] 162723.348026: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/8-31861 [005] 162723.348026: funcgraph_entry:        0.321 us   |            metaslab_segsize_compare();
      z_wr_iss/7-31860 [004] 162723.348027: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/3-31856 [007] 162723.348027: funcgraph_entry:        0.788 us   |      spa_config_enter();
      z_wr_iss/8-31861 [005] 162723.348027: funcgraph_exit:         2.058 us   |          }
      z_wr_iss/7-31860 [004] 162723.348027: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/8-31861 [005] 162723.348027: funcgraph_exit:         5.354 us   |        }
      z_wr_iss/8-31861 [005] 162723.348028: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/7-31860 [004] 162723.348028: funcgraph_entry:        3.527 us   |          spa_get_random();
      z_wr_iss/8-31861 [005] 162723.348028: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/8-31861 [005] 162723.348028: funcgraph_entry:        0.294 us   |            space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.348028: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/8-31861 [005] 162723.348029: funcgraph_exit:         0.813 us   |          }
      z_wr_iss/8-31861 [005] 162723.348029: funcgraph_exit:         1.481 us   |        }
      z_wr_iss/3-31856 [007] 162723.348029: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/8-31861 [005] 162723.348029: funcgraph_entry:        0.335 us   |        vdev_lookup_top();
      z_wr_iss/8-31861 [005] 162723.348030: funcgraph_entry:        0.327 us   |        vdev_allocatable();
      z_wr_iss/3-31856 [007] 162723.348030: funcgraph_entry:        4.435 us   |          spa_get_random();
      z_wr_iss/8-31861 [005] 162723.348031: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/8-31861 [005] 162723.348031: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/8-31861 [005] 162723.348031: funcgraph_entry:        0.277 us   |            vdev_default_asize();
      z_wr_iss/8-31861 [005] 162723.348032: funcgraph_entry:        0.267 us   |            vdev_default_asize();
      z_wr_iss/7-31860 [004] 162723.348032: funcgraph_entry:        0.311 us   |          vdev_lookup_top();
      z_wr_iss/8-31861 [005] 162723.348032: funcgraph_exit:         1.385 us   |          }
      z_wr_iss/7-31860 [004] 162723.348032: funcgraph_entry:        0.299 us   |          vdev_lookup_top();
      z_wr_iss/8-31861 [005] 162723.348032: funcgraph_exit:         1.867 us   |        }
      z_wr_iss/7-31860 [004] 162723.348033: funcgraph_entry:        0.288 us   |          vdev_lookup_top();
      z_wr_iss/8-31861 [005] 162723.348033: funcgraph_entry:        0.254 us   |        metaslab_activate();
      z_wr_iss/7-31860 [004] 162723.348034: funcgraph_exit:         6.649 us   |        }
      z_wr_iss/8-31861 [005] 162723.348034: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/7-31860 [004] 162723.348034: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/8-31861 [005] 162723.348034: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/7-31860 [004] 162723.348034: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/8-31861 [005] 162723.348034: funcgraph_entry:        0.461 us   |            metaslab_pp_maxsize();
      z_wr_iss/7-31860 [004] 162723.348035: funcgraph_entry:        0.454 us   |            zio_add_child();
      z_wr_iss/8-31861 [005] 162723.348035: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/3-31856 [007] 162723.348035: funcgraph_entry:        0.611 us   |          vdev_lookup_top();
      z_wr_iss/8-31861 [005] 162723.348035: funcgraph_entry:        0.282 us   |              space_map_seg_compare();
      z_wr_iss/7-31860 [004] 162723.348036: funcgraph_exit:         1.521 us   |          }
      z_wr_iss/8-31861 [005] 162723.348036: funcgraph_exit:         0.916 us   |            }
      z_wr_iss/7-31860 [004] 162723.348036: funcgraph_exit:         2.133 us   |        }
      z_wr_iss/8-31861 [005] 162723.348036: funcgraph_exit:         2.286 us   |          }
      z_wr_iss/7-31860 [004] 162723.348036: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/8-31861 [005] 162723.348037: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/7-31860 [004] 162723.348037: funcgraph_entry:        0.287 us   |          spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.348037: funcgraph_entry:        0.759 us   |          vdev_lookup_top();
      z_wr_iss/8-31861 [005] 162723.348037: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/8-31861 [005] 162723.348037: funcgraph_entry:        0.294 us   |              space_map_seg_compare();
      z_wr_iss/7-31860 [004] 162723.348037: funcgraph_entry:        0.281 us   |          spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.348038: funcgraph_exit:         0.871 us   |            }
      z_wr_iss/7-31860 [004] 162723.348038: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/3-31856 [007] 162723.348038: funcgraph_entry:        0.736 us   |          vdev_lookup_top();
      z_wr_iss/8-31861 [005] 162723.348038: funcgraph_exit:         1.591 us   |          }
      z_wr_iss/7-31860 [004] 162723.348038: funcgraph_entry:        0.393 us   |            zio_buf_alloc();
      z_wr_iss/8-31861 [005] 162723.348038: funcgraph_exit:         4.770 us   |        }
      z_wr_iss/8-31861 [005] 162723.348039: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/8-31861 [005] 162723.348039: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/7-31860 [004] 162723.348039: funcgraph_entry:        0.365 us   |            zio_push_transform();
      z_wr_iss/8-31861 [005] 162723.348039: funcgraph_entry:        0.294 us   |            space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.348039: funcgraph_exit:       + 10.261 us  |        }
      z_wr_iss/7-31860 [004] 162723.348040: funcgraph_entry:        0.320 us   |            spa_writeable();
      z_wr_iss/8-31861 [005] 162723.348040: funcgraph_exit:         0.874 us   |          }
      z_wr_iss/3-31856 [007] 162723.348040: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/8-31861 [005] 162723.348040: funcgraph_exit:         1.458 us   |        }
      z_wr_iss/7-31860 [004] 162723.348040: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/8-31861 [005] 162723.348041: funcgraph_entry:        0.529 us   |        spa_config_exit();
      z_wr_iss/3-31856 [007] 162723.348041: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/8-31861 [005] 162723.348041: funcgraph_exit:       + 38.626 us  |      }
      z_wr_iss/8-31861 [005] 162723.348042: funcgraph_exit:       + 39.755 us  |    }
      z_wr_iss/3-31856 [007] 162723.348042: funcgraph_entry:        1.132 us   |            zio_add_child();
      z_wr_iss/8-31861 [005] 162723.348042: funcgraph_entry:        0.261 us   |    spa_get_dsl();
      z_wr_iss/8-31861 [005] 162723.348042: funcgraph_entry:        0.252 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.348043: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/8-31861 [005] 162723.348043: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/7-31860 [004] 162723.348043: funcgraph_entry:        0.365 us   |                vdev_readable();
      z_wr_iss/8-31861 [005] 162723.348043: funcgraph_entry:        0.275 us   |      zio_wait_for_children();
      z_wr_iss/3-31856 [007] 162723.348044: funcgraph_exit:         2.995 us   |          }
      z_wr_iss/8-31861 [005] 162723.348044: funcgraph_entry:        0.275 us   |      zio_wait_for_children();
      z_wr_iss/7-31860 [004] 162723.348044: funcgraph_entry:        0.266 us   |                vdev_readable();
      z_wr_iss/8-31861 [005] 162723.348044: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/3-31856 [007] 162723.348044: funcgraph_exit:         4.362 us   |        }
      z_wr_iss/7-31860 [004] 162723.348045: funcgraph_exit:         2.116 us   |              }
      z_wr_iss/8-31861 [005] 162723.348045: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/3-31856 [007] 162723.348045: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/8-31861 [005] 162723.348045: funcgraph_entry:        0.353 us   |          zrl_add();
      z_wr_iss/3-31856 [007] 162723.348046: funcgraph_entry:        0.671 us   |          spa_get_dsl();
      z_wr_iss/8-31861 [005] 162723.348046: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/8-31861 [005] 162723.348046: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/8-31861 [005] 162723.348046: funcgraph_entry:        0.294 us   |              vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.348047: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/7-31860 [004] 162723.348047: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/8-31861 [005] 162723.348047: funcgraph_exit:         0.828 us   |            }
      z_wr_iss/3-31856 [007] 162723.348047: funcgraph_entry:        0.614 us   |          spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.348047: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/8-31861 [005] 162723.348048: funcgraph_entry:        0.346 us   |              vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.348048: funcgraph_entry:        0.410 us   |                  zio_add_child();
      z_wr_iss/8-31861 [005] 162723.348048: funcgraph_exit:         0.864 us   |            }
      z_wr_iss/3-31856 [007] 162723.348048: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.348048: funcgraph_exit:         1.316 us   |                }
      z_wr_iss/8-31861 [005] 162723.348049: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/7-31860 [004] 162723.348049: funcgraph_exit:         1.905 us   |              }
      z_wr_iss/8-31861 [005] 162723.348049: funcgraph_entry:        0.276 us   |              vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.348049: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/3-31856 [007] 162723.348049: funcgraph_entry:        0.996 us   |            zio_buf_alloc();
      z_wr_iss/7-31860 [004] 162723.348049: funcgraph_entry:        0.250 us   |                spa_get_dsl();
      z_wr_iss/8-31861 [005] 162723.348049: funcgraph_exit:         0.799 us   |            }
      z_wr_iss/8-31861 [005] 162723.348050: funcgraph_exit:         3.744 us   |          }
      z_wr_iss/7-31860 [004] 162723.348050: funcgraph_entry:        0.313 us   |                spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.348050: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/8-31861 [005] 162723.348050: funcgraph_entry:        0.278 us   |            dva_get_dsize_sync();
      z_wr_iss/7-31860 [004] 162723.348050: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/8-31861 [005] 162723.348051: funcgraph_entry:        0.262 us   |            dva_get_dsize_sync();
      z_wr_iss/7-31860 [004] 162723.348051: funcgraph_entry:        0.262 us   |                  spa_writeable();
      z_wr_iss/8-31861 [005] 162723.348051: funcgraph_entry:        0.281 us   |            dva_get_dsize_sync();
      z_wr_iss/3-31856 [007] 162723.348051: funcgraph_entry:        0.968 us   |            zio_push_transform();
      z_wr_iss/7-31860 [004] 162723.348051: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/8-31861 [005] 162723.348052: funcgraph_exit:         1.816 us   |          }
      z_wr_iss/7-31860 [004] 162723.348052: funcgraph_entry:                   |                    vdev_queue_io_to_issue() {
      z_wr_iss/8-31861 [005] 162723.348052: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/7-31860 [004] 162723.348052: funcgraph_entry:        0.676 us   |                      zio_buf_alloc();
      z_wr_iss/8-31861 [005] 162723.348052: funcgraph_entry:        0.282 us   |            spa_version();
      z_wr_iss/8-31861 [005] 162723.348053: funcgraph_exit:         0.936 us   |          }
      z_wr_iss/3-31856 [007] 162723.348053: funcgraph_entry:        0.711 us   |            spa_writeable();
      z_wr_iss/7-31860 [004] 162723.348053: funcgraph_entry:        0.292 us   |                      vdev_queue_offset_compare();
      z_wr_iss/8-31861 [005] 162723.348053: funcgraph_entry:        0.262 us   |          zrl_remove();
      z_wr_iss/8-31861 [005] 162723.348054: funcgraph_exit:         9.012 us   |        }
      z_wr_iss/7-31860 [004] 162723.348054: funcgraph_entry:        0.409 us   |                      zio_buf_free();
      z_wr_iss/8-31861 [005] 162723.348054: funcgraph_entry:        0.323 us   |        arc_cksum_compute();
      z_wr_iss/3-31856 [007] 162723.348054: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/8-31861 [005] 162723.348055: funcgraph_exit:       + 10.365 us  |      }
      z_wr_iss/7-31860 [004] 162723.348055: funcgraph_entry:        0.446 us   |                      vdev_queue_io_remove();
      z_wr_iss/8-31861 [005] 162723.348055: funcgraph_entry:        0.332 us   |      zio_walk_parents();
      z_wr_iss/8-31861 [005] 162723.348056: funcgraph_entry:        0.293 us   |      zio_walk_parents();
      z_wr_iss/7-31860 [004] 162723.348056: funcgraph_exit:         3.826 us   |                    }
      z_wr_iss/7-31860 [004] 162723.348056: funcgraph_exit:         4.781 us   |                  }
      z_wr_iss/7-31860 [004] 162723.348056: funcgraph_entry:        0.412 us   |                  vdev_accessible();
      z_wr_iss/8-31861 [005] 162723.348056: funcgraph_exit:       + 13.435 us  |    }
      z_wr_iss/8-31861 [005] 162723.348057: funcgraph_entry:        0.279 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.348057: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/7-31860 [004] 162723.348057: funcgraph_entry:                   |                  vdev_disk_io_start() {
      z_wr_iss/8-31861 [005] 162723.348057: funcgraph_entry:        0.913 us   |    zio_taskq_member();
      z_wr_iss/7-31860 [004] 162723.348058: funcgraph_entry:                   |                    __vdev_disk_physio() {
      z_wr_iss/3-31856 [007] 162723.348058: funcgraph_entry:        0.756 us   |                vdev_readable();
      z_wr_iss/8-31861 [005] 162723.348058: funcgraph_entry:        0.262 us   |    spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.348059: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/8-31861 [005] 162723.348059: funcgraph_entry:        0.394 us   |      spa_config_enter();
      z_wr_iss/3-31856 [007] 162723.348060: funcgraph_entry:        0.639 us   |                vdev_readable();
      z_wr_iss/8-31861 [005] 162723.348060: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/8-31861 [005] 162723.348060: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/8-31861 [005] 162723.348061: funcgraph_entry:        2.646 us   |          spa_get_random();
      z_wr_iss/3-31856 [007] 162723.348061: funcgraph_exit:         4.338 us   |              }
      z_wr_iss/3-31856 [007] 162723.348064: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/8-31861 [005] 162723.348064: funcgraph_entry:        0.283 us   |          vdev_lookup_top();
      z_wr_iss/8-31861 [005] 162723.348064: funcgraph_entry:        0.259 us   |          vdev_lookup_top();
      z_wr_iss/3-31856 [007] 162723.348064: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/8-31861 [005] 162723.348065: funcgraph_entry:        0.264 us   |          vdev_lookup_top();
      z_wr_iss/3-31856 [007] 162723.348065: funcgraph_entry:        0.951 us   |                  zio_add_child();
      z_wr_iss/8-31861 [005] 162723.348065: funcgraph_exit:         5.212 us   |        }
      z_wr_iss/8-31861 [005] 162723.348066: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/8-31861 [005] 162723.348066: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/3-31856 [007] 162723.348067: funcgraph_exit:         2.446 us   |                }
      z_wr_iss/8-31861 [005] 162723.348067: funcgraph_entry:        0.733 us   |            zio_add_child();
      z_wr_iss/3-31856 [007] 162723.348067: funcgraph_exit:         3.678 us   |              }
      z_wr_iss/3-31856 [007] 162723.348068: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/8-31861 [005] 162723.348068: funcgraph_exit:         1.933 us   |          }
      z_wr_iss/8-31861 [005] 162723.348068: funcgraph_exit:         2.614 us   |        }
      z_wr_iss/7-31860 [004] 162723.348069: funcgraph_entry:        0.346 us   |                      vdev_disk_dio_put();
      z_wr_iss/3-31856 [007] 162723.348069: funcgraph_entry:        0.597 us   |                spa_get_dsl();
      z_wr_iss/8-31861 [005] 162723.348069: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/8-31861 [005] 162723.348069: funcgraph_entry:        0.264 us   |          spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.348069: funcgraph_exit:       + 11.768 us  |                    }
      z_wr_iss/7-31860 [004] 162723.348070: funcgraph_exit:       + 12.384 us  |                  }
      z_wr_iss/8-31861 [005] 162723.348070: funcgraph_entry:        0.295 us   |          spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.348070: funcgraph_exit:       + 19.371 us  |                }
      z_wr_iss/3-31856 [007] 162723.348070: funcgraph_entry:        0.610 us   |                spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.348070: funcgraph_exit:       + 21.110 us  |              }
      z_wr_iss/8-31861 [005] 162723.348070: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/8-31861 [005] 162723.348071: funcgraph_entry:        0.570 us   |            zio_buf_alloc();
      z_wr_iss/7-31860 [004] 162723.348071: funcgraph_exit:       + 30.632 us  |            }
      z_wr_iss/3-31856 [007] 162723.348071: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.348071: funcgraph_exit:       + 33.458 us  |          }
      z_wr_iss/7-31860 [004] 162723.348072: funcgraph_entry:        0.264 us   |          spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.348072: funcgraph_entry:        0.725 us   |                  spa_writeable();
      z_wr_iss/8-31861 [005] 162723.348072: funcgraph_entry:        0.358 us   |            zio_push_transform();
      z_wr_iss/7-31860 [004] 162723.348072: funcgraph_entry:        0.259 us   |          spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.348073: funcgraph_entry:        0.280 us   |            spa_writeable();
      z_wr_iss/7-31860 [004] 162723.348073: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/7-31860 [004] 162723.348073: funcgraph_entry:        0.282 us   |            zio_wait_for_children();
      z_wr_iss/8-31861 [005] 162723.348073: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/3-31856 [007] 162723.348073: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/7-31860 [004] 162723.348073: funcgraph_exit:         0.795 us   |          }
      z_wr_iss/7-31860 [004] 162723.348074: funcgraph_exit:       + 37.383 us  |        }
      z_wr_iss/7-31860 [004] 162723.348074: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/7-31860 [004] 162723.348074: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/8-31861 [005] 162723.348075: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/3-31856 [007] 162723.348075: funcgraph_entry:        0.998 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/7-31860 [004] 162723.348075: funcgraph_entry:        0.565 us   |            zio_add_child();
      z_wr_iss/8-31861 [005] 162723.348075: funcgraph_entry:        0.315 us   |                vdev_readable();
      z_wr_iss/8-31861 [005] 162723.348076: funcgraph_entry:        0.259 us   |                vdev_readable();
      z_wr_iss/7-31860 [004] 162723.348076: funcgraph_exit:         1.411 us   |          }
      z_wr_iss/7-31860 [004] 162723.348076: funcgraph_exit:         1.910 us   |        }
      z_wr_iss/3-31856 [007] 162723.348076: funcgraph_exit:         2.982 us   |                  }
      z_wr_iss/7-31860 [004] 162723.348076: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/8-31861 [005] 162723.348076: funcgraph_exit:         1.780 us   |              }
      z_wr_iss/7-31860 [004] 162723.348076: funcgraph_entry:        0.257 us   |          spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.348077: funcgraph_exit:         5.564 us   |                }
      z_wr_iss/7-31860 [004] 162723.348077: funcgraph_entry:        0.255 us   |          spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.348077: funcgraph_exit:         9.229 us   |              }
      z_wr_iss/7-31860 [004] 162723.348078: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.348078: funcgraph_entry:        0.318 us   |            zio_buf_alloc();
      z_wr_iss/3-31856 [007] 162723.348078: funcgraph_exit:       + 24.048 us  |            }
      z_wr_iss/8-31861 [005] 162723.348079: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/7-31860 [004] 162723.348079: funcgraph_entry:        0.393 us   |            zio_push_transform();
      z_wr_iss/3-31856 [007] 162723.348079: funcgraph_exit:       + 30.822 us  |          }
      z_wr_iss/8-31861 [005] 162723.348079: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/7-31860 [004] 162723.348080: funcgraph_entry:        0.258 us   |            spa_writeable();
      z_wr_iss/8-31861 [005] 162723.348080: funcgraph_entry:        0.414 us   |                  zio_add_child();
      z_wr_iss/7-31860 [004] 162723.348080: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/8-31861 [005] 162723.348080: funcgraph_exit:         1.194 us   |                }
      z_wr_iss/8-31861 [005] 162723.348081: funcgraph_exit:         1.745 us   |              }
      z_wr_iss/8-31861 [005] 162723.348081: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/7-31860 [004] 162723.348081: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/8-31861 [005] 162723.348081: funcgraph_entry:        0.429 us   |                spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.348081: funcgraph_entry:        0.265 us   |                vdev_readable();
      z_wr_iss/8-31861 [005] 162723.348082: funcgraph_entry:        0.275 us   |                spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.348082: funcgraph_entry:        0.261 us   |                vdev_readable();
      z_wr_iss/4-31857 [003] 162723.348082: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/8-31861 [005] 162723.348082: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.348083: funcgraph_exit:         1.608 us   |              }
      z_wr_iss/8-31861 [005] 162723.348083: funcgraph_entry:        0.281 us   |                  spa_writeable();
      z_wr_iss/4-31857 [003] 162723.348083: funcgraph_entry:        0.490 us   |    spa_get_dsl();
      z_wr_iss/8-31861 [005] 162723.348083: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/3-31856 [007] 162723.348084: funcgraph_entry:        0.607 us   |          spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.348084: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/8-31861 [005] 162723.348084: funcgraph_entry:        0.367 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.348084: funcgraph_entry:        0.469 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.348084: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/7-31860 [004] 162723.348084: funcgraph_entry:        0.475 us   |                  zio_add_child();
      z_wr_iss/8-31861 [005] 162723.348085: funcgraph_entry:        0.454 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/4-31857 [003] 162723.348085: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/3-31856 [007] 162723.348085: funcgraph_entry:        0.669 us   |          spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.348085: funcgraph_exit:         1.179 us   |                }
      z_wr_iss/4-31857 [003] 162723.348085: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/7-31860 [004] 162723.348085: funcgraph_exit:         1.665 us   |              }
      z_wr_iss/8-31861 [005] 162723.348086: funcgraph_exit:         2.277 us   |                  }
      z_wr_iss/7-31860 [004] 162723.348086: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/7-31860 [004] 162723.348086: funcgraph_entry:        0.261 us   |                spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.348086: funcgraph_entry:        2.136 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/8-31861 [005] 162723.348086: funcgraph_exit:         3.439 us   |                }
      z_wr_iss/8-31861 [005] 162723.348086: funcgraph_exit:         5.250 us   |              }
      z_wr_iss/3-31856 [007] 162723.348086: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/7-31860 [004] 162723.348086: funcgraph_entry:        0.243 us   |                spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.348087: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/3-31856 [007] 162723.348087: funcgraph_entry:        2.831 us   |            zio_wait_for_children();
      z_wr_iss/8-31861 [005] 162723.348087: funcgraph_exit:       + 13.931 us  |            }
      z_wr_iss/7-31860 [004] 162723.348087: funcgraph_entry:        0.228 us   |                  spa_writeable();
      z_wr_iss/8-31861 [005] 162723.348087: funcgraph_exit:       + 17.165 us  |          }
      z_wr_iss/8-31861 [005] 162723.348088: funcgraph_entry:        0.285 us   |          spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.348088: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/7-31860 [004] 162723.348088: funcgraph_entry:        0.323 us   |                    vdev_queue_offset_compare();
      z_wr_iss/8-31861 [005] 162723.348088: funcgraph_entry:        0.285 us   |          spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.348088: funcgraph_exit:         2.990 us   |      }
      z_wr_iss/7-31860 [004] 162723.348089: funcgraph_entry:        0.320 us   |                    vdev_queue_offset_compare();
      z_wr_iss/8-31861 [005] 162723.348089: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/4-31857 [003] 162723.348089: funcgraph_exit:         3.845 us   |    }
      z_wr_iss/8-31861 [005] 162723.348089: funcgraph_entry:        0.289 us   |            zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.348089: funcgraph_exit:         7.254 us   |  }
      z_wr_iss/7-31860 [004] 162723.348089: funcgraph_entry:        0.450 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/8-31861 [005] 162723.348089: funcgraph_exit:         0.824 us   |          }
      z_wr_iss/8-31861 [005] 162723.348090: funcgraph_exit:       + 21.031 us  |        }
      z_wr_iss/8-31861 [005] 162723.348090: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/7-31860 [004] 162723.348090: funcgraph_exit:         2.609 us   |                  }
      z_wr_iss/8-31861 [005] 162723.348090: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/7-31860 [004] 162723.348090: funcgraph_exit:         3.586 us   |                }
      z_wr_iss/2-31855 [002] 162723.348091: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/7-31860 [004] 162723.348091: funcgraph_exit:         5.003 us   |              }
      z_wr_iss/8-31861 [005] 162723.348091: funcgraph_entry:        0.488 us   |            zio_add_child();
      z_wr_iss/2-31855 [002] 162723.348091: funcgraph_entry:        0.362 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.348092: funcgraph_exit:       + 11.339 us  |            }
      z_wr_iss/8-31861 [005] 162723.348092: funcgraph_exit:         1.332 us   |          }
      z_wr_iss/7-31860 [004] 162723.348092: funcgraph_exit:       + 14.074 us  |          }
      z_wr_iss/7-31860 [004] 162723.348092: funcgraph_entry:        0.230 us   |          spa_get_dsl();
      z_wr_iss/8-31861 [005] 162723.348092: funcgraph_exit:         1.925 us   |        }
      z_wr_iss/2-31855 [002] 162723.348092: funcgraph_entry:        0.247 us   |    spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.348092: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/7-31860 [004] 162723.348092: funcgraph_entry:        0.252 us   |          spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.348092: funcgraph_entry:        0.276 us   |          spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348093: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/7-31860 [004] 162723.348093: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/8-31861 [005] 162723.348093: funcgraph_entry:        0.266 us   |          spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.348093: funcgraph_entry:        0.235 us   |            zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.348093: funcgraph_entry:        0.391 us   |      zio_wait_for_children();
      z_wr_iss/8-31861 [005] 162723.348094: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.348094: funcgraph_exit:         0.668 us   |          }
      z_wr_iss/7-31860 [004] 162723.348094: funcgraph_exit:       + 17.694 us  |        }
      z_wr_iss/8-31861 [005] 162723.348094: funcgraph_entry:        0.389 us   |            zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.348094: funcgraph_entry:        0.346 us   |      zio_wait_for_children();
      z_wr_iss/7-31860 [004] 162723.348094: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/7-31860 [004] 162723.348094: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/2-31855 [002] 162723.348095: funcgraph_entry:        0.611 us   |      zio_buf_alloc();
      z_wr_iss/7-31860 [004] 162723.348095: funcgraph_entry:        0.445 us   |            zio_add_child();
      z_wr_iss/8-31861 [005] 162723.348095: funcgraph_entry:        0.355 us   |            zio_push_transform();
      z_wr_iss/2-31855 [002] 162723.348096: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/7-31860 [004] 162723.348096: funcgraph_exit:         1.289 us   |          }
      z_wr_iss/8-31861 [005] 162723.348096: funcgraph_entry:        0.271 us   |            spa_writeable();
      z_wr_iss/7-31860 [004] 162723.348096: funcgraph_exit:         1.787 us   |        }
      z_wr_iss/2-31855 [002] 162723.348096: funcgraph_entry:        8.620 us   |        lzjb_compress();
      z_wr_iss/7-31860 [004] 162723.348096: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/8-31861 [005] 162723.348096: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/7-31860 [004] 162723.348096: funcgraph_entry:        0.224 us   |          spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.348097: funcgraph_entry:        0.247 us   |          spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.348097: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/7-31860 [004] 162723.348097: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.348098: funcgraph_entry:        0.347 us   |            zio_buf_alloc();
      z_wr_iss/8-31861 [005] 162723.348098: funcgraph_entry:        0.289 us   |                vdev_readable();
      z_wr_iss/8-31861 [005] 162723.348098: funcgraph_entry:        0.293 us   |                vdev_readable();
      z_wr_iss/7-31860 [004] 162723.348099: funcgraph_entry:        0.341 us   |            zio_push_transform();
      z_wr_iss/8-31861 [005] 162723.348099: funcgraph_exit:         1.724 us   |              }
      z_wr_iss/3-31856 [007] 162723.348099: funcgraph_exit:         4.460 us   |          }
      z_wr_iss/7-31860 [004] 162723.348099: funcgraph_entry:        0.233 us   |            spa_writeable();
      z_wr_iss/3-31856 [007] 162723.348099: funcgraph_exit:       + 46.095 us  |        }
      z_wr_iss/7-31860 [004] 162723.348100: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/8-31861 [005] 162723.348100: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/3-31856 [007] 162723.348100: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/8-31861 [005] 162723.348100: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/7-31860 [004] 162723.348101: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/3-31856 [007] 162723.348101: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/8-31861 [005] 162723.348101: funcgraph_entry:        0.577 us   |                  zio_add_child();
      z_wr_iss/7-31860 [004] 162723.348101: funcgraph_entry:        0.246 us   |                vdev_readable();
      z_wr_iss/7-31860 [004] 162723.348102: funcgraph_entry:        0.238 us   |                vdev_readable();
      z_wr_iss/8-31861 [005] 162723.348102: funcgraph_exit:         1.537 us   |                }
      z_wr_iss/3-31856 [007] 162723.348102: funcgraph_entry:        0.987 us   |            zio_add_child();
      z_wr_iss/8-31861 [005] 162723.348102: funcgraph_exit:         2.108 us   |              }
      z_wr_iss/7-31860 [004] 162723.348102: funcgraph_exit:         1.465 us   |              }
      z_wr_iss/8-31861 [005] 162723.348102: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/8-31861 [005] 162723.348103: funcgraph_entry:        0.259 us   |                spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.348103: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/8-31861 [005] 162723.348103: funcgraph_entry:        0.259 us   |                spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.348103: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/3-31856 [007] 162723.348103: funcgraph_exit:         2.667 us   |          }
      z_wr_iss/8-31861 [005] 162723.348104: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/8-31861 [005] 162723.348104: funcgraph_entry:        0.248 us   |                  spa_writeable();
      z_wr_iss/7-31860 [004] 162723.348104: funcgraph_entry:        0.412 us   |                  zio_add_child();
      z_wr_iss/3-31856 [007] 162723.348104: funcgraph_exit:         3.998 us   |        }
      z_wr_iss/8-31861 [005] 162723.348104: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/3-31856 [007] 162723.348105: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/7-31860 [004] 162723.348105: funcgraph_exit:         1.410 us   |                }
      z_wr_iss/2-31855 [002] 162723.348105: funcgraph_exit:         9.335 us   |      }
      z_wr_iss/8-31861 [005] 162723.348105: funcgraph_entry:        0.281 us   |                    vdev_queue_offset_compare();
      z_wr_iss/7-31860 [004] 162723.348105: funcgraph_exit:         1.924 us   |              }
      z_wr_iss/2-31855 [002] 162723.348105: funcgraph_entry:        0.571 us   |      zio_push_transform();
      z_wr_iss/7-31860 [004] 162723.348105: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/7-31860 [004] 162723.348105: funcgraph_entry:        0.235 us   |                spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.348105: funcgraph_entry:        0.725 us   |          spa_get_dsl();
      z_wr_iss/8-31861 [005] 162723.348105: funcgraph_entry:        0.327 us   |                    vdev_queue_offset_compare();
      z_wr_iss/7-31860 [004] 162723.348106: funcgraph_entry:        0.242 us   |                spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.348106: funcgraph_entry:        0.385 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/2-31855 [002] 162723.348106: funcgraph_exit:       + 13.560 us  |    }
      z_wr_iss/7-31860 [004] 162723.348107: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.348107: funcgraph_entry:        0.229 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.348107: funcgraph_entry:        0.707 us   |          spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.348107: funcgraph_entry:        0.238 us   |                  spa_writeable();
      z_wr_iss/8-31861 [005] 162723.348107: funcgraph_exit:         2.635 us   |                  }
      z_wr_iss/2-31855 [002] 162723.348107: funcgraph_entry:        0.238 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.348107: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/8-31861 [005] 162723.348107: funcgraph_exit:         3.659 us   |                }
      z_wr_iss/8-31861 [005] 162723.348108: funcgraph_exit:         5.251 us   |              }
      z_wr_iss/7-31860 [004] 162723.348108: funcgraph_entry:        0.224 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.348108: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/2-31855 [002] 162723.348108: funcgraph_entry:        0.499 us   |      zio_checksum_compute();
      z_wr_iss/3-31856 [007] 162723.348108: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.348108: funcgraph_entry:        0.222 us   |                    vdev_queue_offset_compare();
      z_wr_iss/8-31861 [005] 162723.348108: funcgraph_exit:       + 12.243 us  |            }
      z_wr_iss/7-31860 [004] 162723.348109: funcgraph_entry:        0.334 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.348109: funcgraph_exit:         0.980 us   |    }
      z_wr_iss/3-31856 [007] 162723.348109: funcgraph_entry:        1.029 us   |            zio_buf_alloc();
      z_wr_iss/8-31861 [005] 162723.348109: funcgraph_exit:       + 15.204 us  |          }
      z_wr_iss/2-31855 [002] 162723.348109: funcgraph_entry:        0.219 us   |    spa_get_dsl();
      z_wr_iss/8-31861 [005] 162723.348109: funcgraph_entry:        0.257 us   |          spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348109: funcgraph_entry:        1.267 us   |    zio_taskq_member();
      z_wr_iss/8-31861 [005] 162723.348110: funcgraph_entry:        0.330 us   |          spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.348110: funcgraph_entry:        0.377 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/8-31861 [005] 162723.348110: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/7-31860 [004] 162723.348110: funcgraph_exit:         2.894 us   |                  }
      z_wr_iss/8-31861 [005] 162723.348110: funcgraph_entry:        0.339 us   |            zio_wait_for_children();
      z_wr_iss/7-31860 [004] 162723.348110: funcgraph_exit:         3.899 us   |                }
      z_wr_iss/7-31860 [004] 162723.348111: funcgraph_exit:         5.465 us   |              }
      z_wr_iss/3-31856 [007] 162723.348111: funcgraph_entry:        0.857 us   |            zio_push_transform();
      z_wr_iss/2-31855 [002] 162723.348111: funcgraph_entry:        0.209 us   |    spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.348111: funcgraph_exit:         0.899 us   |          }
      z_wr_iss/8-31861 [005] 162723.348111: funcgraph_exit:       + 19.229 us  |        }
      z_wr_iss/2-31855 [002] 162723.348111: funcgraph_entry:                   |    zio_dva_allocate() {
      z_wr_iss/7-31860 [004] 162723.348112: funcgraph_exit:       + 11.770 us  |            }
      z_wr_iss/8-31861 [005] 162723.348112: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/7-31860 [004] 162723.348112: funcgraph_exit:       + 14.438 us  |          }
      z_wr_iss/2-31855 [002] 162723.348112: funcgraph_entry:        0.214 us   |      spa_normal_class();
      z_wr_iss/7-31860 [004] 162723.348112: funcgraph_entry:        0.228 us   |          spa_get_dsl();
      z_wr_iss/8-31861 [005] 162723.348112: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/3-31856 [007] 162723.348112: funcgraph_entry:        0.728 us   |            spa_writeable();
      z_wr_iss/2-31855 [002] 162723.348112: funcgraph_entry:                   |      metaslab_alloc() {
      z_wr_iss/7-31860 [004] 162723.348112: funcgraph_entry:        0.244 us   |          spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.348113: funcgraph_entry:        0.466 us   |            zio_add_child();
      z_wr_iss/2-31855 [002] 162723.348113: funcgraph_entry:        0.492 us   |        spa_config_enter();
      z_wr_iss/7-31860 [004] 162723.348113: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/7-31860 [004] 162723.348113: funcgraph_entry:        0.236 us   |            zio_wait_for_children();
      z_wr_iss/8-31861 [005] 162723.348113: funcgraph_exit:         1.311 us   |          }
      z_wr_iss/7-31860 [004] 162723.348114: funcgraph_exit:         0.678 us   |          }
      z_wr_iss/8-31861 [005] 162723.348114: funcgraph_exit:         1.887 us   |        }
      z_wr_iss/3-31856 [007] 162723.348114: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/2-31855 [002] 162723.348114: funcgraph_entry:        0.337 us   |        vdev_allocatable();
      z_wr_iss/7-31860 [004] 162723.348114: funcgraph_exit:       + 17.685 us  |        }
      z_wr_iss/8-31861 [005] 162723.348114: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/7-31860 [004] 162723.348114: funcgraph_exit:       + 87.369 us  |      }
      z_wr_iss/8-31861 [005] 162723.348114: funcgraph_entry:        0.282 us   |          spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.348114: funcgraph_exit:       + 88.623 us  |    }
      z_wr_iss/2-31855 [002] 162723.348114: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/7-31860 [004] 162723.348114: funcgraph_entry:        0.228 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348115: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/8-31861 [005] 162723.348115: funcgraph_entry:        0.341 us   |          spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.348115: funcgraph_entry:        0.238 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348115: funcgraph_entry:        0.280 us   |            vdev_default_asize();
      z_wr_iss/3-31856 [007] 162723.348115: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/7-31860 [004] 162723.348115: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/8-31861 [005] 162723.348115: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.348116: funcgraph_entry:        0.238 us   |            vdev_default_asize();
      z_wr_iss/7-31860 [004] 162723.348116: funcgraph_entry:        0.239 us   |      zio_wait_for_children();
      z_wr_iss/8-31861 [005] 162723.348116: funcgraph_entry:        0.408 us   |            zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.348116: funcgraph_exit:         1.383 us   |          }
      z_wr_iss/7-31860 [004] 162723.348116: funcgraph_exit:         0.688 us   |    }
      z_wr_iss/2-31855 [002] 162723.348116: funcgraph_exit:         1.878 us   |        }
      z_wr_iss/3-31856 [007] 162723.348116: funcgraph_entry:        0.601 us   |                vdev_readable();
      z_wr_iss/7-31860 [004] 162723.348116: funcgraph_exit:       ! 186.921 us |  }
      z_wr_iss/8-31861 [005] 162723.348117: funcgraph_entry:        0.340 us   |            zio_push_transform();
      z_wr_iss/2-31855 [002] 162723.348117: funcgraph_entry:        0.255 us   |        metaslab_activate();
      z_wr_iss/8-31861 [005] 162723.348117: funcgraph_entry:        0.254 us   |            spa_writeable();
      z_wr_iss/2-31855 [002] 162723.348118: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/3-31856 [007] 162723.348118: funcgraph_entry:        0.659 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.348118: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/8-31861 [005] 162723.348118: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/2-31855 [002] 162723.348118: funcgraph_entry:        0.375 us   |            metaslab_pp_maxsize();
      z_wr_iss/2-31855 [002] 162723.348119: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/8-31861 [005] 162723.348119: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/3-31856 [007] 162723.348119: funcgraph_exit:         3.645 us   |              }
      z_wr_iss/2-31855 [002] 162723.348119: funcgraph_entry:        0.318 us   |              space_map_seg_compare();
      z_wr_iss/8-31861 [005] 162723.348119: funcgraph_entry:        0.339 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.348120: funcgraph_exit:         0.876 us   |            }
      z_wr_iss/2-31855 [002] 162723.348120: funcgraph_exit:         2.084 us   |          }
      z_wr_iss/8-31861 [005] 162723.348120: funcgraph_entry:        0.285 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.348120: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/2-31855 [002] 162723.348120: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/8-31861 [005] 162723.348121: funcgraph_exit:         1.761 us   |              }
      z_wr_iss/2-31855 [002] 162723.348121: funcgraph_entry:        0.247 us   |              space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.348121: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/2-31855 [002] 162723.348121: funcgraph_exit:         0.860 us   |            }
      z_wr_iss/3-31856 [007] 162723.348122: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/2-31855 [002] 162723.348122: funcgraph_entry:        0.341 us   |            metaslab_segsize_compare();
      z_wr_iss/8-31861 [005] 162723.348122: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/8-31861 [005] 162723.348122: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/2-31855 [002] 162723.348123: funcgraph_exit:         2.302 us   |          }
      z_wr_iss/8-31861 [005] 162723.348123: funcgraph_entry:        0.435 us   |                  zio_add_child();
      z_wr_iss/3-31856 [007] 162723.348123: funcgraph_entry:        0.799 us   |                  zio_add_child();
      z_wr_iss/2-31855 [002] 162723.348123: funcgraph_exit:         5.220 us   |        }
      z_wr_iss/2-31855 [002] 162723.348123: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/8-31861 [005] 162723.348123: funcgraph_exit:         1.172 us   |                }
      z_wr_iss/2-31855 [002] 162723.348123: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/8-31861 [005] 162723.348124: funcgraph_exit:         1.749 us   |              }
      z_wr_iss/2-31855 [002] 162723.348124: funcgraph_entry:        0.295 us   |            space_map_seg_compare();
      z_wr_iss/8-31861 [005] 162723.348124: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/3-31856 [007] 162723.348124: funcgraph_exit:         2.453 us   |                }
      z_wr_iss/8-31861 [005] 162723.348124: funcgraph_entry:        0.339 us   |                spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348124: funcgraph_exit:         0.775 us   |          }
      z_wr_iss/2-31855 [002] 162723.348125: funcgraph_exit:         1.467 us   |        }
      z_wr_iss/8-31861 [005] 162723.348125: funcgraph_entry:        0.273 us   |                spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.348125: funcgraph_exit:         3.657 us   |              }
      z_wr_iss/2-31855 [002] 162723.348125: funcgraph_entry:        0.284 us   |        vdev_lookup_top();
      z_wr_iss/8-31861 [005] 162723.348125: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/3-31856 [007] 162723.348125: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/8-31861 [005] 162723.348126: funcgraph_entry:        0.256 us   |                  spa_writeable();
      z_wr_iss/2-31855 [002] 162723.348126: funcgraph_entry:        0.220 us   |        vdev_allocatable();
      z_wr_iss/3-31856 [007] 162723.348126: funcgraph_entry:        0.630 us   |                spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348126: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/8-31861 [005] 162723.348126: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/2-31855 [002] 162723.348126: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/8-31861 [005] 162723.348126: funcgraph_entry:        0.248 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.348126: funcgraph_entry:        0.246 us   |            vdev_default_asize();
      z_wr_iss/8-31861 [005] 162723.348127: funcgraph_entry:        0.294 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.348127: funcgraph_entry:        0.245 us   |            vdev_default_asize();
      z_wr_iss/0-31853 [006] 162723.348127: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/3-31856 [007] 162723.348127: funcgraph_entry:        0.598 us   |                spa_is_initializing();
      z_wr_iss/8-31861 [005] 162723.348127: funcgraph_entry:        0.337 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.348127: funcgraph_exit:         1.246 us   |          }
      z_wr_iss/2-31855 [002] 162723.348128: funcgraph_exit:         1.669 us   |        }
      z_wr_iss/0-31853 [006] 162723.348128: funcgraph_entry:        0.318 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348128: funcgraph_entry:        0.238 us   |        metaslab_activate();
      z_wr_iss/8-31861 [005] 162723.348128: funcgraph_entry:        0.431 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/0-31853 [006] 162723.348129: funcgraph_entry:        0.310 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.348129: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.348129: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/2-31855 [002] 162723.348129: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/8-31861 [005] 162723.348129: funcgraph_exit:         3.129 us   |                  }
      z_wr_iss/2-31855 [002] 162723.348129: funcgraph_entry:        0.367 us   |            metaslab_pp_maxsize();
      z_wr_iss/0-31853 [006] 162723.348129: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/3-31856 [007] 162723.348129: funcgraph_entry:        0.896 us   |                  spa_writeable();
      z_wr_iss/8-31861 [005] 162723.348129: funcgraph_exit:         4.224 us   |                }
      z_wr_iss/8-31861 [005] 162723.348130: funcgraph_exit:         5.875 us   |              }
      z_wr_iss/2-31855 [002] 162723.348130: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/0-31853 [006] 162723.348130: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/2-31855 [002] 162723.348130: funcgraph_entry:        0.219 us   |              space_map_seg_compare();
      z_wr_iss/8-31861 [005] 162723.348130: funcgraph_exit:       + 12.397 us  |            }
      z_wr_iss/0-31853 [006] 162723.348130: funcgraph_entry:        3.216 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/2-31855 [002] 162723.348131: funcgraph_exit:         0.740 us   |            }
      z_wr_iss/8-31861 [005] 162723.348131: funcgraph_exit:       + 15.278 us  |          }
      z_wr_iss/3-31856 [007] 162723.348131: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/2-31855 [002] 162723.348131: funcgraph_exit:         1.825 us   |          }
      z_wr_iss/8-31861 [005] 162723.348131: funcgraph_entry:        0.252 us   |          spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348131: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/2-31855 [002] 162723.348131: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/8-31861 [005] 162723.348132: funcgraph_entry:        0.250 us   |          spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348132: funcgraph_entry:        0.245 us   |              space_map_seg_compare();
      z_wr_iss/8-31861 [005] 162723.348132: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/8-31861 [005] 162723.348132: funcgraph_entry:        0.343 us   |            zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.348132: funcgraph_exit:         0.700 us   |            }
      z_wr_iss/2-31855 [002] 162723.348133: funcgraph_entry:        0.269 us   |            metaslab_segsize_compare();
      z_wr_iss/8-31861 [005] 162723.348133: funcgraph_exit:         0.864 us   |          }
      z_wr_iss/8-31861 [005] 162723.348133: funcgraph_exit:       + 19.262 us  |        }
      z_wr_iss/2-31855 [002] 162723.348133: funcgraph_exit:         2.177 us   |          }
      z_wr_iss/8-31861 [005] 162723.348133: funcgraph_exit:       + 73.429 us  |      }
      z_wr_iss/2-31855 [002] 162723.348134: funcgraph_exit:         4.707 us   |        }
      z_wr_iss/8-31861 [005] 162723.348134: funcgraph_exit:       + 74.784 us  |    }
      z_wr_iss/2-31855 [002] 162723.348134: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/8-31861 [005] 162723.348134: funcgraph_entry:        0.326 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348134: funcgraph_exit:         4.376 us   |      }
      z_wr_iss/2-31855 [002] 162723.348134: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/0-31853 [006] 162723.348134: funcgraph_exit:         4.967 us   |    }
      z_wr_iss/2-31855 [002] 162723.348134: funcgraph_entry:        0.292 us   |            space_map_seg_compare();
      z_wr_iss/8-31861 [005] 162723.348135: funcgraph_entry:        0.256 us   |    spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.348135: funcgraph_exit:         7.607 us   |  }
      z_wr_iss/2-31855 [002] 162723.348135: funcgraph_exit:         0.772 us   |          }
      z_wr_iss/8-31861 [005] 162723.348135: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/2-31855 [002] 162723.348135: funcgraph_exit:         1.400 us   |        }
      z_wr_iss/8-31861 [005] 162723.348135: funcgraph_entry:        0.276 us   |      zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.348135: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/2-31855 [002] 162723.348136: funcgraph_entry:        0.244 us   |        vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.348136: funcgraph_entry:        0.322 us   |    spa_get_dsl();
      z_wr_iss/8-31861 [005] 162723.348136: funcgraph_exit:         0.766 us   |    }
      z_wr_iss/2-31855 [002] 162723.348136: funcgraph_entry:        0.232 us   |        vdev_allocatable();
      z_wr_iss/8-31861 [005] 162723.348136: funcgraph_exit:       ! 200.767 us |  }
      z_wr_iss/3-31856 [007] 162723.348136: funcgraph_entry:        0.765 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.348137: funcgraph_entry:        0.389 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348137: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/2-31855 [002] 162723.348137: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/2-31855 [002] 162723.348137: funcgraph_entry:        0.249 us   |            vdev_default_asize();
      z_wr_iss/0-31853 [006] 162723.348137: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/2-31855 [002] 162723.348138: funcgraph_entry:        0.252 us   |            vdev_default_asize();
      z_wr_iss/3-31856 [007] 162723.348138: funcgraph_entry:        0.792 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.348138: funcgraph_entry:        0.433 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.348138: funcgraph_exit:         1.298 us   |          }
      z_wr_iss/2-31855 [002] 162723.348138: funcgraph_exit:         1.745 us   |        }
      z_wr_iss/0-31853 [006] 162723.348139: funcgraph_entry:        0.367 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.348139: funcgraph_entry:        0.247 us   |        metaslab_activate();
      z_wr_iss/3-31856 [007] 162723.348139: funcgraph_entry:        0.865 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.348139: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.348139: funcgraph_entry:        0.570 us   |      zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.348140: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/2-31855 [002] 162723.348140: funcgraph_entry:        0.373 us   |            metaslab_pp_maxsize();
      z_wr_iss/0-31853 [006] 162723.348140: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/2-31855 [002] 162723.348141: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/2-31855 [002] 162723.348141: funcgraph_entry:        0.235 us   |              space_map_seg_compare();
      z_wr_iss/0-31853 [006] 162723.348141: funcgraph_entry:      + 12.250 us  |        lzjb_compress();
      z_wr_iss/3-31856 [007] 162723.348141: funcgraph_entry:        1.012 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/2-31855 [002] 162723.348141: funcgraph_exit:         0.767 us   |            }
      z_wr_iss/2-31855 [002] 162723.348142: funcgraph_exit:         1.923 us   |          }
      z_wr_iss/2-31855 [002] 162723.348142: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/2-31855 [002] 162723.348142: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/2-31855 [002] 162723.348142: funcgraph_entry:        0.262 us   |              space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.348143: funcgraph_exit:       + 11.860 us  |                  }
      z_wr_iss/2-31855 [002] 162723.348143: funcgraph_exit:         0.739 us   |            }
      z_wr_iss/2-31855 [002] 162723.348143: funcgraph_exit:         1.363 us   |          }
      z_wr_iss/3-31856 [007] 162723.348143: funcgraph_exit:       + 14.730 us  |                }
      z_wr_iss/2-31855 [002] 162723.348143: funcgraph_exit:         4.055 us   |        }
      z_wr_iss/2-31855 [002] 162723.348144: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/3-31856 [007] 162723.348144: funcgraph_exit:       + 18.507 us  |              }
      z_wr_iss/2-31855 [002] 162723.348144: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/2-31855 [002] 162723.348144: funcgraph_entry:        0.285 us   |            space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.348145: funcgraph_exit:         0.754 us   |          }
      z_wr_iss/2-31855 [002] 162723.348145: funcgraph_exit:         1.255 us   |        }
      z_wr_iss/3-31856 [007] 162723.348145: funcgraph_exit:       + 31.568 us  |            }
      z_wr_iss/2-31855 [002] 162723.348145: funcgraph_entry:        0.405 us   |        spa_config_exit();
      z_wr_iss/3-31856 [007] 162723.348146: funcgraph_exit:       + 37.823 us  |          }
      z_wr_iss/2-31855 [002] 162723.348146: funcgraph_exit:       + 33.715 us  |      }
      z_wr_iss/2-31855 [002] 162723.348146: funcgraph_exit:       + 34.715 us  |    }
      z_wr_iss/2-31855 [002] 162723.348146: funcgraph_entry:        0.216 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.348146: funcgraph_entry:        0.971 us   |          spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348147: funcgraph_entry:        0.216 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348147: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/2-31855 [002] 162723.348148: funcgraph_entry:        0.245 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.348148: funcgraph_entry:        0.238 us   |      zio_wait_for_children();
      z_wr_iss/3-31856 [007] 162723.348148: funcgraph_entry:        0.657 us   |          spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348149: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/2-31855 [002] 162723.348149: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/2-31855 [002] 162723.348149: funcgraph_entry:        0.306 us   |          zrl_add();
      z_wr_iss/3-31856 [007] 162723.348150: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/2-31855 [002] 162723.348150: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/3-31856 [007] 162723.348150: funcgraph_entry:        0.588 us   |            zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.348150: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.348150: funcgraph_entry:        0.214 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.348151: funcgraph_exit:         0.678 us   |            }
      z_wr_iss/2-31855 [002] 162723.348151: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.348151: funcgraph_entry:        0.238 us   |              vdev_lookup_top();
      z_wr_iss/3-31856 [007] 162723.348151: funcgraph_exit:         1.848 us   |          }
      z_wr_iss/2-31855 [002] 162723.348152: funcgraph_exit:         0.673 us   |            }
      z_wr_iss/3-31856 [007] 162723.348152: funcgraph_exit:       + 47.270 us  |        }
      z_wr_iss/2-31855 [002] 162723.348152: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.348152: funcgraph_entry:        0.212 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.348153: funcgraph_exit:         0.642 us   |            }
      z_wr_iss/3-31856 [007] 162723.348153: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/2-31855 [002] 162723.348153: funcgraph_exit:         2.927 us   |          }
      z_wr_iss/2-31855 [002] 162723.348153: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/3-31856 [007] 162723.348153: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/2-31855 [002] 162723.348153: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.348154: funcgraph_entry:        0.216 us   |              vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.348154: funcgraph_exit:       + 13.326 us  |      }
      z_wr_iss/2-31855 [002] 162723.348154: funcgraph_exit:         0.720 us   |            }
      z_wr_iss/0-31853 [006] 162723.348154: funcgraph_entry:        0.624 us   |      zio_push_transform();
      z_wr_iss/3-31856 [007] 162723.348154: funcgraph_entry:        0.789 us   |            zio_add_child();
      z_wr_iss/2-31855 [002] 162723.348154: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.348154: funcgraph_entry:        0.274 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.348155: funcgraph_exit:         0.883 us   |            }
      z_wr_iss/0-31853 [006] 162723.348155: funcgraph_exit:       + 17.958 us  |    }
      z_wr_iss/2-31855 [002] 162723.348155: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.348156: funcgraph_entry:        0.225 us   |              vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.348156: funcgraph_entry:        0.322 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.348156: funcgraph_exit:         2.524 us   |          }
      z_wr_iss/2-31855 [002] 162723.348156: funcgraph_exit:         0.671 us   |            }
      z_wr_iss/2-31855 [002] 162723.348156: funcgraph_exit:         3.162 us   |          }
      z_wr_iss/3-31856 [007] 162723.348156: funcgraph_exit:         3.702 us   |        }
      z_wr_iss/0-31853 [006] 162723.348156: funcgraph_entry:        0.318 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348157: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/2-31855 [002] 162723.348157: funcgraph_entry:        0.238 us   |            spa_version();
      z_wr_iss/3-31856 [007] 162723.348157: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.348157: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/2-31855 [002] 162723.348157: funcgraph_exit:         0.833 us   |          }
      z_wr_iss/0-31853 [006] 162723.348157: funcgraph_entry:        0.746 us   |      zio_checksum_compute();
      z_wr_iss/3-31856 [007] 162723.348158: funcgraph_entry:        0.602 us   |          spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348158: funcgraph_entry:        0.222 us   |          zrl_remove();
      z_wr_iss/2-31855 [002] 162723.348158: funcgraph_exit:         9.187 us   |        }
      z_wr_iss/2-31855 [002] 162723.348158: funcgraph_entry:        0.248 us   |        arc_cksum_compute();
      z_wr_iss/0-31853 [006] 162723.348159: funcgraph_exit:         1.413 us   |    }
      z_wr_iss/0-31853 [006] 162723.348159: funcgraph_entry:        0.342 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348159: funcgraph_exit:       + 10.311 us  |      }
      z_wr_iss/3-31856 [007] 162723.348159: funcgraph_entry:        0.713 us   |          spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348159: funcgraph_entry:        0.278 us   |      zio_walk_parents();
      z_wr_iss/0-31853 [006] 162723.348160: funcgraph_entry:        1.760 us   |    zio_taskq_member();
      z_wr_iss/2-31855 [002] 162723.348160: funcgraph_entry:        0.231 us   |      zio_walk_parents();
      z_wr_iss/3-31856 [007] 162723.348160: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.348160: funcgraph_exit:       + 13.077 us  |    }
      z_wr_iss/2-31855 [002] 162723.348161: funcgraph_entry:        0.214 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.348161: funcgraph_entry:        0.912 us   |            zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.348161: funcgraph_entry:        0.959 us   |    zio_taskq_member();
      z_wr_iss/0-31853 [006] 162723.348162: funcgraph_entry:        0.328 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348162: funcgraph_entry:        0.211 us   |    spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.348163: funcgraph_entry:                   |    zio_dva_allocate() {
      z_wr_iss/2-31855 [002] 162723.348163: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.348163: funcgraph_entry:        0.324 us   |      spa_normal_class();
      z_wr_iss/2-31855 [002] 162723.348163: funcgraph_entry:        0.358 us   |      spa_config_enter();
      z_wr_iss/3-31856 [007] 162723.348163: funcgraph_entry:        0.834 us   |            zio_push_transform();
      z_wr_iss/2-31855 [002] 162723.348164: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/0-31853 [006] 162723.348164: funcgraph_entry:                   |      metaslab_alloc() {
      z_wr_iss/2-31855 [002] 162723.348164: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.348164: funcgraph_entry:        0.556 us   |        spa_config_enter();
      z_wr_iss/3-31856 [007] 162723.348165: funcgraph_entry:        0.647 us   |            spa_writeable();
      z_wr_iss/2-31855 [002] 162723.348165: funcgraph_entry:        2.880 us   |          spa_get_random();
      z_wr_iss/0-31853 [006] 162723.348166: funcgraph_entry:        0.466 us   |        vdev_allocatable();
      z_wr_iss/3-31856 [007] 162723.348166: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/0-31853 [006] 162723.348167: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/0-31853 [006] 162723.348167: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/3-31856 [007] 162723.348167: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.348167: funcgraph_entry:        0.422 us   |            vdev_default_asize();
      z_wr_iss/2-31855 [002] 162723.348168: funcgraph_entry:        0.242 us   |          vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.348168: funcgraph_entry:        0.400 us   |            vdev_default_asize();
      z_wr_iss/2-31855 [002] 162723.348168: funcgraph_entry:        0.237 us   |          vdev_lookup_top();
      z_wr_iss/3-31856 [007] 162723.348169: funcgraph_entry:        1.094 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.348169: funcgraph_entry:        0.233 us   |          vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.348169: funcgraph_exit:         2.127 us   |          }
      z_wr_iss/2-31855 [002] 162723.348169: funcgraph_exit:         5.263 us   |        }
      z_wr_iss/0-31853 [006] 162723.348169: funcgraph_exit:         2.849 us   |        }
      z_wr_iss/2-31855 [002] 162723.348170: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/2-31855 [002] 162723.348170: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/3-31856 [007] 162723.348170: funcgraph_entry:        0.694 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.348170: funcgraph_entry:        0.353 us   |        metaslab_activate();
      z_wr_iss/2-31855 [002] 162723.348171: funcgraph_entry:        0.718 us   |            zio_add_child();
      z_wr_iss/0-31853 [006] 162723.348171: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/3-31856 [007] 162723.348171: funcgraph_exit:         4.028 us   |              }
      z_wr_iss/5-31858 [003] 162723.348171: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/0-31853 [006] 162723.348172: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/2-31855 [002] 162723.348172: funcgraph_exit:         1.943 us   |          }
      z_wr_iss/5-31858 [003] 162723.348172: funcgraph_entry:        0.404 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348172: funcgraph_exit:         2.451 us   |        }
      z_wr_iss/0-31853 [006] 162723.348172: funcgraph_entry:        0.516 us   |            metaslab_pp_maxsize();
      z_wr_iss/2-31855 [002] 162723.348172: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/2-31855 [002] 162723.348172: funcgraph_entry:        0.214 us   |          spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348173: funcgraph_entry:        0.414 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348173: funcgraph_entry:        0.216 us   |          spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.348173: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/3-31856 [007] 162723.348173: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/2-31855 [002] 162723.348173: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.348174: funcgraph_entry:        0.586 us   |              space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.348174: funcgraph_entry:        0.322 us   |            zio_buf_alloc();
      z_wr_iss/5-31858 [003] 162723.348174: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/3-31856 [007] 162723.348174: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/5-31858 [003] 162723.348174: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/0-31853 [006] 162723.348175: funcgraph_exit:         1.565 us   |            }
      z_wr_iss/5-31858 [003] 162723.348175: funcgraph_entry:        1.789 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/3-31856 [007] 162723.348175: funcgraph_entry:        1.013 us   |                  zio_add_child();
      z_wr_iss/2-31855 [002] 162723.348175: funcgraph_entry:        0.346 us   |            zio_push_transform();
      z_wr_iss/0-31853 [006] 162723.348175: funcgraph_exit:         3.287 us   |          }
      z_wr_iss/2-31855 [002] 162723.348175: funcgraph_entry:        0.228 us   |            spa_writeable();
      z_wr_iss/0-31853 [006] 162723.348176: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/0-31853 [006] 162723.348176: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/2-31855 [002] 162723.348176: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/0-31853 [006] 162723.348176: funcgraph_entry:        0.341 us   |              space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.348176: funcgraph_exit:         2.613 us   |                }
      z_wr_iss/5-31858 [003] 162723.348177: funcgraph_exit:         2.602 us   |      }
      z_wr_iss/0-31853 [006] 162723.348177: funcgraph_exit:         1.123 us   |            }
      z_wr_iss/3-31856 [007] 162723.348177: funcgraph_exit:         3.925 us   |              }
      z_wr_iss/5-31858 [003] 162723.348177: funcgraph_exit:         3.633 us   |    }
      z_wr_iss/2-31855 [002] 162723.348177: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.348178: funcgraph_entry:        0.471 us   |            metaslab_segsize_compare();
      z_wr_iss/5-31858 [003] 162723.348178: funcgraph_exit:         6.322 us   |  }
      z_wr_iss/3-31856 [007] 162723.348178: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/2-31855 [002] 162723.348178: funcgraph_entry:        0.327 us   |                vdev_readable();
      z_wr_iss/5-31858 [003] 162723.348178: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/3-31856 [007] 162723.348178: funcgraph_entry:        0.580 us   |                spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348178: funcgraph_exit:         3.027 us   |          }
      z_wr_iss/2-31855 [002] 162723.348179: funcgraph_entry:        0.247 us   |                vdev_readable();
      z_wr_iss/5-31858 [003] 162723.348179: funcgraph_entry:        0.353 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348179: funcgraph_exit:         7.756 us   |        }
      z_wr_iss/0-31853 [006] 162723.348179: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/2-31855 [002] 162723.348179: funcgraph_exit:         1.961 us   |              }
      z_wr_iss/5-31858 [003] 162723.348180: funcgraph_entry:        0.393 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.348180: funcgraph_entry:        0.657 us   |                spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.348180: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/5-31858 [003] 162723.348180: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/0-31853 [006] 162723.348180: funcgraph_entry:        0.455 us   |            space_map_seg_compare();
      z_wr_iss/5-31858 [003] 162723.348181: funcgraph_entry:        0.410 us   |      zio_wait_for_children();
      z_wr_iss/3-31856 [007] 162723.348181: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.348181: funcgraph_exit:         1.330 us   |          }
      z_wr_iss/2-31855 [002] 162723.348181: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/5-31858 [003] 162723.348181: funcgraph_entry:        0.474 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.348182: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/0-31853 [006] 162723.348182: funcgraph_exit:         2.284 us   |        }
      z_wr_iss/3-31856 [007] 162723.348182: funcgraph_entry:        0.689 us   |                  spa_writeable();
      z_wr_iss/2-31855 [002] 162723.348182: funcgraph_entry:        0.657 us   |                  zio_add_child();
      z_wr_iss/0-31853 [006] 162723.348182: funcgraph_entry:        0.407 us   |        vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348182: funcgraph_entry:        0.643 us   |      zio_buf_alloc();
      z_wr_iss/3-31856 [007] 162723.348183: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/0-31853 [006] 162723.348183: funcgraph_entry:        0.351 us   |        vdev_allocatable();
      z_wr_iss/2-31855 [002] 162723.348183: funcgraph_exit:         1.500 us   |                }
      z_wr_iss/2-31855 [002] 162723.348183: funcgraph_exit:         2.008 us   |              }
      z_wr_iss/5-31858 [003] 162723.348183: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/2-31855 [002] 162723.348184: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/3-31856 [007] 162723.348184: funcgraph_entry:        0.711 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.348184: funcgraph_entry:        0.226 us   |                spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348184: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/5-31858 [003] 162723.348184: funcgraph_entry:      + 12.206 us  |        lzjb_compress();
      z_wr_iss/2-31855 [002] 162723.348184: funcgraph_entry:        0.213 us   |                spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.348184: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/0-31853 [006] 162723.348185: funcgraph_entry:        0.332 us   |            vdev_default_asize();
      z_wr_iss/2-31855 [002] 162723.348185: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.348185: funcgraph_entry:        0.216 us   |                  spa_writeable();
      z_wr_iss/3-31856 [007] 162723.348185: funcgraph_entry:        0.702 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.348185: funcgraph_entry:        0.360 us   |            vdev_default_asize();
      z_wr_iss/2-31855 [002] 162723.348186: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/0-31853 [006] 162723.348186: funcgraph_exit:         1.828 us   |          }
      z_wr_iss/3-31856 [007] 162723.348186: funcgraph_entry:        0.772 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/0-31853 [006] 162723.348187: funcgraph_exit:         2.933 us   |        }
      z_wr_iss/0-31853 [006] 162723.348187: funcgraph_entry:        0.478 us   |        metaslab_activate();
      z_wr_iss/3-31856 [007] 162723.348188: funcgraph_exit:         5.098 us   |                  }
      z_wr_iss/2-31855 [002] 162723.348188: funcgraph_entry:        0.316 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.348188: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/3-31856 [007] 162723.348188: funcgraph_exit:         7.388 us   |                }
      z_wr_iss/2-31855 [002] 162723.348189: funcgraph_entry:        0.325 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.348189: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/3-31856 [007] 162723.348189: funcgraph_exit:       + 10.958 us  |              }
      z_wr_iss/0-31853 [006] 162723.348189: funcgraph_entry:        0.624 us   |            metaslab_pp_maxsize();
      z_wr_iss/2-31855 [002] 162723.348189: funcgraph_entry:        0.276 us   |                    vdev_queue_offset_compare();
      z_wr_iss/3-31856 [007] 162723.348190: funcgraph_exit:       + 24.202 us  |            }
      z_wr_iss/0-31853 [006] 162723.348190: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/2-31855 [002] 162723.348190: funcgraph_entry:        0.518 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/3-31856 [007] 162723.348190: funcgraph_exit:       + 30.143 us  |          }
      z_wr_iss/0-31853 [006] 162723.348191: funcgraph_entry:        0.419 us   |              space_map_seg_compare();
      z_wr_iss/3-31856 [007] 162723.348191: funcgraph_entry:        0.352 us   |          spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348191: funcgraph_exit:         5.611 us   |                  }
      z_wr_iss/2-31855 [002] 162723.348191: funcgraph_exit:         6.622 us   |                }
      z_wr_iss/3-31856 [007] 162723.348192: funcgraph_entry:        0.419 us   |          spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348192: funcgraph_exit:         7.996 us   |              }
      z_wr_iss/0-31853 [006] 162723.348192: funcgraph_exit:         1.431 us   |            }
      z_wr_iss/1-31854 [009] 162723.348192: funcgraph_exit:       ! 205.433 us |      }
      z_wr_iss/0-31853 [006] 162723.348192: funcgraph_exit:         3.428 us   |          }
      z_wr_iss/3-31856 [007] 162723.348192: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/2-31855 [002] 162723.348192: funcgraph_exit:       + 16.531 us  |            }
      z_wr_iss/0-31853 [006] 162723.348192: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/1-31854 [009] 162723.348193: funcgraph_entry:        0.900 us   |      zio_push_transform();
      z_wr_iss/2-31855 [002] 162723.348193: funcgraph_exit:       + 19.385 us  |          }
      z_wr_iss/3-31856 [007] 162723.348193: funcgraph_entry:        0.438 us   |            zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.348193: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/2-31855 [002] 162723.348193: funcgraph_entry:        0.221 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348193: funcgraph_entry:        0.358 us   |              space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.348193: funcgraph_entry:        0.216 us   |          spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.348194: funcgraph_exit:         1.410 us   |          }
      z_wr_iss/2-31855 [002] 162723.348194: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348194: funcgraph_exit:       ! 210.141 us |    }
      z_wr_iss/2-31855 [002] 162723.348194: funcgraph_entry:        0.249 us   |            zio_wait_for_children();
      z_wr_iss/3-31856 [007] 162723.348194: funcgraph_exit:       + 37.264 us  |        }
      z_wr_iss/0-31853 [006] 162723.348194: funcgraph_exit:         1.377 us   |            }
      z_wr_iss/1-31854 [009] 162723.348194: funcgraph_entry:        0.438 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [007] 162723.348195: funcgraph_exit:       ! 158.029 us |      }
      z_wr_iss/2-31855 [002] 162723.348195: funcgraph_exit:         0.702 us   |          }
      z_wr_iss/2-31855 [002] 162723.348195: funcgraph_exit:       + 22.658 us  |        }
      z_wr_iss/0-31853 [006] 162723.348195: funcgraph_entry:        0.450 us   |            metaslab_segsize_compare();
      z_wr_iss/3-31856 [007] 162723.348195: funcgraph_exit:       ! 160.628 us |    }
      z_wr_iss/2-31855 [002] 162723.348195: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348195: funcgraph_entry:        0.426 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348195: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/3-31856 [007] 162723.348196: funcgraph_entry:        0.600 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348196: funcgraph_entry:        0.431 us   |            zio_add_child();
      z_wr_iss/0-31853 [006] 162723.348196: funcgraph_exit:         3.460 us   |          }
      z_wr_iss/0-31853 [006] 162723.348196: funcgraph_exit:         8.040 us   |        }
      z_wr_iss/1-31854 [009] 162723.348196: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/5-31858 [003] 162723.348197: funcgraph_exit:       + 13.088 us  |      }
      z_wr_iss/3-31856 [007] 162723.348197: funcgraph_entry:        0.512 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348197: funcgraph_exit:         1.240 us   |          }
      z_wr_iss/0-31853 [006] 162723.348197: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/2-31855 [002] 162723.348197: funcgraph_exit:         1.712 us   |        }
      z_wr_iss/1-31854 [009] 162723.348197: funcgraph_entry:        2.734 us   |      zio_checksum_compute();
      z_wr_iss/5-31858 [003] 162723.348197: funcgraph_entry:        0.807 us   |      zio_push_transform();
      z_wr_iss/2-31855 [002] 162723.348197: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/2-31855 [002] 162723.348197: funcgraph_entry:        0.227 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348197: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/3-31856 [007] 162723.348198: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/0-31853 [006] 162723.348198: funcgraph_entry:        0.517 us   |            space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.348198: funcgraph_entry:        0.230 us   |          spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.348198: funcgraph_entry:        0.360 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.348198: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/5-31858 [003] 162723.348198: funcgraph_exit:       + 17.965 us  |    }
      z_wr_iss/2-31855 [002] 162723.348198: funcgraph_entry:        3.374 us   |            zio_buf_alloc();
      z_wr_iss/5-31858 [003] 162723.348199: funcgraph_entry:        0.309 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348199: funcgraph_exit:         1.351 us   |          }
      z_wr_iss/3-31856 [007] 162723.348199: funcgraph_exit:         1.207 us   |    }
      z_wr_iss/0-31853 [006] 162723.348199: funcgraph_exit:         2.272 us   |        }
      z_wr_iss/5-31858 [003] 162723.348199: funcgraph_entry:        0.379 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [007] 162723.348199: funcgraph_exit:       ! 318.586 us |  }
      z_wr_iss/0-31853 [006] 162723.348200: funcgraph_entry:        0.360 us   |        vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348200: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/1-31854 [009] 162723.348200: funcgraph_exit:         3.850 us   |    }
      z_wr_iss/0-31853 [006] 162723.348200: funcgraph_entry:        0.485 us   |        vdev_allocatable();
      z_wr_iss/5-31858 [003] 162723.348201: funcgraph_entry:        0.737 us   |      zio_checksum_compute();
      z_wr_iss/1-31854 [009] 162723.348201: funcgraph_entry:        0.534 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348201: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/0-31853 [006] 162723.348202: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/5-31858 [003] 162723.348202: funcgraph_exit:         1.786 us   |    }
      z_wr_iss/1-31854 [009] 162723.348202: funcgraph_entry:        2.139 us   |    zio_taskq_member();
      z_wr_iss/0-31853 [006] 162723.348202: funcgraph_entry:        0.381 us   |            vdev_default_asize();
      z_wr_iss/5-31858 [003] 162723.348202: funcgraph_entry:        0.388 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348203: funcgraph_entry:        0.377 us   |            zio_push_transform();
      z_wr_iss/0-31853 [006] 162723.348203: funcgraph_entry:        0.385 us   |            vdev_default_asize();
      z_wr_iss/2-31855 [002] 162723.348203: funcgraph_entry:        0.229 us   |            spa_writeable();
      z_wr_iss/5-31858 [003] 162723.348203: funcgraph_entry:        1.382 us   |    zio_taskq_member();
      z_wr_iss/2-31855 [002] 162723.348204: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/0-31853 [006] 162723.348204: funcgraph_exit:         2.047 us   |          }
      z_wr_iss/0-31853 [006] 162723.348204: funcgraph_exit:         2.750 us   |        }
      z_wr_iss/2-31855 [002] 162723.348204: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/2-31855 [002] 162723.348205: funcgraph_entry:        0.228 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.348205: funcgraph_entry:        0.371 us   |        metaslab_activate();
      z_wr_iss/1-31854 [009] 162723.348205: funcgraph_entry:        0.739 us   |    spa_is_initializing();
      z_wr_iss/5-31858 [003] 162723.348205: funcgraph_entry:        0.525 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348205: funcgraph_entry:        0.259 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.348206: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/2-31855 [002] 162723.348206: funcgraph_exit:         1.547 us   |              }
      z_wr_iss/0-31853 [006] 162723.348206: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/5-31858 [003] 162723.348206: funcgraph_entry:                   |    zio_dva_allocate() {
      z_wr_iss/1-31854 [009] 162723.348206: funcgraph_entry:                   |    zio_dva_allocate() {
      z_wr_iss/0-31853 [006] 162723.348206: funcgraph_entry:        0.624 us   |            metaslab_pp_maxsize();
      z_wr_iss/5-31858 [003] 162723.348207: funcgraph_entry:        0.483 us   |      spa_normal_class();
      z_wr_iss/1-31854 [009] 162723.348207: funcgraph_entry:        0.575 us   |      spa_normal_class();
      z_wr_iss/2-31855 [002] 162723.348207: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/2-31855 [002] 162723.348207: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/0-31853 [006] 162723.348207: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/5-31858 [003] 162723.348208: funcgraph_entry:                   |      metaslab_alloc() {
      z_wr_iss/2-31855 [002] 162723.348208: funcgraph_entry:        0.455 us   |                  zio_add_child();
      z_wr_iss/0-31853 [006] 162723.348208: funcgraph_entry:        0.424 us   |              space_map_seg_compare();
      z_wr_iss/1-31854 [009] 162723.348208: funcgraph_entry:                   |      metaslab_alloc() {
      z_wr_iss/5-31858 [003] 162723.348208: funcgraph_entry:        0.923 us   |        spa_config_enter();
      z_wr_iss/2-31855 [002] 162723.348209: funcgraph_exit:         1.470 us   |                }
      z_wr_iss/1-31854 [009] 162723.348209: funcgraph_entry:        0.875 us   |        spa_config_enter();
      z_wr_iss/2-31855 [002] 162723.348209: funcgraph_exit:         1.952 us   |              }
      z_wr_iss/0-31853 [006] 162723.348209: funcgraph_exit:         1.414 us   |            }
      z_wr_iss/2-31855 [002] 162723.348209: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.348209: funcgraph_exit:         3.169 us   |          }
      z_wr_iss/2-31855 [002] 162723.348209: funcgraph_entry:        0.242 us   |                spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348210: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/2-31855 [002] 162723.348210: funcgraph_entry:        0.216 us   |                spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.348210: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/5-31858 [003] 162723.348210: funcgraph_entry:        0.621 us   |        vdev_allocatable();
      z_wr_iss/1-31854 [009] 162723.348210: funcgraph_entry:        0.672 us   |        vdev_allocatable();
      z_wr_iss/0-31853 [006] 162723.348210: funcgraph_entry:        0.369 us   |              space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.348210: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.348211: funcgraph_entry:        0.265 us   |                  spa_writeable();
      z_wr_iss/0-31853 [006] 162723.348211: funcgraph_exit:         1.069 us   |            }
      z_wr_iss/2-31855 [002] 162723.348211: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/5-31858 [003] 162723.348211: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/1-31854 [009] 162723.348212: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/2-31855 [002] 162723.348212: funcgraph_entry:        0.278 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.348212: funcgraph_exit:         2.094 us   |          }
      z_wr_iss/0-31853 [006] 162723.348212: funcgraph_exit:         6.288 us   |        }
      z_wr_iss/5-31858 [003] 162723.348212: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/1-31854 [009] 162723.348212: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/2-31855 [002] 162723.348212: funcgraph_entry:        0.294 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.348212: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/2-31855 [002] 162723.348213: funcgraph_entry:        0.280 us   |                    vdev_queue_offset_compare();
      z_wr_iss/5-31858 [003] 162723.348213: funcgraph_entry:        0.572 us   |            vdev_default_asize();
      z_wr_iss/1-31854 [009] 162723.348213: funcgraph_entry:        0.836 us   |            vdev_default_asize();
      z_wr_iss/0-31853 [006] 162723.348213: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/0-31853 [006] 162723.348213: funcgraph_entry:        0.388 us   |            space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.348213: funcgraph_entry:        0.365 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/0-31853 [006] 162723.348214: funcgraph_exit:         1.095 us   |          }
      z_wr_iss/5-31858 [003] 162723.348214: funcgraph_entry:        0.584 us   |            vdev_default_asize();
      z_wr_iss/1-31854 [009] 162723.348214: funcgraph_entry:        0.528 us   |            vdev_default_asize();
      z_wr_iss/2-31855 [002] 162723.348214: funcgraph_exit:         2.940 us   |                  }
      z_wr_iss/2-31855 [002] 162723.348214: funcgraph_exit:         3.956 us   |                }
      z_wr_iss/0-31853 [006] 162723.348214: funcgraph_exit:         1.996 us   |        }
      z_wr_iss/2-31855 [002] 162723.348215: funcgraph_exit:         5.461 us   |              }
      z_wr_iss/0-31853 [006] 162723.348215: funcgraph_entry:        0.473 us   |        spa_config_exit();
      z_wr_iss/1-31854 [009] 162723.348215: funcgraph_exit:         3.091 us   |          }
      z_wr_iss/5-31858 [003] 162723.348215: funcgraph_exit:         3.113 us   |          }
      z_wr_iss/2-31855 [002] 162723.348215: funcgraph_exit:       + 11.520 us  |            }
      z_wr_iss/2-31855 [002] 162723.348215: funcgraph_exit:       + 17.228 us  |          }
      z_wr_iss/5-31858 [003] 162723.348216: funcgraph_exit:         4.148 us   |        }
      z_wr_iss/1-31854 [009] 162723.348216: funcgraph_exit:         4.162 us   |        }
      z_wr_iss/2-31855 [002] 162723.348216: funcgraph_entry:        0.221 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348216: funcgraph_exit:       + 51.978 us  |      }
      z_wr_iss/0-31853 [006] 162723.348216: funcgraph_exit:       + 53.376 us  |    }
      z_wr_iss/2-31855 [002] 162723.348216: funcgraph_entry:        0.238 us   |          spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.348216: funcgraph_entry:        0.303 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348217: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/5-31858 [003] 162723.348217: funcgraph_entry:        0.513 us   |        metaslab_activate();
      z_wr_iss/2-31855 [002] 162723.348217: funcgraph_entry:        0.252 us   |            zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.348217: funcgraph_entry:        0.307 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348217: funcgraph_exit:         0.704 us   |          }
      z_wr_iss/2-31855 [002] 162723.348218: funcgraph_exit:       + 20.517 us  |        }
      z_wr_iss/2-31855 [002] 162723.348218: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/5-31858 [003] 162723.348218: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.348218: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/2-31855 [002] 162723.348218: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/7-31860 [004] 162723.348218: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/0-31853 [006] 162723.348218: funcgraph_entry:        0.357 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [003] 162723.348218: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/2-31855 [002] 162723.348219: funcgraph_entry:        0.486 us   |            zio_add_child();
      z_wr_iss/7-31860 [004] 162723.348219: funcgraph_entry:        0.462 us   |    spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348219: funcgraph_entry:        0.742 us   |            metaslab_pp_maxsize();
      z_wr_iss/0-31853 [006] 162723.348219: funcgraph_entry:        0.351 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.348220: funcgraph_exit:         1.552 us   |          }
      z_wr_iss/0-31853 [006] 162723.348220: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/2-31855 [002] 162723.348220: funcgraph_exit:         2.032 us   |        }
      z_wr_iss/7-31860 [004] 162723.348220: funcgraph_entry:        0.455 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348220: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.348220: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/2-31855 [002] 162723.348220: funcgraph_entry:        0.216 us   |          spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348220: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/2-31855 [002] 162723.348221: funcgraph_entry:        0.214 us   |          spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.348221: funcgraph_entry:        0.630 us   |          zrl_add();
      z_wr_iss/5-31858 [003] 162723.348221: funcgraph_entry:        0.596 us   |              space_map_seg_compare();
      z_wr_iss/7-31860 [004] 162723.348221: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/2-31855 [002] 162723.348221: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.348221: funcgraph_entry:        0.260 us   |            zio_buf_alloc();
      z_wr_iss/7-31860 [004] 162723.348222: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/0-31853 [006] 162723.348222: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.348222: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/7-31860 [004] 162723.348222: funcgraph_entry:        3.911 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/5-31858 [003] 162723.348222: funcgraph_exit:         1.922 us   |            }
      z_wr_iss/0-31853 [006] 162723.348222: funcgraph_entry:        0.416 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.348222: funcgraph_entry:        0.383 us   |            zio_push_transform();
      z_wr_iss/5-31858 [003] 162723.348223: funcgraph_exit:         4.385 us   |          }
      z_wr_iss/2-31855 [002] 162723.348223: funcgraph_entry:        0.248 us   |            spa_writeable();
      z_wr_iss/0-31853 [006] 162723.348223: funcgraph_exit:         1.121 us   |            }
      z_wr_iss/5-31858 [003] 162723.348223: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/2-31855 [002] 162723.348224: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/0-31853 [006] 162723.348224: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/5-31858 [003] 162723.348224: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/0-31853 [006] 162723.348224: funcgraph_entry:        0.357 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.348224: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/5-31858 [003] 162723.348224: funcgraph_entry:        0.450 us   |              space_map_seg_compare();
      z_wr_iss/0-31853 [006] 162723.348225: funcgraph_exit:         1.079 us   |            }
      z_wr_iss/2-31855 [002] 162723.348225: funcgraph_entry:        0.228 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.348225: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.348225: funcgraph_entry:        0.229 us   |                vdev_readable();
      z_wr_iss/5-31858 [003] 162723.348225: funcgraph_exit:         1.458 us   |            }
      z_wr_iss/0-31853 [006] 162723.348225: funcgraph_entry:        0.309 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.348226: funcgraph_exit:         1.457 us   |              }
      z_wr_iss/0-31853 [006] 162723.348226: funcgraph_exit:         0.974 us   |            }
      z_wr_iss/5-31858 [003] 162723.348226: funcgraph_entry:        0.565 us   |            metaslab_segsize_compare();
      z_wr_iss/0-31853 [006] 162723.348226: funcgraph_exit:         4.595 us   |          }
      z_wr_iss/7-31860 [004] 162723.348227: funcgraph_exit:         5.019 us   |      }
      z_wr_iss/2-31855 [002] 162723.348227: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.348227: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.348227: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/0-31853 [006] 162723.348227: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/7-31860 [004] 162723.348227: funcgraph_exit:         6.003 us   |    }
      z_wr_iss/5-31858 [003] 162723.348227: funcgraph_exit:         3.969 us   |          }
      z_wr_iss/0-31853 [006] 162723.348227: funcgraph_entry:        0.331 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.348227: funcgraph_entry:        0.451 us   |                  zio_add_child();
      z_wr_iss/7-31860 [004] 162723.348227: funcgraph_exit:         9.330 us   |  }
      z_wr_iss/5-31858 [003] 162723.348228: funcgraph_exit:         9.855 us   |        }
      z_wr_iss/6-31859 [005] 162723.348228: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/0-31853 [006] 162723.348228: funcgraph_exit:         1.095 us   |            }
      z_wr_iss/2-31855 [002] 162723.348228: funcgraph_exit:         1.198 us   |                }
      z_wr_iss/5-31858 [003] 162723.348228: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/2-31855 [002] 162723.348228: funcgraph_exit:         1.648 us   |              }
      z_wr_iss/6-31859 [005] 162723.348228: funcgraph_entry:        0.327 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348228: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.348229: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.348229: funcgraph_entry:        0.311 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.348229: funcgraph_entry:        0.221 us   |                spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348229: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/6-31859 [005] 162723.348229: funcgraph_entry:        0.311 us   |    spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.348229: funcgraph_exit:         0.995 us   |            }
      z_wr_iss/5-31858 [003] 162723.348229: funcgraph_entry:        0.582 us   |            space_map_seg_compare();
      z_wr_iss/6-31859 [005] 162723.348230: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/0-31853 [006] 162723.348230: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348230: funcgraph_entry:        0.341 us   |      zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.348230: funcgraph_entry:        0.325 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348231: funcgraph_entry:        0.334 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [003] 162723.348231: funcgraph_exit:         1.764 us   |          }
      z_wr_iss/0-31853 [006] 162723.348231: funcgraph_exit:         1.023 us   |            }
      z_wr_iss/0-31853 [006] 162723.348231: funcgraph_exit:         4.417 us   |          }
      z_wr_iss/5-31858 [003] 162723.348231: funcgraph_exit:         2.951 us   |        }
      z_wr_iss/6-31859 [005] 162723.348231: funcgraph_entry:        0.483 us   |      zio_buf_alloc();
      z_wr_iss/0-31853 [006] 162723.348231: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/5-31858 [003] 162723.348232: funcgraph_entry:        0.653 us   |        vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348232: funcgraph_entry:        0.701 us   |        metaslab_activate();
      z_wr_iss/0-31853 [006] 162723.348232: funcgraph_entry:        0.322 us   |            spa_version();
      z_wr_iss/6-31859 [005] 162723.348232: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/0-31853 [006] 162723.348233: funcgraph_exit:         1.154 us   |          }
      z_wr_iss/6-31859 [005] 162723.348233: funcgraph_entry:      + 30.997 us  |        lzjb_compress();
      z_wr_iss/5-31858 [003] 162723.348233: funcgraph_entry:        0.459 us   |        vdev_allocatable();
      z_wr_iss/0-31853 [006] 162723.348233: funcgraph_entry:        0.341 us   |          zrl_remove();
      z_wr_iss/1-31854 [009] 162723.348233: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.348234: funcgraph_exit:       + 13.524 us  |        }
      z_wr_iss/5-31858 [003] 162723.348234: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/1-31854 [009] 162723.348234: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/0-31853 [006] 162723.348234: funcgraph_entry:        0.368 us   |        arc_cksum_compute();
      z_wr_iss/5-31858 [003] 162723.348234: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/1-31854 [009] 162723.348235: funcgraph_entry:        0.657 us   |            metaslab_pp_maxsize();
      z_wr_iss/5-31858 [003] 162723.348235: funcgraph_entry:        0.471 us   |            vdev_default_asize();
      z_wr_iss/0-31853 [006] 162723.348235: funcgraph_exit:       + 15.250 us  |      }
      z_wr_iss/0-31853 [006] 162723.348235: funcgraph_entry:        0.450 us   |      zio_walk_parents();
      z_wr_iss/1-31854 [009] 162723.348236: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/5-31858 [003] 162723.348236: funcgraph_entry:        0.509 us   |            vdev_default_asize();
      z_wr_iss/0-31853 [006] 162723.348236: funcgraph_entry:        0.335 us   |      zio_walk_parents();
      z_wr_iss/1-31854 [009] 162723.348237: funcgraph_entry:        0.687 us   |              space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.348237: funcgraph_entry:        0.337 us   |                spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.348237: funcgraph_exit:       + 19.110 us  |    }
      z_wr_iss/5-31858 [003] 162723.348237: funcgraph_exit:         2.896 us   |          }
      z_wr_iss/2-31855 [002] 162723.348237: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.348238: funcgraph_entry:        0.334 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348238: funcgraph_entry:        0.235 us   |                  spa_writeable();
      z_wr_iss/5-31858 [003] 162723.348238: funcgraph_exit:         3.847 us   |        }
      z_wr_iss/1-31854 [009] 162723.348238: funcgraph_entry:        0.643 us   |              space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.348238: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/0-31853 [006] 162723.348238: funcgraph_entry:        1.163 us   |    zio_taskq_member();
      z_wr_iss/5-31858 [003] 162723.348239: funcgraph_entry:        0.417 us   |        metaslab_activate();
      z_wr_iss/1-31854 [009] 162723.348239: funcgraph_exit:         3.240 us   |            }
      z_wr_iss/1-31854 [009] 162723.348240: funcgraph_exit:         5.837 us   |          }
      z_wr_iss/0-31853 [006] 162723.348240: funcgraph_entry:        0.371 us   |    spa_is_initializing();
      z_wr_iss/5-31858 [003] 162723.348240: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348240: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/5-31858 [003] 162723.348241: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/0-31853 [006] 162723.348241: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348241: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/0-31853 [006] 162723.348241: funcgraph_entry:        0.474 us   |      spa_config_enter();
      z_wr_iss/5-31858 [003] 162723.348241: funcgraph_entry:        0.754 us   |            metaslab_pp_maxsize();
      z_wr_iss/1-31854 [009] 162723.348241: funcgraph_entry:        0.671 us   |              space_map_seg_compare();
      z_wr_iss/0-31853 [006] 162723.348242: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/2-31855 [002] 162723.348242: funcgraph_entry:        0.264 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348242: funcgraph_exit:         1.676 us   |            }
      z_wr_iss/0-31853 [006] 162723.348242: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/5-31858 [003] 162723.348242: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/2-31855 [002] 162723.348243: funcgraph_entry:        0.233 us   |                    vdev_queue_offset_compare();
      z_wr_iss/5-31858 [003] 162723.348243: funcgraph_entry:        0.562 us   |              space_map_seg_compare();
      z_wr_iss/1-31854 [009] 162723.348243: funcgraph_entry:        0.528 us   |            metaslab_segsize_compare();
      z_wr_iss/0-31853 [006] 162723.348243: funcgraph_entry:        4.062 us   |          spa_get_random();
      z_wr_iss/2-31855 [002] 162723.348243: funcgraph_entry:        0.263 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.348244: funcgraph_entry:        0.335 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/5-31858 [003] 162723.348244: funcgraph_exit:         1.825 us   |            }
      z_wr_iss/1-31854 [009] 162723.348244: funcgraph_exit:         4.171 us   |          }
      z_wr_iss/2-31855 [002] 162723.348245: funcgraph_exit:         3.849 us   |                  }
      z_wr_iss/5-31858 [003] 162723.348245: funcgraph_exit:         4.203 us   |          }
      z_wr_iss/2-31855 [002] 162723.348245: funcgraph_exit:         4.830 us   |                }
      z_wr_iss/1-31854 [009] 162723.348245: funcgraph_exit:       + 11.661 us  |        }
      z_wr_iss/2-31855 [002] 162723.348245: funcgraph_exit:       + 13.790 us  |              }
      z_wr_iss/5-31858 [003] 162723.348245: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/1-31854 [009] 162723.348245: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/5-31858 [003] 162723.348246: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/1-31854 [009] 162723.348246: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/5-31858 [003] 162723.348246: funcgraph_entry:        0.476 us   |              space_map_seg_compare();
      z_wr_iss/1-31854 [009] 162723.348246: funcgraph_entry:        0.534 us   |            space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.348247: funcgraph_exit:       + 20.437 us  |            }
      z_wr_iss/2-31855 [002] 162723.348247: funcgraph_exit:       + 23.047 us  |          }
      z_wr_iss/2-31855 [002] 162723.348247: funcgraph_entry:        0.221 us   |          spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348247: funcgraph_exit:         1.424 us   |            }
      z_wr_iss/2-31855 [002] 162723.348248: funcgraph_entry:        0.226 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348248: funcgraph_exit:         1.592 us   |          }
      z_wr_iss/8-31861 [004] 162723.348248: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/0-31853 [006] 162723.348248: funcgraph_entry:        0.523 us   |          vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348248: funcgraph_entry:        0.457 us   |            metaslab_segsize_compare();
      z_wr_iss/2-31855 [002] 162723.348248: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/2-31855 [002] 162723.348248: funcgraph_entry:        0.275 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348248: funcgraph_exit:         3.153 us   |        }
      z_wr_iss/8-31861 [004] 162723.348249: funcgraph_entry:        0.504 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348249: funcgraph_entry:        0.339 us   |          vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.348249: funcgraph_exit:         0.725 us   |          }
      z_wr_iss/5-31858 [003] 162723.348249: funcgraph_exit:         3.659 us   |          }
      z_wr_iss/2-31855 [002] 162723.348249: funcgraph_exit:       + 26.382 us  |        }
      z_wr_iss/1-31854 [009] 162723.348249: funcgraph_entry:        0.682 us   |        vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348249: funcgraph_exit:         9.398 us   |        }
      z_wr_iss/2-31855 [002] 162723.348249: funcgraph_exit:       + 82.978 us  |      }
      z_wr_iss/0-31853 [006] 162723.348249: funcgraph_entry:        0.327 us   |          vdev_lookup_top();
      z_wr_iss/8-31861 [004] 162723.348249: funcgraph_entry:        0.503 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348250: funcgraph_exit:       + 84.093 us  |    }
      z_wr_iss/5-31858 [003] 162723.348250: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/2-31855 [002] 162723.348250: funcgraph_entry:        0.249 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348250: funcgraph_exit:         7.747 us   |        }
      z_wr_iss/1-31854 [009] 162723.348250: funcgraph_entry:        0.687 us   |        vdev_allocatable();
      z_wr_iss/5-31858 [003] 162723.348250: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/2-31855 [002] 162723.348250: funcgraph_entry:        0.212 us   |    spa_is_initializing();
      z_wr_iss/8-31861 [004] 162723.348250: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/0-31853 [006] 162723.348250: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.348251: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/8-31861 [004] 162723.348251: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/2-31855 [002] 162723.348251: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/5-31858 [003] 162723.348251: funcgraph_entry:        0.582 us   |            space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.348251: funcgraph_entry:        0.308 us   |      zio_wait_for_children();
      z_wr_iss/8-31861 [004] 162723.348251: funcgraph_entry:        4.537 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/1-31854 [009] 162723.348252: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/2-31855 [002] 162723.348252: funcgraph_exit:         0.786 us   |    }
      z_wr_iss/0-31853 [006] 162723.348252: funcgraph_entry:        0.798 us   |            zio_add_child();
      z_wr_iss/2-31855 [002] 162723.348252: funcgraph_exit:       ! 159.095 us |  }
      z_wr_iss/5-31858 [003] 162723.348252: funcgraph_exit:         1.676 us   |          }
      z_wr_iss/1-31854 [009] 162723.348252: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/5-31858 [003] 162723.348253: funcgraph_exit:         2.928 us   |        }
      z_wr_iss/1-31854 [009] 162723.348253: funcgraph_entry:        0.760 us   |            vdev_default_asize();
      z_wr_iss/0-31853 [006] 162723.348253: funcgraph_exit:         2.205 us   |          }
      z_wr_iss/0-31853 [006] 162723.348253: funcgraph_exit:         2.966 us   |        }
      z_wr_iss/5-31858 [003] 162723.348253: funcgraph_entry:        0.647 us   |        vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.348254: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348254: funcgraph_entry:        0.600 us   |            vdev_default_asize();
      z_wr_iss/0-31853 [006] 162723.348254: funcgraph_entry:        0.337 us   |          spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348255: funcgraph_entry:        0.474 us   |        vdev_allocatable();
      z_wr_iss/0-31853 [006] 162723.348255: funcgraph_entry:        0.321 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348255: funcgraph_exit:         3.176 us   |          }
      z_wr_iss/0-31853 [006] 162723.348256: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348256: funcgraph_exit:         4.258 us   |        }
      z_wr_iss/5-31858 [003] 162723.348256: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/0-31853 [006] 162723.348256: funcgraph_entry:        0.570 us   |            zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.348256: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/5-31858 [003] 162723.348256: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/8-31861 [004] 162723.348256: funcgraph_exit:         5.592 us   |      }
      z_wr_iss/2-31855 [002] 162723.348257: funcgraph_entry:        0.224 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348257: funcgraph_entry:        0.469 us   |        metaslab_activate();
      z_wr_iss/8-31861 [004] 162723.348257: funcgraph_exit:         6.602 us   |    }
      z_wr_iss/5-31858 [003] 162723.348257: funcgraph_entry:        0.530 us   |            vdev_default_asize();
      z_wr_iss/2-31855 [002] 162723.348257: funcgraph_entry:        0.237 us   |    spa_is_initializing();
      z_wr_iss/8-31861 [004] 162723.348257: funcgraph_exit:         9.726 us   |  }
      z_wr_iss/2-31855 [002] 162723.348258: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/0-31853 [006] 162723.348258: funcgraph_entry:        0.557 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.348258: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/2-31855 [002] 162723.348258: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/5-31858 [003] 162723.348258: funcgraph_entry:        0.475 us   |            vdev_default_asize();
      z_wr_iss/2-31855 [002] 162723.348258: funcgraph_entry:        1.139 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/1-31854 [009] 162723.348258: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/8-31861 [004] 162723.348258: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/0-31853 [006] 162723.348259: funcgraph_entry:        0.345 us   |            spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348259: funcgraph_entry:        0.714 us   |            metaslab_pp_maxsize();
      z_wr_iss/5-31858 [003] 162723.348259: funcgraph_exit:         2.557 us   |          }
      z_wr_iss/8-31861 [004] 162723.348259: funcgraph_entry:        0.448 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348259: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/5-31858 [003] 162723.348259: funcgraph_exit:         3.571 us   |        }
      z_wr_iss/2-31855 [002] 162723.348259: funcgraph_exit:         1.681 us   |      }
      z_wr_iss/2-31855 [002] 162723.348260: funcgraph_exit:         2.142 us   |    }
      z_wr_iss/8-31861 [004] 162723.348260: funcgraph_entry:        0.485 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.348260: funcgraph_exit:         3.695 us   |  }
      z_wr_iss/1-31854 [009] 162723.348260: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/2-31855 [002] 162723.348260: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/5-31858 [003] 162723.348261: funcgraph_entry:        0.595 us   |        metaslab_activate();
      z_wr_iss/1-31854 [009] 162723.348261: funcgraph_entry:        0.518 us   |              space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.348261: funcgraph_entry:        0.224 us   |    spa_get_dsl();
      z_wr_iss/8-31861 [004] 162723.348261: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/2-31855 [002] 162723.348261: funcgraph_entry:        0.222 us   |    spa_is_initializing();
      z_wr_iss/8-31861 [004] 162723.348262: funcgraph_entry:        0.699 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [003] 162723.348262: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348262: funcgraph_entry:        0.571 us   |              space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.348262: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/0-31853 [006] 162723.348262: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/2-31855 [002] 162723.348262: funcgraph_entry:        0.249 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [003] 162723.348262: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/2-31855 [002] 162723.348263: funcgraph_entry:        0.294 us   |      zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.348263: funcgraph_entry:        0.537 us   |                vdev_readable();
      z_wr_iss/8-31861 [004] 162723.348263: funcgraph_entry:        0.476 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [003] 162723.348263: funcgraph_entry:        0.739 us   |            metaslab_pp_maxsize();
      z_wr_iss/2-31855 [002] 162723.348263: funcgraph_exit:         1.229 us   |    }
      z_wr_iss/1-31854 [009] 162723.348263: funcgraph_exit:         2.884 us   |            }
      z_wr_iss/2-31855 [002] 162723.348263: funcgraph_exit:         2.920 us   |  }
      z_wr_iss/8-31861 [004] 162723.348264: funcgraph_exit:         2.691 us   |    }
      z_wr_iss/1-31854 [009] 162723.348264: funcgraph_exit:         5.430 us   |          }
      z_wr_iss/2-31855 [002] 162723.348264: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/5-31858 [003] 162723.348264: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/6-31859 [005] 162723.348264: funcgraph_exit:       + 31.859 us  |      }
      z_wr_iss/0-31853 [006] 162723.348264: funcgraph_entry:        0.518 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.348264: funcgraph_entry:        0.214 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348264: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/8-31861 [004] 162723.348264: funcgraph_exit:         5.838 us   |  }
      z_wr_iss/6-31859 [005] 162723.348264: funcgraph_entry:        0.397 us   |      zio_push_transform();
      z_wr_iss/5-31858 [003] 162723.348265: funcgraph_entry:        0.444 us   |              space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.348265: funcgraph_entry:        0.228 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348265: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/2-31855 [002] 162723.348265: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/6-31859 [005] 162723.348265: funcgraph_exit:       + 35.586 us  |    }
      z_wr_iss/0-31853 [006] 162723.348265: funcgraph_exit:         3.569 us   |              }
      z_wr_iss/2-31855 [002] 162723.348265: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/1-31854 [009] 162723.348265: funcgraph_entry:        0.480 us   |              space_map_seg_compare();
      z_wr_iss/6-31859 [005] 162723.348266: funcgraph_entry:        0.308 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.348266: funcgraph_entry:        3.144 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/5-31858 [003] 162723.348266: funcgraph_exit:         1.608 us   |            }
      z_wr_iss/5-31858 [003] 162723.348266: funcgraph_exit:         3.990 us   |          }
      z_wr_iss/6-31859 [005] 162723.348266: funcgraph_entry:        0.334 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348266: funcgraph_exit:         1.737 us   |            }
      z_wr_iss/5-31858 [003] 162723.348267: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/6-31859 [005] 162723.348267: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/6-31859 [005] 162723.348267: funcgraph_entry:        0.728 us   |      zio_checksum_compute();
      z_wr_iss/5-31858 [003] 162723.348267: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/1-31854 [009] 162723.348267: funcgraph_entry:        0.555 us   |            metaslab_segsize_compare();
      z_wr_iss/5-31858 [003] 162723.348268: funcgraph_entry:        0.575 us   |              space_map_seg_compare();
      z_wr_iss/0-31853 [006] 162723.348268: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348268: funcgraph_exit:         1.335 us   |    }
      z_wr_iss/0-31853 [006] 162723.348268: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/6-31859 [005] 162723.348268: funcgraph_entry:        0.301 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348269: funcgraph_exit:         4.354 us   |          }
      z_wr_iss/5-31858 [003] 162723.348269: funcgraph_exit:         1.690 us   |            }
      z_wr_iss/2-31855 [002] 162723.348269: funcgraph_exit:         3.649 us   |      }
      z_wr_iss/6-31859 [005] 162723.348269: funcgraph_entry:        1.128 us   |    zio_taskq_member();
      z_wr_iss/1-31854 [009] 162723.348269: funcgraph_exit:       + 11.327 us  |        }
      z_wr_iss/0-31853 [006] 162723.348269: funcgraph_entry:        0.647 us   |                  zio_add_child();
      z_wr_iss/2-31855 [002] 162723.348269: funcgraph_exit:         4.165 us   |    }
      z_wr_iss/2-31855 [002] 162723.348270: funcgraph_exit:         5.664 us   |  }
      z_wr_iss/5-31858 [003] 162723.348270: funcgraph_exit:         3.000 us   |          }
      z_wr_iss/7-31860 [004] 162723.348270: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/1-31854 [009] 162723.348270: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/0-31853 [006] 162723.348270: funcgraph_exit:         1.855 us   |                }
      z_wr_iss/7-31860 [004] 162723.348270: funcgraph_entry:        0.603 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348270: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/5-31858 [003] 162723.348270: funcgraph_exit:         8.543 us   |        }
      z_wr_iss/6-31859 [005] 162723.348270: funcgraph_entry:        0.304 us   |    spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.348271: funcgraph_exit:         2.751 us   |              }
      z_wr_iss/1-31854 [009] 162723.348271: funcgraph_entry:        0.355 us   |            space_map_seg_compare();
      z_wr_iss/6-31859 [005] 162723.348271: funcgraph_entry:                   |    zio_dva_allocate() {
      z_wr_iss/0-31853 [006] 162723.348271: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/7-31860 [004] 162723.348271: funcgraph_entry:        0.549 us   |    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348271: funcgraph_entry:        0.319 us   |      spa_normal_class();
      z_wr_iss/1-31854 [009] 162723.348271: funcgraph_exit:         1.324 us   |          }
      z_wr_iss/0-31853 [006] 162723.348272: funcgraph_entry:        0.429 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348272: funcgraph_exit:         2.291 us   |        }
      z_wr_iss/6-31859 [005] 162723.348272: funcgraph_entry:                   |      metaslab_alloc() {
      z_wr_iss/1-31854 [009] 162723.348272: funcgraph_entry:        0.337 us   |        vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.348272: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/0-31853 [006] 162723.348272: funcgraph_entry:        0.394 us   |                spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348272: funcgraph_entry:        0.467 us   |        spa_config_enter();
      z_wr_iss/7-31860 [004] 162723.348273: funcgraph_entry:        0.548 us   |      zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348273: funcgraph_entry:        0.409 us   |        vdev_allocatable();
      z_wr_iss/0-31853 [006] 162723.348273: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348273: funcgraph_entry:        0.313 us   |        vdev_allocatable();
      z_wr_iss/0-31853 [006] 162723.348274: funcgraph_entry:        0.397 us   |                  spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348274: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/6-31859 [005] 162723.348274: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/7-31860 [004] 162723.348274: funcgraph_entry:        0.437 us   |      zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348274: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/6-31859 [005] 162723.348274: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/0-31853 [006] 162723.348274: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.348275: funcgraph_entry:        0.369 us   |            vdev_default_asize();
      z_wr_iss/6-31859 [005] 162723.348275: funcgraph_entry:        0.351 us   |            vdev_default_asize();
      z_wr_iss/7-31860 [004] 162723.348275: funcgraph_exit:         2.741 us   |    }
      z_wr_iss/0-31853 [006] 162723.348275: funcgraph_entry:        0.417 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348275: funcgraph_entry:        0.340 us   |            vdev_default_asize();
      z_wr_iss/1-31854 [009] 162723.348275: funcgraph_entry:        0.431 us   |            vdev_default_asize();
      z_wr_iss/7-31860 [004] 162723.348276: funcgraph_exit:         6.032 us   |  }
      z_wr_iss/0-31853 [006] 162723.348276: funcgraph_entry:        0.495 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348276: funcgraph_exit:         1.810 us   |          }
      z_wr_iss/1-31854 [009] 162723.348276: funcgraph_exit:         2.091 us   |          }
      z_wr_iss/6-31859 [005] 162723.348276: funcgraph_exit:         2.423 us   |        }
      z_wr_iss/1-31854 [009] 162723.348277: funcgraph_exit:         2.780 us   |        }
      z_wr_iss/0-31853 [006] 162723.348277: funcgraph_entry:        0.360 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348277: funcgraph_entry:        0.359 us   |        metaslab_activate();
      z_wr_iss/6-31859 [005] 162723.348278: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.348278: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/0-31853 [006] 162723.348278: funcgraph_entry:        0.725 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/6-31859 [005] 162723.348278: funcgraph_entry:        0.493 us   |            metaslab_pp_maxsize();
      z_wr_iss/5-31858 [003] 162723.348279: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/6-31859 [005] 162723.348279: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/0-31853 [006] 162723.348279: funcgraph_exit:         4.967 us   |                  }
      z_wr_iss/6-31859 [005] 162723.348280: funcgraph_entry:        0.437 us   |              space_map_seg_compare();
      z_wr_iss/0-31853 [006] 162723.348280: funcgraph_exit:         6.534 us   |                }
      z_wr_iss/5-31858 [003] 162723.348280: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/0-31853 [006] 162723.348280: funcgraph_exit:         9.048 us   |              }
      z_wr_iss/6-31859 [005] 162723.348280: funcgraph_entry:        0.394 us   |              space_map_seg_compare();
      z_wr_iss/5-31858 [003] 162723.348280: funcgraph_entry:        0.559 us   |            space_map_seg_compare();
      z_wr_iss/0-31853 [006] 162723.348281: funcgraph_exit:       + 21.970 us  |            }
      z_wr_iss/6-31859 [005] 162723.348281: funcgraph_exit:         2.051 us   |            }
      z_wr_iss/0-31853 [006] 162723.348282: funcgraph_exit:       + 25.949 us  |          }
      z_wr_iss/5-31858 [003] 162723.348282: funcgraph_exit:         1.705 us   |          }
      z_wr_iss/6-31859 [005] 162723.348282: funcgraph_exit:         3.654 us   |          }
      z_wr_iss/0-31853 [006] 162723.348282: funcgraph_entry:        0.313 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348282: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/5-31858 [003] 162723.348282: funcgraph_exit:         3.092 us   |        }
      z_wr_iss/6-31859 [005] 162723.348282: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/0-31853 [006] 162723.348283: funcgraph_entry:        0.344 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348283: funcgraph_entry:        0.607 us   |        metaslab_activate();
      z_wr_iss/5-31858 [003] 162723.348283: funcgraph_entry:        2.393 us   |        spa_config_exit();
      z_wr_iss/0-31853 [006] 162723.348283: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/0-31853 [006] 162723.348284: funcgraph_entry:        0.379 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348284: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.348284: funcgraph_exit:         1.121 us   |          }
      z_wr_iss/1-31854 [009] 162723.348285: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/0-31853 [006] 162723.348285: funcgraph_exit:       + 31.006 us  |        }
      z_wr_iss/1-31854 [009] 162723.348285: funcgraph_entry:        0.579 us   |            metaslab_pp_maxsize();
      z_wr_iss/0-31853 [006] 162723.348285: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.348286: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.348286: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/6-31859 [005] 162723.348286: funcgraph_entry:        0.723 us   |              space_map_seg_compare();
      z_wr_iss/0-31853 [006] 162723.348286: funcgraph_entry:        0.546 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348286: funcgraph_entry:        0.398 us   |              space_map_seg_compare();
      z_wr_iss/0-31853 [006] 162723.348287: funcgraph_exit:         1.690 us   |          }
      z_wr_iss/6-31859 [005] 162723.348287: funcgraph_exit:         5.066 us   |            }
      z_wr_iss/1-31854 [009] 162723.348287: funcgraph_exit:         1.288 us   |            }
      z_wr_iss/0-31853 [006] 162723.348288: funcgraph_exit:         2.378 us   |        }
      z_wr_iss/1-31854 [009] 162723.348288: funcgraph_exit:         3.336 us   |          }
      z_wr_iss/0-31853 [006] 162723.348288: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.348288: funcgraph_entry:        0.314 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348288: funcgraph_entry:        0.534 us   |            metaslab_segsize_compare();
      z_wr_iss/1-31854 [009] 162723.348288: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/1-31854 [009] 162723.348289: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/0-31853 [006] 162723.348289: funcgraph_entry:        0.430 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348289: funcgraph_exit:         7.320 us   |          }
      z_wr_iss/1-31854 [009] 162723.348289: funcgraph_entry:        0.684 us   |              space_map_seg_compare();
      z_wr_iss/0-31853 [006] 162723.348290: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348290: funcgraph_exit:       + 12.134 us  |        }
      z_wr_iss/0-31853 [006] 162723.348290: funcgraph_entry:        0.460 us   |            zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.348291: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/1-31854 [009] 162723.348291: funcgraph_exit:         2.001 us   |            }
      z_wr_iss/0-31853 [006] 162723.348291: funcgraph_entry:        0.499 us   |            zio_push_transform();
      z_wr_iss/5-31858 [003] 162723.348291: funcgraph_exit:       + 77.955 us  |      }
      z_wr_iss/6-31859 [005] 162723.348291: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/1-31854 [009] 162723.348292: funcgraph_exit:         3.301 us   |          }
      z_wr_iss/5-31858 [003] 162723.348292: funcgraph_exit:       + 80.038 us  |    }
      z_wr_iss/6-31859 [005] 162723.348292: funcgraph_entry:        0.536 us   |            space_map_seg_compare();
      z_wr_iss/1-31854 [009] 162723.348292: funcgraph_exit:         8.173 us   |        }
      z_wr_iss/0-31853 [006] 162723.348292: funcgraph_entry:        0.299 us   |            spa_writeable();
      z_wr_iss/5-31858 [003] 162723.348292: funcgraph_entry:        0.591 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348293: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/0-31853 [006] 162723.348293: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/6-31859 [005] 162723.348293: funcgraph_exit:         1.750 us   |          }
      z_wr_iss/1-31854 [009] 162723.348293: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/5-31858 [003] 162723.348293: funcgraph_entry:        0.415 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348294: funcgraph_entry:        0.495 us   |            space_map_seg_compare();
      z_wr_iss/6-31859 [005] 162723.348294: funcgraph_exit:         3.094 us   |        }
      z_wr_iss/0-31853 [006] 162723.348294: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.348295: funcgraph_entry:        0.337 us   |                vdev_readable();
      z_wr_iss/5-31858 [003] 162723.348295: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/1-31854 [009] 162723.348295: funcgraph_exit:         1.534 us   |          }
      z_wr_iss/6-31859 [005] 162723.348295: funcgraph_entry:        0.633 us   |        vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348295: funcgraph_entry:        0.481 us   |      zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.348295: funcgraph_entry:        0.315 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348295: funcgraph_exit:         2.844 us   |        }
      z_wr_iss/5-31858 [003] 162723.348296: funcgraph_entry:        0.501 us   |      zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.348296: funcgraph_exit:         2.154 us   |              }
      z_wr_iss/6-31859 [005] 162723.348296: funcgraph_entry:        0.612 us   |        vdev_allocatable();
      z_wr_iss/1-31854 [009] 162723.348296: funcgraph_entry:        0.643 us   |        spa_config_exit();
      z_wr_iss/5-31858 [003] 162723.348297: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/1-31854 [009] 162723.348297: funcgraph_exit:       + 89.271 us  |      }
      z_wr_iss/6-31859 [005] 162723.348297: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/1-31854 [009] 162723.348298: funcgraph_exit:       + 91.330 us  |    }
      z_wr_iss/5-31858 [003] 162723.348298: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/0-31853 [006] 162723.348298: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348298: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/1-31854 [009] 162723.348298: funcgraph_entry:        0.423 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.348298: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/5-31858 [003] 162723.348298: funcgraph_entry:        0.537 us   |          zrl_add();
      z_wr_iss/6-31859 [005] 162723.348299: funcgraph_entry:        0.783 us   |            vdev_default_asize();
      z_wr_iss/0-31853 [006] 162723.348299: funcgraph_entry:        0.640 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348299: funcgraph_entry:        0.612 us   |    spa_is_initializing();
      z_wr_iss/5-31858 [003] 162723.348300: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.348300: funcgraph_exit:         1.716 us   |                }
      z_wr_iss/6-31859 [005] 162723.348300: funcgraph_entry:        0.647 us   |            vdev_default_asize();
      z_wr_iss/5-31858 [003] 162723.348300: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.348300: funcgraph_exit:         2.515 us   |              }
      z_wr_iss/1-31854 [009] 162723.348300: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/0-31853 [006] 162723.348301: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/5-31858 [003] 162723.348301: funcgraph_entry:        0.580 us   |              vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348301: funcgraph_entry:        0.881 us   |      zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.348301: funcgraph_entry:        0.459 us   |                spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348302: funcgraph_exit:         1.674 us   |            }
      z_wr_iss/6-31859 [005] 162723.348302: funcgraph_exit:         3.864 us   |          }
      z_wr_iss/0-31853 [006] 162723.348302: funcgraph_entry:        0.332 us   |                spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348302: funcgraph_exit:         4.921 us   |        }
      z_wr_iss/1-31854 [009] 162723.348302: funcgraph_entry:        0.717 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [003] 162723.348302: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.348302: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.348303: funcgraph_entry:        0.326 us   |                  spa_writeable();
      z_wr_iss/5-31858 [003] 162723.348303: funcgraph_entry:        0.536 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348303: funcgraph_entry:        1.015 us   |        metaslab_activate();
      z_wr_iss/0-31853 [006] 162723.348304: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.348304: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/0-31853 [006] 162723.348304: funcgraph_entry:        0.356 us   |                    vdev_queue_offset_compare();
      z_wr_iss/5-31858 [003] 162723.348304: funcgraph_exit:         1.780 us   |            }
      z_wr_iss/1-31854 [009] 162723.348305: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/5-31858 [003] 162723.348305: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.348305: funcgraph_entry:        0.467 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348305: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348305: funcgraph_entry:        0.753 us   |          zrl_add();
      z_wr_iss/5-31858 [003] 162723.348305: funcgraph_entry:        0.676 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348306: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/0-31853 [006] 162723.348306: funcgraph_entry:        0.592 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348306: funcgraph_entry:        0.591 us   |            metaslab_pp_maxsize();
      z_wr_iss/5-31858 [003] 162723.348306: funcgraph_exit:         1.747 us   |            }
      z_wr_iss/0-31853 [006] 162723.348307: funcgraph_entry:        0.361 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348307: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/5-31858 [003] 162723.348307: funcgraph_exit:         7.799 us   |          }
      z_wr_iss/1-31854 [009] 162723.348307: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/5-31858 [003] 162723.348308: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348308: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/0-31853 [006] 162723.348308: funcgraph_entry:        0.584 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.348308: funcgraph_entry:        0.560 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348308: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348308: funcgraph_entry:        0.685 us   |              space_map_seg_compare();
      z_wr_iss/5-31858 [003] 162723.348309: funcgraph_entry:        0.629 us   |              vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.348309: funcgraph_exit:         5.306 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348309: funcgraph_exit:         1.632 us   |            }
      z_wr_iss/0-31853 [006] 162723.348309: funcgraph_exit:         6.865 us   |                }
      z_wr_iss/1-31854 [009] 162723.348309: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.348310: funcgraph_exit:         9.045 us   |              }
      z_wr_iss/6-31859 [005] 162723.348310: funcgraph_entry:        0.614 us   |              space_map_seg_compare();
      z_wr_iss/1-31854 [009] 162723.348310: funcgraph_entry:        0.647 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348310: funcgraph_exit:         1.943 us   |            }
      z_wr_iss/5-31858 [003] 162723.348311: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.348311: funcgraph_exit:       + 17.995 us  |            }
      z_wr_iss/6-31859 [005] 162723.348311: funcgraph_exit:         3.555 us   |            }
      z_wr_iss/1-31854 [009] 162723.348311: funcgraph_exit:         1.774 us   |            }
      z_wr_iss/0-31853 [006] 162723.348311: funcgraph_exit:       + 21.613 us  |          }
      z_wr_iss/5-31858 [003] 162723.348311: funcgraph_entry:        0.563 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348312: funcgraph_exit:         6.171 us   |          }
      z_wr_iss/0-31853 [006] 162723.348312: funcgraph_entry:        0.317 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348312: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348312: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/1-31854 [009] 162723.348312: funcgraph_entry:        0.574 us   |              vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.348312: funcgraph_entry:        0.315 us   |          spa_is_initializing();
      z_wr_iss/5-31858 [003] 162723.348312: funcgraph_exit:         1.745 us   |            }
      z_wr_iss/6-31859 [005] 162723.348313: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/5-31858 [003] 162723.348313: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.348313: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.348313: funcgraph_entry:        0.638 us   |              space_map_seg_compare();
      z_wr_iss/1-31854 [009] 162723.348313: funcgraph_exit:         1.644 us   |            }
      z_wr_iss/0-31853 [006] 162723.348313: funcgraph_entry:        0.362 us   |            zio_wait_for_children();
      z_wr_iss/5-31858 [003] 162723.348313: funcgraph_entry:        0.559 us   |              vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348314: funcgraph_exit:         7.327 us   |          }
      z_wr_iss/0-31853 [006] 162723.348314: funcgraph_exit:         1.030 us   |          }
      z_wr_iss/0-31853 [006] 162723.348314: funcgraph_exit:       + 26.562 us  |        }
      z_wr_iss/6-31859 [005] 162723.348314: funcgraph_exit:         1.873 us   |            }
      z_wr_iss/1-31854 [009] 162723.348315: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/5-31858 [003] 162723.348315: funcgraph_exit:         1.674 us   |            }
      z_wr_iss/0-31853 [006] 162723.348315: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348315: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.348315: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/5-31858 [003] 162723.348315: funcgraph_exit:         7.615 us   |          }
      z_wr_iss/6-31859 [005] 162723.348315: funcgraph_entry:        0.598 us   |            metaslab_segsize_compare();
      z_wr_iss/1-31854 [009] 162723.348316: funcgraph_entry:        0.584 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348316: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/0-31853 [006] 162723.348316: funcgraph_entry:        0.643 us   |            zio_add_child();
      z_wr_iss/5-31858 [003] 162723.348317: funcgraph_entry:        0.784 us   |            spa_version();
      z_wr_iss/6-31859 [005] 162723.348317: funcgraph_exit:         4.627 us   |          }
      z_wr_iss/1-31854 [009] 162723.348317: funcgraph_exit:         1.761 us   |            }
      z_wr_iss/0-31853 [006] 162723.348317: funcgraph_exit:         1.769 us   |          }
      z_wr_iss/0-31853 [006] 162723.348317: funcgraph_exit:         2.472 us   |        }
      z_wr_iss/1-31854 [009] 162723.348317: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348317: funcgraph_exit:       + 12.627 us  |        }
      z_wr_iss/0-31853 [006] 162723.348318: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/5-31858 [003] 162723.348318: funcgraph_exit:         2.109 us   |          }
      z_wr_iss/0-31853 [006] 162723.348318: funcgraph_entry:        0.325 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348318: funcgraph_entry:        0.782 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348318: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/0-31853 [006] 162723.348319: funcgraph_entry:        0.400 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348319: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/5-31858 [003] 162723.348319: funcgraph_entry:        0.583 us   |          zrl_remove();
      z_wr_iss/1-31854 [009] 162723.348319: funcgraph_exit:         1.937 us   |            }
      z_wr_iss/0-31853 [006] 162723.348319: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348319: funcgraph_entry:        0.504 us   |            space_map_seg_compare();
      z_wr_iss/0-31853 [006] 162723.348320: funcgraph_entry:        0.407 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.348320: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/5-31858 [003] 162723.348320: funcgraph_exit:       + 22.382 us  |        }
      z_wr_iss/1-31854 [009] 162723.348320: funcgraph_entry:        0.537 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348321: funcgraph_exit:         1.862 us   |          }
      z_wr_iss/5-31858 [003] 162723.348321: funcgraph_entry:        0.562 us   |        arc_cksum_compute();
      z_wr_iss/0-31853 [006] 162723.348321: funcgraph_entry:        0.546 us   |            zio_push_transform();
      z_wr_iss/6-31859 [005] 162723.348321: funcgraph_exit:         3.034 us   |        }
      z_wr_iss/1-31854 [009] 162723.348321: funcgraph_exit:         1.545 us   |            }
      z_wr_iss/6-31859 [005] 162723.348322: funcgraph_entry:        0.562 us   |        vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.348322: funcgraph_entry:        0.326 us   |            spa_writeable();
      z_wr_iss/5-31858 [003] 162723.348322: funcgraph_exit:       + 24.913 us  |      }
      z_wr_iss/1-31854 [009] 162723.348322: funcgraph_exit:         7.473 us   |          }
      z_wr_iss/1-31854 [009] 162723.348323: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/5-31858 [003] 162723.348323: funcgraph_entry:        0.759 us   |      zio_walk_parents();
      z_wr_iss/0-31853 [006] 162723.348323: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/6-31859 [005] 162723.348323: funcgraph_entry:        0.396 us   |        vdev_allocatable();
      z_wr_iss/1-31854 [009] 162723.348323: funcgraph_entry:        0.594 us   |            spa_version();
      z_wr_iss/0-31853 [006] 162723.348324: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/5-31858 [003] 162723.348324: funcgraph_entry:        0.661 us   |      zio_walk_parents();
      z_wr_iss/6-31859 [005] 162723.348324: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/0-31853 [006] 162723.348324: funcgraph_entry:        0.310 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.348324: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/1-31854 [009] 162723.348324: funcgraph_exit:         1.858 us   |          }
      z_wr_iss/6-31859 [005] 162723.348325: funcgraph_entry:        0.328 us   |            vdev_default_asize();
      z_wr_iss/0-31853 [006] 162723.348325: funcgraph_entry:        0.423 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348325: funcgraph_entry:        0.575 us   |          zrl_remove();
      z_wr_iss/5-31858 [003] 162723.348325: funcgraph_exit:       + 30.734 us  |    }
      z_wr_iss/6-31859 [005] 162723.348325: funcgraph_entry:        0.369 us   |            vdev_default_asize();
      z_wr_iss/0-31853 [006] 162723.348326: funcgraph_exit:         2.103 us   |              }
      z_wr_iss/5-31858 [003] 162723.348326: funcgraph_entry:        0.504 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348326: funcgraph_exit:       + 21.477 us  |        }
      z_wr_iss/6-31859 [005] 162723.348326: funcgraph_exit:         1.827 us   |          }
      z_wr_iss/6-31859 [005] 162723.348326: funcgraph_exit:         2.452 us   |        }
      z_wr_iss/1-31854 [009] 162723.348327: funcgraph_entry:        0.532 us   |        arc_cksum_compute();
      z_wr_iss/5-31858 [003] 162723.348327: funcgraph_entry:        1.940 us   |    zio_taskq_member();
      z_wr_iss/0-31853 [006] 162723.348327: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348327: funcgraph_entry:        0.362 us   |        metaslab_activate();
      z_wr_iss/0-31853 [006] 162723.348328: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.348328: funcgraph_exit:       + 24.077 us  |      }
      z_wr_iss/6-31859 [005] 162723.348328: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.348328: funcgraph_entry:        0.614 us   |                  zio_add_child();
      z_wr_iss/6-31859 [005] 162723.348328: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/1-31854 [009] 162723.348328: funcgraph_entry:        0.628 us   |      zio_walk_parents();
      z_wr_iss/6-31859 [005] 162723.348329: funcgraph_entry:        0.447 us   |            metaslab_pp_maxsize();
      z_wr_iss/0-31853 [006] 162723.348329: funcgraph_exit:         1.536 us   |                }
      z_wr_iss/6-31859 [005] 162723.348330: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/1-31854 [009] 162723.348330: funcgraph_entry:        0.575 us   |      zio_walk_parents();
      z_wr_iss/5-31858 [003] 162723.348330: funcgraph_entry:        0.594 us   |    spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.348330: funcgraph_exit:         2.357 us   |              }
      z_wr_iss/6-31859 [005] 162723.348330: funcgraph_entry:        0.322 us   |              space_map_seg_compare();
      z_wr_iss/0-31853 [006] 162723.348330: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.348330: funcgraph_entry:        0.501 us   |                spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348331: funcgraph_exit:         1.065 us   |            }
      z_wr_iss/5-31858 [003] 162723.348331: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348331: funcgraph_entry:        0.607 us   |      spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348331: funcgraph_exit:         2.559 us   |          }
      z_wr_iss/0-31853 [006] 162723.348331: funcgraph_entry:        0.318 us   |                spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348331: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/5-31858 [003] 162723.348332: funcgraph_entry:        0.812 us   |      spa_config_enter();
      z_wr_iss/6-31859 [005] 162723.348332: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/0-31853 [006] 162723.348332: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348332: funcgraph_entry:        0.415 us   |              space_map_seg_compare();
      z_wr_iss/0-31853 [006] 162723.348332: funcgraph_entry:        0.344 us   |                  spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348332: funcgraph_entry:        0.558 us   |      spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348333: funcgraph_exit:         1.166 us   |            }
      z_wr_iss/5-31858 [003] 162723.348333: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/0-31853 [006] 162723.348333: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/6-31859 [005] 162723.348333: funcgraph_exit:         2.006 us   |          }
      z_wr_iss/1-31854 [009] 162723.348333: funcgraph_entry:                   |      zio_write_bp_init() {
      z_wr_iss/0-31853 [006] 162723.348334: funcgraph_entry:        0.322 us   |                    vdev_queue_offset_compare();
      z_wr_iss/5-31858 [003] 162723.348334: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.348334: funcgraph_exit:         5.587 us   |        }
      z_wr_iss/1-31854 [009] 162723.348334: funcgraph_entry:        0.565 us   |        zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348334: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/0-31853 [006] 162723.348334: funcgraph_entry:        0.317 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348334: funcgraph_entry:                   |          space_map_find() {
      z_wr_iss/5-31858 [003] 162723.348335: funcgraph_entry:        3.921 us   |          spa_get_random();
      z_wr_iss/6-31859 [005] 162723.348335: funcgraph_entry:        0.329 us   |            space_map_seg_compare();
      z_wr_iss/0-31853 [006] 162723.348335: funcgraph_entry:        0.429 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348335: funcgraph_entry:        0.492 us   |        zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348335: funcgraph_exit:         1.000 us   |          }
      z_wr_iss/0-31853 [006] 162723.348336: funcgraph_entry:        0.501 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348336: funcgraph_exit:         1.761 us   |        }
      z_wr_iss/1-31854 [009] 162723.348336: funcgraph_entry:        0.803 us   |        zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.348336: funcgraph_entry:        0.493 us   |        spa_config_exit();
      z_wr_iss/0-31853 [006] 162723.348337: funcgraph_entry:        0.447 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/6-31859 [005] 162723.348337: funcgraph_exit:       + 65.081 us  |      }
      z_wr_iss/1-31854 [009] 162723.348337: funcgraph_entry:                   |        zio_compress_data() {
      z_wr_iss/6-31859 [005] 162723.348337: funcgraph_exit:       + 66.409 us  |    }
      z_wr_iss/0-31853 [006] 162723.348338: funcgraph_exit:         4.535 us   |                  }
      z_wr_iss/6-31859 [005] 162723.348338: funcgraph_entry:        0.336 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348338: funcgraph_entry:      + 42.237 us  |          lzjb_compress();
      z_wr_iss/0-31853 [006] 162723.348338: funcgraph_exit:         6.047 us   |                }
      z_wr_iss/0-31853 [006] 162723.348338: funcgraph_exit:         8.244 us   |              }
      z_wr_iss/6-31859 [005] 162723.348339: funcgraph_entry:        0.316 us   |    spa_is_initializing();
      z_wr_iss/5-31858 [003] 162723.348339: funcgraph_entry:        0.498 us   |          vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348339: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/0-31853 [006] 162723.348339: funcgraph_exit:       + 16.832 us  |            }
      z_wr_iss/6-31859 [005] 162723.348340: funcgraph_entry:        0.348 us   |      zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.348340: funcgraph_exit:       + 20.365 us  |          }
      z_wr_iss/0-31853 [006] 162723.348340: funcgraph_entry:        0.312 us   |          spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348340: funcgraph_entry:        0.503 us   |          vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348340: funcgraph_entry:        0.339 us   |      zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.348341: funcgraph_entry:        0.278 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348341: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/5-31858 [003] 162723.348341: funcgraph_entry:        0.449 us   |          vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348341: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/0-31853 [006] 162723.348341: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.348342: funcgraph_entry:        0.424 us   |          zrl_add();
      z_wr_iss/0-31853 [006] 162723.348342: funcgraph_entry:        0.434 us   |            zio_wait_for_children();
      z_wr_iss/5-31858 [003] 162723.348342: funcgraph_exit:         8.469 us   |        }
      z_wr_iss/6-31859 [005] 162723.348343: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.348343: funcgraph_exit:         1.139 us   |          }
      z_wr_iss/5-31858 [003] 162723.348343: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348343: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348343: funcgraph_entry:        0.370 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348343: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/0-31853 [006] 162723.348343: funcgraph_exit:       + 25.457 us  |        }
      z_wr_iss/0-31853 [006] 162723.348344: funcgraph_exit:       ! 101.911 us |      }
      z_wr_iss/6-31859 [005] 162723.348344: funcgraph_exit:         1.027 us   |            }
      z_wr_iss/6-31859 [005] 162723.348344: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.348344: funcgraph_exit:       ! 103.688 us |    }
      z_wr_iss/5-31858 [003] 162723.348344: funcgraph_entry:        0.848 us   |            zio_add_child();
      z_wr_iss/6-31859 [005] 162723.348345: funcgraph_entry:        0.356 us   |              vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.348345: funcgraph_entry:        0.484 us   |    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348345: funcgraph_exit:         1.019 us   |            }
      z_wr_iss/0-31853 [006] 162723.348346: funcgraph_entry:        0.361 us   |    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348346: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/5-31858 [003] 162723.348346: funcgraph_exit:         2.571 us   |          }
      z_wr_iss/6-31859 [005] 162723.348346: funcgraph_entry:        0.381 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348346: funcgraph_exit:         3.550 us   |        }
      z_wr_iss/0-31853 [006] 162723.348346: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/5-31858 [003] 162723.348347: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348347: funcgraph_exit:         0.991 us   |            }
      z_wr_iss/0-31853 [006] 162723.348347: funcgraph_entry:        0.476 us   |      zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348347: funcgraph_exit:         4.518 us   |          }
      z_wr_iss/5-31858 [003] 162723.348347: funcgraph_entry:        0.499 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348347: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348348: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.348348: funcgraph_exit:         1.418 us   |    }
      z_wr_iss/6-31859 [005] 162723.348348: funcgraph_entry:        0.340 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348348: funcgraph_entry:        0.523 us   |          spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.348348: funcgraph_exit:       ! 212.958 us |  }
      z_wr_iss/6-31859 [005] 162723.348349: funcgraph_exit:         0.959 us   |            }
      z_wr_iss/6-31859 [005] 162723.348349: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348349: funcgraph_entry:        0.344 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348349: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/5-31858 [003] 162723.348350: funcgraph_entry:        0.608 us   |            zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.348350: funcgraph_exit:         0.927 us   |            }
      z_wr_iss/6-31859 [005] 162723.348350: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348350: funcgraph_entry:        0.349 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348351: funcgraph_exit:         0.933 us   |            }
      z_wr_iss/6-31859 [005] 162723.348351: funcgraph_exit:         3.943 us   |          }
      z_wr_iss/5-31858 [003] 162723.348351: funcgraph_entry:        0.675 us   |            zio_push_transform();
      z_wr_iss/6-31859 [005] 162723.348352: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/6-31859 [005] 162723.348352: funcgraph_entry:        0.336 us   |            spa_version();
      z_wr_iss/5-31858 [003] 162723.348353: funcgraph_entry:        0.424 us   |            spa_writeable();
      z_wr_iss/6-31859 [005] 162723.348353: funcgraph_exit:         1.076 us   |          }
      z_wr_iss/6-31859 [005] 162723.348353: funcgraph_entry:        0.403 us   |          zrl_remove();
      z_wr_iss/5-31858 [003] 162723.348353: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/6-31859 [005] 162723.348354: funcgraph_exit:       + 12.494 us  |        }
      z_wr_iss/5-31858 [003] 162723.348356: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/5-31858 [003] 162723.348357: funcgraph_entry:        0.413 us   |                vdev_readable();
      z_wr_iss/5-31858 [003] 162723.348358: funcgraph_entry:        0.420 us   |                vdev_readable();
      z_wr_iss/5-31858 [003] 162723.348359: funcgraph_exit:         2.981 us   |              }
      z_wr_iss/6-31859 [005] 162723.348362: funcgraph_entry:        0.389 us   |        arc_cksum_compute();
      z_wr_iss/5-31858 [003] 162723.348362: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348362: funcgraph_exit:       + 21.342 us  |      }
      z_wr_iss/5-31858 [003] 162723.348362: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/5-31858 [003] 162723.348363: funcgraph_entry:        0.631 us   |                  zio_add_child();
      z_wr_iss/5-31858 [003] 162723.348364: funcgraph_exit:         1.757 us   |                }
      z_wr_iss/5-31858 [003] 162723.348365: funcgraph_exit:         2.697 us   |              }
      z_wr_iss/5-31858 [003] 162723.348365: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/5-31858 [003] 162723.348366: funcgraph_entry:        0.447 us   |                spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348366: funcgraph_entry:        0.412 us   |                spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348367: funcgraph_entry:        0.362 us   |      zio_walk_parents();
      z_wr_iss/5-31858 [003] 162723.348367: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348367: funcgraph_entry:        0.325 us   |      zio_walk_parents();
      z_wr_iss/5-31858 [003] 162723.348368: funcgraph_entry:        0.388 us   |                  spa_writeable();
      z_wr_iss/6-31859 [005] 162723.348368: funcgraph_entry:        0.292 us   |      spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348369: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/6-31859 [005] 162723.348369: funcgraph_entry:        0.301 us   |      spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348369: funcgraph_entry:                   |      zio_write_bp_init() {
      z_wr_iss/6-31859 [005] 162723.348370: funcgraph_entry:        0.365 us   |        zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348370: funcgraph_entry:        0.346 us   |        zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348371: funcgraph_entry:        0.313 us   |        spa_sync_pass();
      z_wr_iss/6-31859 [005] 162723.348372: funcgraph_entry:        0.610 us   |        zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.348373: funcgraph_entry:                   |        zio_compress_data() {
      z_wr_iss/6-31859 [005] 162723.348374: funcgraph_entry:      + 49.863 us  |          lzjb_compress();
      z_wr_iss/1-31854 [009] 162723.348381: funcgraph_exit:       + 43.294 us  |        }
      z_wr_iss/1-31854 [009] 162723.348381: funcgraph_entry:        0.599 us   |        zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.348382: funcgraph_exit:       + 48.894 us  |      }
      z_wr_iss/1-31854 [009] 162723.348383: funcgraph_entry:        0.418 us   |      spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348383: funcgraph_entry:        0.420 us   |      spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348384: funcgraph_entry:                   |      zio_checksum_generate() {
      z_wr_iss/1-31854 [009] 162723.348385: funcgraph_entry:        0.798 us   |        zio_checksum_compute();
      z_wr_iss/1-31854 [009] 162723.348386: funcgraph_exit:         1.558 us   |      }
      z_wr_iss/1-31854 [009] 162723.348386: funcgraph_entry:        0.431 us   |      spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348387: funcgraph_entry:        1.452 us   |      zio_taskq_member();
      z_wr_iss/1-31854 [009] 162723.348389: funcgraph_entry:        0.414 us   |      spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348390: funcgraph_entry:                   |      zio_dva_allocate() {
      z_wr_iss/1-31854 [009] 162723.348390: funcgraph_entry:        0.358 us   |        spa_normal_class();
      z_wr_iss/1-31854 [009] 162723.348391: funcgraph_entry:                   |        metaslab_alloc() {
      z_wr_iss/1-31854 [009] 162723.348392: funcgraph_entry:        0.598 us   |          spa_config_enter();
      z_wr_iss/1-31854 [009] 162723.348393: funcgraph_entry:        0.429 us   |          vdev_allocatable();
      z_wr_iss/1-31854 [009] 162723.348394: funcgraph_entry:                   |          vdev_psize_to_asize() {
      z_wr_iss/1-31854 [009] 162723.348394: funcgraph_entry:                   |            vdev_default_asize() {
      z_wr_iss/1-31854 [009] 162723.348394: funcgraph_entry:        0.482 us   |              vdev_default_asize();
      z_wr_iss/1-31854 [009] 162723.348395: funcgraph_entry:        0.418 us   |              vdev_default_asize();
      z_wr_iss/1-31854 [009] 162723.348396: funcgraph_exit:         2.179 us   |            }
      z_wr_iss/1-31854 [009] 162723.348397: funcgraph_exit:         2.985 us   |          }
      z_wr_iss/1-31854 [009] 162723.348397: funcgraph_entry:        0.471 us   |          metaslab_activate();
      z_wr_iss/1-31854 [009] 162723.348398: funcgraph_entry:                   |          space_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348399: funcgraph_entry:                   |            metaslab_df_alloc() {
      z_wr_iss/1-31854 [009] 162723.348399: funcgraph_entry:        0.725 us   |              metaslab_pp_maxsize();
      z_wr_iss/1-31854 [009] 162723.348400: funcgraph_entry:                   |              metaslab_block_picker.clone.0() {
      z_wr_iss/1-31854 [009] 162723.348401: funcgraph_entry:        0.483 us   |                space_map_seg_compare();
      z_wr_iss/1-31854 [009] 162723.348402: funcgraph_exit:         1.604 us   |              }
      z_wr_iss/1-31854 [009] 162723.348403: funcgraph_exit:         3.761 us   |            }
      z_wr_iss/1-31854 [009] 162723.348403: funcgraph_entry:                   |            space_map_remove() {
      z_wr_iss/1-31854 [009] 162723.348403: funcgraph_entry:                   |              space_map_find() {
      z_wr_iss/1-31854 [009] 162723.348404: funcgraph_entry:        0.515 us   |                space_map_seg_compare();
      z_wr_iss/1-31854 [009] 162723.348405: funcgraph_exit:         1.472 us   |              }
      z_wr_iss/1-31854 [009] 162723.348405: funcgraph_entry:        0.408 us   |              metaslab_segsize_compare();
      z_wr_iss/1-31854 [009] 162723.348406: funcgraph_exit:         3.328 us   |            }
      z_wr_iss/1-31854 [009] 162723.348407: funcgraph_exit:         8.250 us   |          }
      z_wr_iss/1-31854 [009] 162723.348407: funcgraph_entry:                   |          space_map_add() {
      z_wr_iss/1-31854 [009] 162723.348407: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/1-31854 [009] 162723.348408: funcgraph_entry:        0.481 us   |              space_map_seg_compare();
      z_wr_iss/1-31854 [009] 162723.348409: funcgraph_exit:         1.511 us   |            }
      z_wr_iss/1-31854 [009] 162723.348409: funcgraph_exit:         2.451 us   |          }
      z_wr_iss/1-31854 [009] 162723.348410: funcgraph_entry:        0.461 us   |          vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348411: funcgraph_entry:        0.400 us   |          vdev_allocatable();
      z_wr_iss/1-31854 [009] 162723.348412: funcgraph_entry:                   |          vdev_psize_to_asize() {
      z_wr_iss/1-31854 [009] 162723.348412: funcgraph_entry:                   |            vdev_default_asize() {
      z_wr_iss/1-31854 [009] 162723.348413: funcgraph_entry:        0.337 us   |              vdev_default_asize();
      z_wr_iss/5-31858 [003] 162723.348413: funcgraph_entry:        0.718 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348413: funcgraph_entry:        0.532 us   |              vdev_default_asize();
      z_wr_iss/1-31854 [009] 162723.348414: funcgraph_exit:         2.336 us   |            }
      z_wr_iss/5-31858 [003] 162723.348415: funcgraph_entry:        0.587 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348415: funcgraph_exit:         3.357 us   |          }
      z_wr_iss/5-31858 [003] 162723.348416: funcgraph_entry:        0.485 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348416: funcgraph_entry:        0.469 us   |          metaslab_activate();
      z_wr_iss/1-31854 [009] 162723.348417: funcgraph_entry:                   |          space_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348417: funcgraph_entry:                   |            metaslab_df_alloc() {
      z_wr_iss/5-31858 [003] 162723.348418: funcgraph_entry:        0.829 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.348418: funcgraph_entry:        0.587 us   |              metaslab_pp_maxsize();
      z_wr_iss/5-31858 [003] 162723.348419: funcgraph_exit:       + 50.428 us  |                  }
      z_wr_iss/1-31854 [009] 162723.348419: funcgraph_entry:                   |              metaslab_block_picker.clone.0() {
      z_wr_iss/5-31858 [003] 162723.348420: funcgraph_exit:       + 52.335 us  |                }
      z_wr_iss/1-31854 [009] 162723.348420: funcgraph_entry:        0.648 us   |                space_map_seg_compare();
      z_wr_iss/5-31858 [003] 162723.348420: funcgraph_exit:       + 54.998 us  |              }
      z_wr_iss/1-31854 [009] 162723.348421: funcgraph_exit:         1.832 us   |              }
      z_wr_iss/1-31854 [009] 162723.348421: funcgraph_exit:         4.020 us   |            }
      z_wr_iss/5-31858 [003] 162723.348422: funcgraph_exit:       + 68.211 us  |            }
      z_wr_iss/1-31854 [009] 162723.348422: funcgraph_entry:                   |            space_map_remove() {
      z_wr_iss/5-31858 [003] 162723.348422: funcgraph_exit:       + 72.933 us  |          }
      z_wr_iss/1-31854 [009] 162723.348422: funcgraph_entry:                   |              space_map_find() {
      z_wr_iss/5-31858 [003] 162723.348423: funcgraph_entry:        0.567 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348423: funcgraph_entry:        0.580 us   |                space_map_seg_compare();
      z_wr_iss/5-31858 [003] 162723.348424: funcgraph_entry:        0.504 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348424: funcgraph_exit:       + 50.900 us  |        }
      z_wr_iss/1-31854 [009] 162723.348424: funcgraph_exit:         1.814 us   |              }
      z_wr_iss/6-31859 [005] 162723.348424: funcgraph_entry:        0.408 us   |        zio_push_transform();
      z_wr_iss/5-31858 [003] 162723.348425: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348425: funcgraph_entry:        0.650 us   |              metaslab_segsize_compare();
      z_wr_iss/6-31859 [005] 162723.348425: funcgraph_exit:       + 55.423 us  |      }
      z_wr_iss/5-31858 [003] 162723.348425: funcgraph_entry:        0.450 us   |            zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348425: funcgraph_entry:        0.348 us   |      spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348426: funcgraph_entry:        0.454 us   |      spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348426: funcgraph_exit:         4.381 us   |            }
      z_wr_iss/5-31858 [003] 162723.348426: funcgraph_exit:         1.681 us   |          }
      z_wr_iss/1-31854 [009] 162723.348427: funcgraph_exit:         9.684 us   |          }
      z_wr_iss/5-31858 [003] 162723.348427: funcgraph_exit:       + 80.015 us  |        }
      z_wr_iss/6-31859 [005] 162723.348427: funcgraph_entry:                   |      zio_checksum_generate() {
      z_wr_iss/6-31859 [005] 162723.348427: funcgraph_entry:        1.029 us   |        zio_checksum_compute();
      z_wr_iss/5-31858 [003] 162723.348427: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348427: funcgraph_entry:                   |          space_map_add() {
      z_wr_iss/5-31858 [003] 162723.348428: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.348428: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/1-31854 [009] 162723.348428: funcgraph_entry:        0.473 us   |              space_map_seg_compare();
      z_wr_iss/6-31859 [005] 162723.348428: funcgraph_exit:         1.655 us   |      }
      z_wr_iss/5-31858 [003] 162723.348428: funcgraph_entry:        0.796 us   |            zio_add_child();
      z_wr_iss/6-31859 [005] 162723.348429: funcgraph_entry:        0.294 us   |      spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348429: funcgraph_entry:        0.475 us   |      spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348429: funcgraph_exit:         1.623 us   |            }
      z_wr_iss/5-31858 [003] 162723.348430: funcgraph_exit:         2.065 us   |          }
      z_wr_iss/1-31854 [009] 162723.348430: funcgraph_exit:         2.686 us   |          }
      z_wr_iss/6-31859 [005] 162723.348430: funcgraph_entry:                   |      zio_ready() {
      z_wr_iss/1-31854 [009] 162723.348430: funcgraph_entry:        0.534 us   |          vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348430: funcgraph_exit:         3.285 us   |        }
      z_wr_iss/6-31859 [005] 162723.348430: funcgraph_entry:        0.316 us   |        zio_wait_for_children();
      z_wr_iss/5-31858 [003] 162723.348431: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348431: funcgraph_entry:        0.292 us   |        zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348432: funcgraph_entry:        0.594 us   |          vdev_allocatable();
      z_wr_iss/5-31858 [003] 162723.348432: funcgraph_entry:        0.628 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348432: funcgraph_entry:                   |        arc_write_ready() {
      z_wr_iss/6-31859 [005] 162723.348432: funcgraph_entry:                   |          dbuf_write_ready() {
      z_wr_iss/6-31859 [005] 162723.348432: funcgraph_entry:        0.354 us   |            zrl_add();
      z_wr_iss/5-31858 [003] 162723.348433: funcgraph_entry:        0.463 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348433: funcgraph_entry:                   |          vdev_psize_to_asize() {
      z_wr_iss/6-31859 [005] 162723.348433: funcgraph_entry:                   |            bp_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.348433: funcgraph_entry:                   |            vdev_default_asize() {
      z_wr_iss/6-31859 [005] 162723.348433: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/5-31858 [003] 162723.348434: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348434: funcgraph_entry:        0.374 us   |                vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348434: funcgraph_entry:        0.556 us   |              vdev_default_asize();
      z_wr_iss/5-31858 [003] 162723.348434: funcgraph_entry:        0.678 us   |            zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.348434: funcgraph_exit:         1.017 us   |              }
      z_wr_iss/6-31859 [005] 162723.348435: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348435: funcgraph_entry:        0.363 us   |                vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348435: funcgraph_entry:        0.369 us   |              vdev_default_asize();
      z_wr_iss/6-31859 [005] 162723.348436: funcgraph_exit:         0.964 us   |              }
      z_wr_iss/5-31858 [003] 162723.348436: funcgraph_entry:        0.626 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.348436: funcgraph_exit:         2.805 us   |            }
      z_wr_iss/6-31859 [005] 162723.348436: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.348436: funcgraph_exit:         3.892 us   |          }
      z_wr_iss/6-31859 [005] 162723.348437: funcgraph_entry:        0.518 us   |                vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348437: funcgraph_entry:        0.523 us   |            spa_writeable();
      z_wr_iss/6-31859 [005] 162723.348437: funcgraph_exit:         1.127 us   |              }
      z_wr_iss/6-31859 [005] 162723.348437: funcgraph_exit:         4.346 us   |            }
      z_wr_iss/1-31854 [009] 162723.348438: funcgraph_entry:        0.667 us   |          metaslab_activate();
      z_wr_iss/6-31859 [005] 162723.348438: funcgraph_entry:                   |            bp_get_dsize_sync() {
      z_wr_iss/5-31858 [003] 162723.348438: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/6-31859 [005] 162723.348438: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348438: funcgraph_entry:        0.348 us   |                vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348439: funcgraph_entry:                   |          space_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.348439: funcgraph_exit:         0.927 us   |              }
      z_wr_iss/5-31858 [003] 162723.348439: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348439: funcgraph_entry:                   |            metaslab_df_alloc() {
      z_wr_iss/6-31859 [005] 162723.348439: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348440: funcgraph_entry:        0.337 us   |                vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348440: funcgraph_entry:        0.626 us   |              metaslab_pp_maxsize();
      z_wr_iss/5-31858 [003] 162723.348440: funcgraph_entry:        0.497 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.348440: funcgraph_exit:         0.933 us   |              }
      z_wr_iss/6-31859 [005] 162723.348441: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348441: funcgraph_entry:        0.310 us   |                vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348441: funcgraph_entry:                   |              metaslab_block_picker.clone.0() {
      z_wr_iss/5-31858 [003] 162723.348441: funcgraph_entry:        0.474 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.348441: funcgraph_exit:         0.917 us   |              }
      z_wr_iss/1-31854 [009] 162723.348442: funcgraph_entry:        0.662 us   |                space_map_seg_compare();
      z_wr_iss/6-31859 [005] 162723.348442: funcgraph_exit:         3.956 us   |            }
      z_wr_iss/6-31859 [005] 162723.348442: funcgraph_entry:                   |            dnode_diduse_space() {
      z_wr_iss/6-31859 [005] 162723.348442: funcgraph_entry:        0.300 us   |              spa_version();
      z_wr_iss/5-31858 [003] 162723.348442: funcgraph_exit:         3.174 us   |              }
      z_wr_iss/1-31854 [009] 162723.348443: funcgraph_exit:         1.902 us   |              }
      z_wr_iss/6-31859 [005] 162723.348443: funcgraph_exit:         0.990 us   |            }
      z_wr_iss/1-31854 [009] 162723.348443: funcgraph_exit:         3.930 us   |            }
      z_wr_iss/6-31859 [005] 162723.348443: funcgraph_entry:        0.366 us   |            zrl_remove();
      z_wr_iss/1-31854 [009] 162723.348444: funcgraph_entry:                   |            space_map_remove() {
      z_wr_iss/1-31854 [009] 162723.348444: funcgraph_entry:                   |              space_map_find() {
      z_wr_iss/6-31859 [005] 162723.348444: funcgraph_exit:       + 12.097 us  |          }
      z_wr_iss/5-31858 [003] 162723.348444: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348444: funcgraph_entry:        0.595 us   |                space_map_seg_compare();
      z_wr_iss/6-31859 [005] 162723.348444: funcgraph_entry:        0.343 us   |          arc_cksum_compute();
      z_wr_iss/5-31858 [003] 162723.348445: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/6-31859 [005] 162723.348445: funcgraph_exit:       + 13.374 us  |        }
      z_wr_iss/1-31854 [009] 162723.348445: funcgraph_exit:         1.477 us   |              }
      z_wr_iss/6-31859 [005] 162723.348445: funcgraph_entry:        0.348 us   |        zio_walk_parents();
      z_wr_iss/5-31858 [003] 162723.348445: funcgraph_entry:        1.139 us   |                  zio_add_child();
      z_wr_iss/6-31859 [005] 162723.348446: funcgraph_entry:        0.340 us   |        zio_walk_parents();
      z_wr_iss/1-31854 [009] 162723.348447: funcgraph_exit:         2.980 us   |            }
      z_wr_iss/6-31859 [005] 162723.348447: funcgraph_exit:       + 16.613 us  |      }
      z_wr_iss/1-31854 [009] 162723.348447: funcgraph_exit:         8.192 us   |          }
      z_wr_iss/6-31859 [005] 162723.348447: funcgraph_entry:        0.311 us   |      spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348447: funcgraph_exit:         2.438 us   |                }
      z_wr_iss/1-31854 [009] 162723.348448: funcgraph_entry:                   |          space_map_add() {
      z_wr_iss/5-31858 [003] 162723.348448: funcgraph_exit:         3.393 us   |              }
      z_wr_iss/6-31859 [005] 162723.348448: funcgraph_entry:        1.054 us   |      zio_taskq_member();
      z_wr_iss/5-31858 [003] 162723.348448: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348448: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/5-31858 [003] 162723.348449: funcgraph_entry:        0.521 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348449: funcgraph_entry:        0.660 us   |              space_map_seg_compare();
      z_wr_iss/6-31859 [005] 162723.348449: funcgraph_entry:        0.306 us   |      spa_is_initializing();
      z_wr_iss/5-31858 [003] 162723.348450: funcgraph_entry:        0.384 us   |                spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348450: funcgraph_entry:                   |      zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348450: funcgraph_exit:         1.791 us   |            }
      z_wr_iss/6-31859 [005] 162723.348450: funcgraph_entry:        0.422 us   |        spa_config_enter();
      z_wr_iss/1-31854 [009] 162723.348451: funcgraph_exit:         3.065 us   |          }
      z_wr_iss/5-31858 [003] 162723.348451: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348451: funcgraph_entry:                   |        vdev_mirror_io_start() {
      z_wr_iss/1-31854 [009] 162723.348451: funcgraph_entry:        0.769 us   |          spa_config_exit();
      z_wr_iss/6-31859 [005] 162723.348451: funcgraph_entry:                   |          vdev_mirror_map_alloc() {
      z_wr_iss/5-31858 [003] 162723.348451: funcgraph_entry:        0.459 us   |                  spa_writeable();
      z_wr_iss/6-31859 [005] 162723.348452: funcgraph_entry:        2.562 us   |            spa_get_random();
      z_wr_iss/5-31858 [003] 162723.348452: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.348452: funcgraph_exit:       + 61.316 us  |        }
      z_wr_iss/5-31858 [003] 162723.348453: funcgraph_entry:        0.480 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348453: funcgraph_exit:       + 62.990 us  |      }
      z_wr_iss/1-31854 [009] 162723.348453: funcgraph_entry:        0.490 us   |      spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348454: funcgraph_entry:        0.537 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348454: funcgraph_entry:        0.480 us   |      spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348455: funcgraph_entry:        0.394 us   |            vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348455: funcgraph_entry:        0.520 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348455: funcgraph_entry:        0.335 us   |            vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348455: funcgraph_entry:                   |      zio_ready() {
      z_wr_iss/1-31854 [009] 162723.348456: funcgraph_entry:        0.520 us   |        zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348456: funcgraph_entry:        0.329 us   |            vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348456: funcgraph_entry:        1.238 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/6-31859 [005] 162723.348457: funcgraph_exit:         5.419 us   |          }
      z_wr_iss/1-31854 [009] 162723.348457: funcgraph_entry:        0.432 us   |        zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348457: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348457: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/5-31858 [003] 162723.348458: funcgraph_exit:         5.624 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348458: funcgraph_entry:                   |        arc_write_ready() {
      z_wr_iss/6-31859 [005] 162723.348458: funcgraph_entry:        0.725 us   |              zio_add_child();
      z_wr_iss/5-31858 [003] 162723.348458: funcgraph_exit:         7.727 us   |                }
      z_wr_iss/1-31854 [009] 162723.348458: funcgraph_entry:                   |          dbuf_write_ready() {
      z_wr_iss/5-31858 [003] 162723.348459: funcgraph_exit:       + 10.851 us  |              }
      z_wr_iss/1-31854 [009] 162723.348459: funcgraph_entry:        0.662 us   |            zrl_add();
      z_wr_iss/6-31859 [005] 162723.348459: funcgraph_exit:         1.903 us   |            }
      z_wr_iss/6-31859 [005] 162723.348460: funcgraph_exit:         2.615 us   |          }
      z_wr_iss/6-31859 [005] 162723.348460: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348460: funcgraph_entry:                   |            bp_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348460: funcgraph_entry:        0.344 us   |            spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348460: funcgraph_exit:       + 22.377 us  |            }
      z_wr_iss/1-31854 [009] 162723.348461: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/5-31858 [003] 162723.348461: funcgraph_exit:       + 27.236 us  |          }
      z_wr_iss/6-31859 [005] 162723.348461: funcgraph_entry:        0.362 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348461: funcgraph_entry:        0.872 us   |                vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348461: funcgraph_entry:        0.551 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348462: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348462: funcgraph_entry:        0.490 us   |              zio_buf_alloc();
      z_wr_iss/5-31858 [003] 162723.348462: funcgraph_entry:        0.497 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348463: funcgraph_exit:         2.006 us   |              }
      z_wr_iss/1-31854 [009] 162723.348463: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348463: funcgraph_entry:        0.440 us   |              zio_push_transform();
      z_wr_iss/5-31858 [003] 162723.348464: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348464: funcgraph_entry:        0.534 us   |                vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348464: funcgraph_entry:        0.348 us   |              spa_writeable();
      z_wr_iss/5-31858 [003] 162723.348464: funcgraph_entry:        0.530 us   |            zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348465: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.348465: funcgraph_exit:         1.545 us   |              }
      z_wr_iss/1-31854 [009] 162723.348465: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/5-31858 [003] 162723.348465: funcgraph_exit:         1.661 us   |          }
      z_wr_iss/1-31854 [009] 162723.348466: funcgraph_entry:        0.619 us   |                vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348466: funcgraph_exit:       + 34.799 us  |        }
      z_wr_iss/6-31859 [005] 162723.348466: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/5-31858 [003] 162723.348466: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348466: funcgraph_entry:        0.329 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348467: funcgraph_exit:         1.745 us   |              }
      z_wr_iss/5-31858 [003] 162723.348467: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/6-31859 [005] 162723.348467: funcgraph_entry:        0.330 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348467: funcgraph_exit:         7.299 us   |            }
      z_wr_iss/5-31858 [003] 162723.348468: funcgraph_entry:        0.688 us   |            zio_add_child();
      z_wr_iss/6-31859 [005] 162723.348468: funcgraph_exit:         1.974 us   |                }
      z_wr_iss/1-31854 [009] 162723.348468: funcgraph_entry:                   |            bp_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.348469: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/5-31858 [003] 162723.348469: funcgraph_exit:         2.133 us   |          }
      z_wr_iss/1-31854 [009] 162723.348469: funcgraph_entry:        0.496 us   |                vdev_lookup_top();
      z_wr_iss/5-31858 [003] 162723.348470: funcgraph_exit:         3.416 us   |        }
      z_wr_iss/6-31859 [005] 162723.348470: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/5-31858 [003] 162723.348470: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348470: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/1-31854 [009] 162723.348471: funcgraph_exit:         1.714 us   |              }
      z_wr_iss/1-31854 [009] 162723.348471: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/5-31858 [003] 162723.348471: funcgraph_entry:        0.597 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348471: funcgraph_entry:        0.650 us   |                    zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348472: funcgraph_entry:        0.650 us   |                vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348472: funcgraph_exit:         1.616 us   |                  }
      z_wr_iss/5-31858 [003] 162723.348472: funcgraph_entry:        0.522 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348472: funcgraph_exit:         2.291 us   |                }
      z_wr_iss/6-31859 [005] 162723.348473: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348473: funcgraph_exit:         2.097 us   |              }
      z_wr_iss/6-31859 [005] 162723.348473: funcgraph_entry:        0.600 us   |                  spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348473: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348474: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.348474: funcgraph_entry:        0.335 us   |                  spa_is_initializing();
      z_wr_iss/5-31858 [003] 162723.348474: funcgraph_entry:        0.773 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.348474: funcgraph_entry:        0.565 us   |                vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348475: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348475: funcgraph_entry:        0.336 us   |                    spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348475: funcgraph_exit:         1.879 us   |              }
      z_wr_iss/6-31859 [005] 162723.348476: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.348476: funcgraph_exit:         7.991 us   |            }
      z_wr_iss/6-31859 [005] 162723.348476: funcgraph_entry:        0.344 us   |                      vdev_queue_offset_compare();
      z_wr_iss/5-31858 [003] 162723.348476: funcgraph_entry:        0.923 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.348476: funcgraph_entry:                   |            dnode_diduse_space() {
      z_wr_iss/6-31859 [005] 162723.348477: funcgraph_entry:        0.352 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348477: funcgraph_entry:        0.531 us   |              spa_version();
      z_wr_iss/6-31859 [005] 162723.348477: funcgraph_entry:        0.299 us   |                      vdev_queue_offset_compare();
      z_wr_iss/5-31858 [003] 162723.348478: funcgraph_entry:        0.692 us   |            spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348478: funcgraph_exit:         1.756 us   |            }
      z_wr_iss/6-31859 [005] 162723.348478: funcgraph_entry:        0.440 us   |                      vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.348479: funcgraph_entry:        0.626 us   |            zrl_remove();
      z_wr_iss/5-31858 [003] 162723.348479: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/6-31859 [005] 162723.348479: funcgraph_exit:         3.529 us   |                    }
      z_wr_iss/6-31859 [005] 162723.348479: funcgraph_exit:         4.759 us   |                  }
      z_wr_iss/6-31859 [005] 162723.348480: funcgraph_exit:         6.945 us   |                }
      z_wr_iss/1-31854 [009] 162723.348480: funcgraph_exit:       + 21.339 us  |          }
      z_wr_iss/1-31854 [009] 162723.348480: funcgraph_entry:        0.337 us   |          arc_cksum_compute();
      z_wr_iss/6-31859 [005] 162723.348481: funcgraph_exit:       + 15.957 us  |              }
      z_wr_iss/1-31854 [009] 162723.348481: funcgraph_exit:       + 23.160 us  |        }
      z_wr_iss/6-31859 [005] 162723.348481: funcgraph_exit:       + 19.371 us  |            }
      z_wr_iss/5-31858 [003] 162723.348481: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.348481: funcgraph_entry:        0.325 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348481: funcgraph_entry:        0.570 us   |        zio_walk_parents();
      z_wr_iss/6-31859 [005] 162723.348482: funcgraph_entry:        0.325 us   |            spa_is_initializing();
      z_wr_iss/5-31858 [003] 162723.348482: funcgraph_entry:        0.669 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348482: funcgraph_entry:        0.605 us   |        zio_walk_parents();
      z_wr_iss/6-31859 [005] 162723.348483: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.348483: funcgraph_entry:        0.384 us   |              zio_wait_for_children();
      z_wr_iss/5-31858 [003] 162723.348484: funcgraph_entry:        0.518 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.348484: funcgraph_exit:         1.034 us   |            }
      z_wr_iss/1-31854 [009] 162723.348484: funcgraph_entry:        0.534 us   |        spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348484: funcgraph_exit:       + 23.999 us  |          }
      z_wr_iss/6-31859 [005] 162723.348484: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348485: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/5-31858 [003] 162723.348485: funcgraph_exit:         3.599 us   |              }
      z_wr_iss/1-31854 [009] 162723.348485: funcgraph_entry:        0.634 us   |        spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348485: funcgraph_entry:        0.730 us   |              zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348486: funcgraph_entry:                   |        zio_write_bp_init() {
      z_wr_iss/6-31859 [005] 162723.348486: funcgraph_exit:         1.693 us   |            }
      z_wr_iss/1-31854 [009] 162723.348486: funcgraph_entry:        0.490 us   |          zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348487: funcgraph_exit:         2.343 us   |          }
      z_wr_iss/5-31858 [003] 162723.348487: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348487: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348487: funcgraph_entry:        0.312 us   |            spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348487: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.348487: funcgraph_entry:        0.633 us   |          zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348488: funcgraph_entry:        0.306 us   |            spa_is_initializing();
      z_wr_iss/5-31858 [003] 162723.348488: funcgraph_entry:        0.808 us   |                  zio_add_child();
      z_wr_iss/6-31859 [005] 162723.348488: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348489: funcgraph_entry:        0.511 us   |          spa_sync_pass();
      z_wr_iss/6-31859 [005] 162723.348489: funcgraph_entry:        0.474 us   |              zio_buf_alloc();
      z_wr_iss/5-31858 [003] 162723.348490: funcgraph_exit:         2.345 us   |                }
      z_wr_iss/1-31854 [009] 162723.348490: funcgraph_entry:        1.220 us   |          zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.348490: funcgraph_entry:        0.389 us   |              zio_push_transform();
      z_wr_iss/5-31858 [003] 162723.348490: funcgraph_exit:         3.666 us   |              }
      z_wr_iss/6-31859 [005] 162723.348491: funcgraph_entry:        0.304 us   |              spa_writeable();
      z_wr_iss/5-31858 [003] 162723.348491: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/5-31858 [003] 162723.348491: funcgraph_entry:        0.619 us   |                spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348491: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.348492: funcgraph_entry:                   |          zio_compress_data() {
      z_wr_iss/1-31854 [009] 162723.348492: funcgraph_entry:        8.848 us   |            lzjb_compress();
      z_wr_iss/6-31859 [005] 162723.348492: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/5-31858 [003] 162723.348493: funcgraph_entry:        0.476 us   |                spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348493: funcgraph_entry:        0.360 us   |                  vdev_readable();
      z_wr_iss/5-31858 [003] 162723.348494: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348494: funcgraph_entry:        0.322 us   |                  vdev_readable();
      z_wr_iss/5-31858 [003] 162723.348494: funcgraph_entry:        0.615 us   |                  spa_writeable();
      z_wr_iss/6-31859 [005] 162723.348495: funcgraph_exit:         2.099 us   |                }
      z_wr_iss/5-31858 [003] 162723.348495: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/6-31859 [005] 162723.348496: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/5-31858 [003] 162723.348496: funcgraph_entry:        0.467 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348496: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/6-31859 [005] 162723.348497: funcgraph_entry:        0.579 us   |                    zio_add_child();
      z_wr_iss/5-31858 [003] 162723.348497: funcgraph_entry:        0.501 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348497: funcgraph_exit:         1.514 us   |                  }
      z_wr_iss/6-31859 [005] 162723.348498: funcgraph_exit:         2.151 us   |                }
      z_wr_iss/5-31858 [003] 162723.348498: funcgraph_entry:        0.502 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348498: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348498: funcgraph_entry:        0.306 us   |                  spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348499: funcgraph_entry:        0.304 us   |                  spa_is_initializing();
      z_wr_iss/5-31858 [003] 162723.348499: funcgraph_entry:        0.603 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/6-31859 [005] 162723.348500: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348500: funcgraph_entry:        0.320 us   |                    spa_writeable();
      z_wr_iss/5-31858 [003] 162723.348500: funcgraph_exit:         5.069 us   |                  }
      z_wr_iss/6-31859 [005] 162723.348501: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/5-31858 [003] 162723.348501: funcgraph_exit:         7.139 us   |                }
      z_wr_iss/6-31859 [005] 162723.348501: funcgraph_entry:        0.280 us   |                      vdev_queue_offset_compare();
      z_wr_iss/5-31858 [003] 162723.348501: funcgraph_exit:       + 10.315 us  |              }
      z_wr_iss/1-31854 [009] 162723.348502: funcgraph_exit:         9.950 us   |          }
      z_wr_iss/6-31859 [005] 162723.348502: funcgraph_entry:        0.297 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348502: funcgraph_entry:        0.604 us   |          zio_push_transform();
      z_wr_iss/6-31859 [005] 162723.348502: funcgraph_entry:        0.345 us   |                      vdev_queue_offset_compare();
      z_wr_iss/5-31858 [003] 162723.348503: funcgraph_exit:       + 23.698 us  |            }
      z_wr_iss/6-31859 [005] 162723.348503: funcgraph_entry:        0.335 us   |                      vdev_queue_offset_compare();
      z_wr_iss/5-31858 [003] 162723.348503: funcgraph_exit:       + 29.578 us  |          }
      z_wr_iss/1-31854 [009] 162723.348503: funcgraph_exit:       + 17.334 us  |        }
      z_wr_iss/5-31858 [003] 162723.348504: funcgraph_entry:        0.454 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348504: funcgraph_entry:        0.405 us   |                      vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.348504: funcgraph_entry:        0.735 us   |        spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348505: funcgraph_exit:         3.927 us   |                    }
      z_wr_iss/5-31858 [003] 162723.348505: funcgraph_entry:        0.602 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348505: funcgraph_exit:         5.150 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348505: funcgraph_entry:        0.544 us   |        spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348505: funcgraph_exit:         7.044 us   |                }
      z_wr_iss/5-31858 [003] 162723.348506: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.348506: funcgraph_exit:       + 14.702 us  |              }
      z_wr_iss/1-31854 [009] 162723.348506: funcgraph_entry:                   |        zio_checksum_generate() {
      z_wr_iss/5-31858 [003] 162723.348507: funcgraph_entry:        0.713 us   |            zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348507: funcgraph_exit:       + 18.036 us  |            }
      z_wr_iss/1-31854 [009] 162723.348507: funcgraph_entry:        0.789 us   |          zio_checksum_compute();
      z_wr_iss/6-31859 [005] 162723.348507: funcgraph_entry:        0.245 us   |            spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348507: funcgraph_entry:        0.269 us   |            spa_is_initializing();
      z_wr_iss/5-31858 [003] 162723.348508: funcgraph_exit:         1.667 us   |          }
      z_wr_iss/6-31859 [005] 162723.348508: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348508: funcgraph_exit:         2.034 us   |        }
      z_wr_iss/5-31858 [003] 162723.348508: funcgraph_exit:       + 37.747 us  |        }
      z_wr_iss/6-31859 [005] 162723.348508: funcgraph_entry:        0.293 us   |              zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348509: funcgraph_entry:        0.584 us   |        spa_get_dsl();
      z_wr_iss/5-31858 [003] 162723.348509: funcgraph_exit:       ! 175.859 us |      }
      z_wr_iss/6-31859 [005] 162723.348509: funcgraph_exit:         0.798 us   |            }
      z_wr_iss/6-31859 [005] 162723.348509: funcgraph_exit:       + 22.304 us  |          }
      z_wr_iss/5-31858 [003] 162723.348509: funcgraph_exit:       ! 178.534 us |    }
      z_wr_iss/6-31859 [005] 162723.348509: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348510: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/1-31854 [009] 162723.348510: funcgraph_entry:        0.682 us   |        spa_is_initializing();
      z_wr_iss/5-31858 [003] 162723.348510: funcgraph_entry:        0.598 us   |    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348510: funcgraph_entry:        0.586 us   |              zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348511: funcgraph_entry:                   |        zio_ready() {
      z_wr_iss/6-31859 [005] 162723.348511: funcgraph_exit:         1.217 us   |            }
      z_wr_iss/5-31858 [003] 162723.348511: funcgraph_entry:        0.561 us   |    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348511: funcgraph_exit:         1.750 us   |          }
      z_wr_iss/1-31854 [009] 162723.348511: funcgraph_entry:        0.705 us   |          zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348512: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348512: funcgraph_entry:        0.255 us   |            spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348512: funcgraph_entry:        0.254 us   |            spa_is_initializing();
      z_wr_iss/5-31858 [003] 162723.348512: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348513: funcgraph_entry:        0.591 us   |          zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348513: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/5-31858 [003] 162723.348513: funcgraph_entry:        0.596 us   |      zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348513: funcgraph_entry:        0.287 us   |              zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.348514: funcgraph_entry:                   |          arc_write_ready() {
      z_wr_iss/6-31859 [005] 162723.348514: funcgraph_entry:        0.334 us   |              zio_push_transform();
      z_wr_iss/5-31858 [003] 162723.348514: funcgraph_exit:         1.635 us   |    }
      z_wr_iss/1-31854 [009] 162723.348514: funcgraph_entry:        0.533 us   |            dmu_objset_write_ready();
      z_wr_iss/5-31858 [003] 162723.348515: funcgraph_exit:       ! 330.653 us |  }
      z_wr_iss/6-31859 [005] 162723.348515: funcgraph_entry:        0.255 us   |              spa_writeable();
      z_wr_iss/6-31859 [005] 162723.348515: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.348516: funcgraph_entry:        0.499 us   |            arc_cksum_compute();
      z_wr_iss/6-31859 [005] 162723.348516: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.348516: funcgraph_entry:        0.338 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348516: funcgraph_exit:         2.793 us   |          }
      z_wr_iss/1-31854 [009] 162723.348517: funcgraph_entry:        0.438 us   |          zio_walk_parents();
      z_wr_iss/6-31859 [005] 162723.348517: funcgraph_entry:        0.311 us   |                  vdev_readable();
      z_wr_iss/6-31859 [005] 162723.348518: funcgraph_exit:         1.780 us   |                }
      z_wr_iss/1-31854 [009] 162723.348518: funcgraph_entry:        0.558 us   |          zio_walk_parents();
      z_wr_iss/6-31859 [005] 162723.348519: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348519: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/1-31854 [009] 162723.348519: funcgraph_exit:         8.012 us   |        }
      z_wr_iss/1-31854 [009] 162723.348519: funcgraph_entry:        0.320 us   |        spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348519: funcgraph_entry:        0.564 us   |                    zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348520: funcgraph_entry:        7.245 us   |        zio_taskq_member();
      z_wr_iss/6-31859 [005] 162723.348520: funcgraph_exit:         1.275 us   |                  }
      z_wr_iss/6-31859 [005] 162723.348520: funcgraph_exit:         1.850 us   |                }
      z_wr_iss/6-31859 [005] 162723.348521: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348521: funcgraph_entry:        0.258 us   |                  spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348522: funcgraph_entry:        0.249 us   |                  spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348522: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348522: funcgraph_entry:        0.260 us   |                    spa_writeable();
      z_wr_iss/6-31859 [005] 162723.348523: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/6-31859 [005] 162723.348523: funcgraph_entry:        0.302 us   |                      vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348524: funcgraph_entry:        0.285 us   |                      vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348524: funcgraph_entry:        0.272 us   |                      vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348525: funcgraph_entry:        0.247 us   |                      vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348526: funcgraph_entry:        0.353 us   |                      vdev_queue_io_to_issue();
      z_wr_iss/6-31859 [005] 162723.348526: funcgraph_exit:         3.280 us   |                    }
      z_wr_iss/6-31859 [005] 162723.348526: funcgraph_exit:         4.374 us   |                  }
      z_wr_iss/6-31859 [005] 162723.348527: funcgraph_exit:         5.935 us   |                }
      z_wr_iss/6-31859 [005] 162723.348527: funcgraph_exit:       + 12.175 us  |              }
      z_wr_iss/6-31859 [005] 162723.348528: funcgraph_exit:       + 14.894 us  |            }
      z_wr_iss/1-31854 [009] 162723.348528: funcgraph_entry:        0.303 us   |        spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348528: funcgraph_entry:        0.245 us   |            spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348528: funcgraph_entry:        0.291 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348528: funcgraph_entry:                   |        zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348529: funcgraph_entry:        1.299 us   |          spa_config_enter();
      z_wr_iss/6-31859 [005] 162723.348529: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.348529: funcgraph_entry:        0.269 us   |              zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348530: funcgraph_exit:         0.786 us   |            }
      z_wr_iss/6-31859 [005] 162723.348530: funcgraph_exit:       + 18.572 us  |          }
      z_wr_iss/6-31859 [005] 162723.348530: funcgraph_exit:       + 79.489 us  |        }
      z_wr_iss/6-31859 [005] 162723.348531: funcgraph_exit:       + 80.877 us  |      }
      z_wr_iss/6-31859 [005] 162723.348531: funcgraph_entry:        0.290 us   |      spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348531: funcgraph_entry:        0.257 us   |      spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348532: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.348532: funcgraph_entry:        0.263 us   |        zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348533: funcgraph_exit:         0.841 us   |      }
      z_wr_iss/1-31854 [009] 162723.348533: funcgraph_entry:                   |          vdev_mirror_io_start() {
      z_wr_iss/6-31859 [005] 162723.348533: funcgraph_exit:       ! 190.806 us |    }
      z_wr_iss/1-31854 [009] 162723.348533: funcgraph_entry:                   |            vdev_mirror_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.348534: funcgraph_entry:        0.259 us   |    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348534: funcgraph_entry:        1.135 us   |    zio_taskq_member();
      z_wr_iss/1-31854 [009] 162723.348534: funcgraph_entry:        2.647 us   |              spa_get_random();
      z_wr_iss/6-31859 [005] 162723.348536: funcgraph_entry:        0.263 us   |    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348536: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348536: funcgraph_entry:        0.353 us   |      spa_config_enter();
      z_wr_iss/6-31859 [005] 162723.348537: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/1-31854 [009] 162723.348537: funcgraph_entry:        0.275 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348537: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.348538: funcgraph_entry:        2.362 us   |          spa_get_random();
      z_wr_iss/1-31854 [009] 162723.348538: funcgraph_entry:        0.295 us   |              vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348538: funcgraph_entry:        0.335 us   |              vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348539: funcgraph_exit:         5.625 us   |            }
      z_wr_iss/1-31854 [009] 162723.348539: funcgraph_entry:                   |            zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348540: funcgraph_entry:                   |              zio_create() {
      z_wr_iss/6-31859 [005] 162723.348540: funcgraph_entry:        0.313 us   |          vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348541: funcgraph_entry:        0.681 us   |                zio_add_child();
      z_wr_iss/6-31859 [005] 162723.348541: funcgraph_entry:        0.327 us   |          vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.348541: funcgraph_entry:        0.299 us   |          vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348542: funcgraph_exit:         1.869 us   |              }
      z_wr_iss/1-31854 [009] 162723.348542: funcgraph_exit:         2.484 us   |            }
      z_wr_iss/6-31859 [005] 162723.348542: funcgraph_exit:         4.743 us   |        }
      z_wr_iss/1-31854 [009] 162723.348542: funcgraph_entry:                   |            zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348542: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348542: funcgraph_entry:        0.299 us   |              spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348543: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.348543: funcgraph_entry:        0.296 us   |              spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348543: funcgraph_entry:        0.518 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348544: funcgraph_entry:                   |              zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348544: funcgraph_entry:        0.488 us   |                zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.348544: funcgraph_exit:         1.380 us   |          }
      z_wr_iss/6-31859 [005] 162723.348544: funcgraph_exit:         1.942 us   |        }
      z_wr_iss/6-31859 [005] 162723.348544: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348545: funcgraph_entry:        0.289 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348545: funcgraph_entry:        0.365 us   |                zio_push_transform();
      z_wr_iss/6-31859 [005] 162723.348545: funcgraph_entry:        0.270 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348546: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348546: funcgraph_entry:        0.313 us   |                spa_writeable();
      z_wr_iss/6-31859 [005] 162723.348546: funcgraph_entry:        0.481 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.348547: funcgraph_entry:                   |                vdev_tier_io_start() {
      z_wr_iss/6-31859 [005] 162723.348547: funcgraph_entry:        0.344 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.348548: funcgraph_entry:                   |                  vdev_tier_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.348548: funcgraph_entry:        0.259 us   |            spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348548: funcgraph_entry:        0.311 us   |                    vdev_readable();
      z_wr_iss/6-31859 [005] 162723.348549: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.348549: funcgraph_entry:        0.284 us   |                    vdev_readable();
      z_wr_iss/6-31859 [005] 162723.348549: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348550: funcgraph_exit:         1.820 us   |                  }
      z_wr_iss/6-31859 [005] 162723.348550: funcgraph_entry:        0.257 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.348550: funcgraph_entry:        0.292 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348551: funcgraph_entry:                   |                  zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348551: funcgraph_exit:         1.649 us   |              }
      z_wr_iss/1-31854 [009] 162723.348551: funcgraph_entry:                   |                    zio_create() {
      z_wr_iss/1-31854 [009] 162723.348552: funcgraph_entry:        0.651 us   |                      zio_add_child();
      z_wr_iss/6-31859 [005] 162723.348552: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348553: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.348553: funcgraph_exit:         1.594 us   |                    }
      z_wr_iss/6-31859 [005] 162723.348553: funcgraph_entry:        0.521 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348553: funcgraph_exit:         2.138 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348553: funcgraph_entry:                   |                  zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348554: funcgraph_entry:        0.272 us   |                    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348554: funcgraph_exit:         1.368 us   |                }
      z_wr_iss/6-31859 [005] 162723.348554: funcgraph_exit:         1.910 us   |              }
      z_wr_iss/1-31854 [009] 162723.348554: funcgraph_entry:        0.318 us   |                    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348554: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348555: funcgraph_entry:        0.254 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348555: funcgraph_entry:                   |                    zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348555: funcgraph_entry:        0.283 us   |                      spa_writeable();
      z_wr_iss/6-31859 [005] 162723.348555: funcgraph_entry:        0.261 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348556: funcgraph_entry:                   |                      vdev_queue_io() {
      z_wr_iss/6-31859 [005] 162723.348556: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348556: funcgraph_entry:        0.381 us   |                  spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348556: funcgraph_entry:        0.286 us   |                        vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348557: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.348557: funcgraph_entry:        0.398 us   |                        vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348558: funcgraph_entry:        0.299 us   |                        vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348558: funcgraph_entry:        0.330 us   |                        vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348559: funcgraph_entry:        0.431 us   |                        vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.348560: funcgraph_exit:         4.342 us   |                      }
      z_wr_iss/6-31859 [005] 162723.348560: funcgraph_entry:        0.285 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348560: funcgraph_exit:         5.435 us   |                    }
      z_wr_iss/1-31854 [009] 162723.348560: funcgraph_exit:         7.104 us   |                  }
      z_wr_iss/6-31859 [005] 162723.348561: funcgraph_entry:        0.344 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348561: funcgraph_entry:        0.252 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348561: funcgraph_exit:       + 14.890 us  |                }
      z_wr_iss/1-31854 [009] 162723.348562: funcgraph_exit:       + 18.054 us  |              }
      z_wr_iss/6-31859 [005] 162723.348562: funcgraph_entry:        0.276 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348562: funcgraph_entry:        0.266 us   |              spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348563: funcgraph_entry:        0.258 us   |              spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348563: funcgraph_entry:        0.341 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.348563: funcgraph_entry:                   |              zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.348563: funcgraph_exit:         6.463 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348563: funcgraph_entry:        0.299 us   |                zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348564: funcgraph_exit:         7.772 us   |                }
      z_wr_iss/6-31859 [005] 162723.348564: funcgraph_exit:         9.371 us   |              }
      z_wr_iss/1-31854 [009] 162723.348564: funcgraph_exit:         0.904 us   |              }
      z_wr_iss/1-31854 [009] 162723.348564: funcgraph_exit:       + 21.995 us  |            }
      z_wr_iss/1-31854 [009] 162723.348564: funcgraph_entry:                   |            zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348565: funcgraph_exit:       + 16.106 us  |            }
      z_wr_iss/1-31854 [009] 162723.348565: funcgraph_entry:                   |              zio_create() {
      z_wr_iss/6-31859 [005] 162723.348565: funcgraph_exit:       + 19.158 us  |          }
      z_wr_iss/6-31859 [005] 162723.348565: funcgraph_entry:        0.301 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348565: funcgraph_entry:        0.463 us   |                zio_add_child();
      z_wr_iss/6-31859 [005] 162723.348566: funcgraph_entry:        0.259 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348566: funcgraph_exit:         1.269 us   |              }
      z_wr_iss/1-31854 [009] 162723.348566: funcgraph_exit:         1.830 us   |            }
      z_wr_iss/6-31859 [005] 162723.348566: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348567: funcgraph_entry:                   |            zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348567: funcgraph_entry:        0.272 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348567: funcgraph_entry:        0.241 us   |              spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348567: funcgraph_exit:         0.784 us   |          }
      z_wr_iss/6-31859 [005] 162723.348567: funcgraph_exit:       + 22.872 us  |        }
      z_wr_iss/1-31854 [009] 162723.348567: funcgraph_entry:        0.415 us   |              spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348568: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348568: funcgraph_entry:                   |              zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348568: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.348568: funcgraph_entry:        0.307 us   |                zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.348569: funcgraph_entry:        0.470 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348569: funcgraph_entry:        0.436 us   |                zio_push_transform();
      z_wr_iss/6-31859 [005] 162723.348569: funcgraph_exit:         1.382 us   |          }
      z_wr_iss/6-31859 [005] 162723.348570: funcgraph_exit:         2.081 us   |        }
      z_wr_iss/6-31859 [005] 162723.348570: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348570: funcgraph_entry:        0.247 us   |                spa_writeable();
      z_wr_iss/6-31859 [005] 162723.348570: funcgraph_entry:        0.273 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348571: funcgraph_entry:                   |                vdev_tier_io_start() {
      z_wr_iss/6-31859 [005] 162723.348571: funcgraph_entry:        0.271 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348571: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348572: funcgraph_entry:                   |                  vdev_tier_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.348572: funcgraph_entry:        0.422 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.348572: funcgraph_entry:        0.316 us   |                    vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348573: funcgraph_entry:        0.322 us   |                    vdev_readable();
      z_wr_iss/6-31859 [005] 162723.348573: funcgraph_entry:        0.360 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.348573: funcgraph_exit:         1.803 us   |                  }
      z_wr_iss/6-31859 [005] 162723.348574: funcgraph_entry:        0.287 us   |            spa_writeable();
      z_wr_iss/6-31859 [005] 162723.348574: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.348574: funcgraph_entry:                   |                  zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348575: funcgraph_entry:                   |                    zio_create() {
      z_wr_iss/6-31859 [005] 162723.348575: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348575: funcgraph_entry:        0.537 us   |                      zio_add_child();
      z_wr_iss/6-31859 [005] 162723.348575: funcgraph_entry:        0.300 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348576: funcgraph_exit:         1.349 us   |                    }
      z_wr_iss/6-31859 [005] 162723.348576: funcgraph_entry:        0.247 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348576: funcgraph_exit:         1.911 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348577: funcgraph_entry:                   |                  zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348577: funcgraph_exit:         1.768 us   |              }
      z_wr_iss/1-31854 [009] 162723.348577: funcgraph_entry:        0.265 us   |                    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348577: funcgraph_entry:        0.274 us   |                    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348578: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348578: funcgraph_entry:                   |                    zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348578: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.348578: funcgraph_entry:        0.255 us   |                      spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348579: funcgraph_entry:                   |                      vdev_queue_io() {
      z_wr_iss/6-31859 [005] 162723.348579: funcgraph_entry:        0.480 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348579: funcgraph_entry:        0.280 us   |                        vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348579: funcgraph_exit:         1.458 us   |                }
      z_wr_iss/1-31854 [009] 162723.348580: funcgraph_entry:        0.264 us   |                        vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348580: funcgraph_exit:         1.999 us   |              }
      z_wr_iss/6-31859 [005] 162723.348580: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348580: funcgraph_entry:        0.257 us   |                        vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348580: funcgraph_entry:        0.299 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348581: funcgraph_entry:        0.307 us   |                        vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348581: funcgraph_entry:        0.259 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348581: funcgraph_entry:        0.262 us   |                        vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348581: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348581: funcgraph_entry:        0.335 us   |                  spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348582: funcgraph_entry:        0.386 us   |                        vdev_queue_io_to_issue();
      z_wr_iss/6-31859 [005] 162723.348582: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.348583: funcgraph_exit:         4.336 us   |                      }
      z_wr_iss/6-31859 [005] 162723.348583: funcgraph_entry:        0.313 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348583: funcgraph_exit:         5.434 us   |                    }
      z_wr_iss/1-31854 [009] 162723.348583: funcgraph_exit:         6.975 us   |                  }
      z_wr_iss/6-31859 [005] 162723.348584: funcgraph_entry:        0.327 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348584: funcgraph_entry:        0.261 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348584: funcgraph_exit:       + 13.734 us  |                }
      z_wr_iss/1-31854 [009] 162723.348585: funcgraph_exit:       + 16.562 us  |              }
      z_wr_iss/6-31859 [005] 162723.348585: funcgraph_entry:        0.273 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348585: funcgraph_entry:        0.241 us   |              spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348585: funcgraph_entry:        0.236 us   |              spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348585: funcgraph_entry:        0.331 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348586: funcgraph_entry:                   |              zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348586: funcgraph_entry:        0.299 us   |                zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348586: funcgraph_entry:        0.364 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.348587: funcgraph_exit:         0.863 us   |              }
      z_wr_iss/6-31859 [005] 162723.348587: funcgraph_exit:         4.790 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348587: funcgraph_exit:       + 20.350 us  |            }
      z_wr_iss/1-31854 [009] 162723.348587: funcgraph_entry:                   |            zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348587: funcgraph_exit:         5.969 us   |                }
      z_wr_iss/1-31854 [009] 162723.348587: funcgraph_entry:                   |              zio_create() {
      z_wr_iss/6-31859 [005] 162723.348587: funcgraph_exit:         7.510 us   |              }
      z_wr_iss/1-31854 [009] 162723.348588: funcgraph_entry:        0.436 us   |                zio_add_child();
      z_wr_iss/6-31859 [005] 162723.348588: funcgraph_exit:       + 14.117 us  |            }
      z_wr_iss/6-31859 [005] 162723.348589: funcgraph_exit:       + 17.155 us  |          }
      z_wr_iss/1-31854 [009] 162723.348589: funcgraph_exit:         1.295 us   |              }
      z_wr_iss/6-31859 [005] 162723.348589: funcgraph_entry:        0.328 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348589: funcgraph_exit:         1.860 us   |            }
      z_wr_iss/1-31854 [009] 162723.348589: funcgraph_entry:                   |            zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348589: funcgraph_entry:        0.339 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348589: funcgraph_entry:        0.263 us   |              spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348590: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348590: funcgraph_entry:        0.290 us   |              spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348590: funcgraph_entry:        0.315 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348591: funcgraph_entry:                   |              zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348591: funcgraph_entry:        0.332 us   |                zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.348591: funcgraph_exit:         0.944 us   |          }
      z_wr_iss/6-31859 [005] 162723.348591: funcgraph_exit:       + 21.160 us  |        }
      z_wr_iss/6-31859 [005] 162723.348591: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.348592: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.348592: funcgraph_entry:        0.368 us   |                zio_push_transform();
      z_wr_iss/6-31859 [005] 162723.348592: funcgraph_entry:        0.460 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348593: funcgraph_entry:        0.245 us   |                spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348593: funcgraph_entry:                   |                vdev_tier_io_start() {
      z_wr_iss/6-31859 [005] 162723.348593: funcgraph_exit:         1.368 us   |          }
      z_wr_iss/6-31859 [005] 162723.348593: funcgraph_exit:         1.907 us   |        }
      z_wr_iss/6-31859 [005] 162723.348594: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348594: funcgraph_entry:        0.264 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348594: funcgraph_entry:                   |                  vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348594: funcgraph_entry:        0.260 us   |                    vdev_readable();
      z_wr_iss/6-31859 [005] 162723.348594: funcgraph_entry:        0.250 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348595: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348595: funcgraph_entry:        0.290 us   |                    vdev_readable();
      z_wr_iss/6-31859 [005] 162723.348595: funcgraph_entry:        0.402 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.348595: funcgraph_exit:         1.584 us   |                  }
      z_wr_iss/6-31859 [005] 162723.348596: funcgraph_entry:        0.722 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.348596: funcgraph_entry:                   |                  zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348597: funcgraph_entry:                   |                    zio_create() {
      z_wr_iss/1-31854 [009] 162723.348597: funcgraph_entry:        0.531 us   |                      zio_add_child();
      z_wr_iss/6-31859 [005] 162723.348597: funcgraph_entry:        0.280 us   |            spa_writeable();
      z_wr_iss/6-31859 [005] 162723.348598: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.348598: funcgraph_exit:         1.333 us   |                    }
      z_wr_iss/1-31854 [009] 162723.348598: funcgraph_exit:         2.068 us   |                  }
      z_wr_iss/6-31859 [005] 162723.348599: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348599: funcgraph_entry:                   |                  zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348599: funcgraph_entry:        0.275 us   |                    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348599: funcgraph_entry:        0.496 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348600: funcgraph_entry:        0.288 us   |                    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348600: funcgraph_entry:        0.343 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348600: funcgraph_entry:                   |                    zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348600: funcgraph_entry:        0.258 us   |                      spa_writeable();
      z_wr_iss/6-31859 [005] 162723.348601: funcgraph_exit:         2.072 us   |              }
      z_wr_iss/1-31854 [009] 162723.348601: funcgraph_entry:                   |                      vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.348601: funcgraph_entry:        0.271 us   |                        vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348602: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348602: funcgraph_entry:        0.276 us   |                        vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348602: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.348602: funcgraph_entry:        0.296 us   |                        vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348603: funcgraph_entry:        0.476 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348603: funcgraph_entry:        0.247 us   |                        vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348603: funcgraph_exit:         1.383 us   |                }
      z_wr_iss/1-31854 [009] 162723.348603: funcgraph_entry:        0.252 us   |                        vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.348604: funcgraph_exit:         1.961 us   |              }
      z_wr_iss/6-31859 [005] 162723.348604: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.348604: funcgraph_entry:        0.315 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348604: funcgraph_entry:        0.332 us   |                        vdev_queue_io_to_issue();
      z_wr_iss/6-31859 [005] 162723.348605: funcgraph_entry:        0.257 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348605: funcgraph_exit:         4.184 us   |                      }
      z_wr_iss/1-31854 [009] 162723.348605: funcgraph_exit:         5.324 us   |                    }
      z_wr_iss/6-31859 [005] 162723.348605: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348606: funcgraph_exit:         6.882 us   |                  }
      z_wr_iss/6-31859 [005] 162723.348606: funcgraph_entry:        0.323 us   |                  spa_writeable();
      z_wr_iss/6-31859 [005] 162723.348606: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.348606: funcgraph_exit:       + 13.487 us  |                }
      z_wr_iss/6-31859 [005] 162723.348607: funcgraph_entry:        0.263 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348607: funcgraph_exit:       + 16.175 us  |              }
      z_wr_iss/1-31854 [009] 162723.348607: funcgraph_entry:        0.252 us   |              spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348607: funcgraph_entry:        0.346 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348608: funcgraph_entry:        0.253 us   |              spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348608: funcgraph_entry:        0.249 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348608: funcgraph_entry:                   |              zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348608: funcgraph_entry:        0.280 us   |                zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348608: funcgraph_entry:        0.289 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348609: funcgraph_exit:         0.784 us   |              }
      z_wr_iss/1-31854 [009] 162723.348609: funcgraph_exit:       + 19.900 us  |            }
      z_wr_iss/6-31859 [005] 162723.348609: funcgraph_entry:        0.360 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.348609: funcgraph_exit:       + 76.243 us  |          }
      z_wr_iss/1-31854 [009] 162723.348610: funcgraph_exit:       + 78.657 us  |        }
      z_wr_iss/6-31859 [005] 162723.348610: funcgraph_exit:         3.532 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348610: funcgraph_entry:        0.268 us   |        spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348610: funcgraph_exit:         4.737 us   |                }
      z_wr_iss/6-31859 [005] 162723.348610: funcgraph_exit:         6.427 us   |              }
      z_wr_iss/1-31854 [009] 162723.348610: funcgraph_entry:        0.248 us   |        spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348611: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348611: funcgraph_entry:        0.288 us   |          zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348611: funcgraph_exit:       + 13.447 us  |            }
      z_wr_iss/6-31859 [005] 162723.348612: funcgraph_exit:       + 16.741 us  |          }
      z_wr_iss/1-31854 [009] 162723.348612: funcgraph_exit:         0.806 us   |        }
      z_wr_iss/6-31859 [005] 162723.348612: funcgraph_entry:        0.263 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348612: funcgraph_exit:       ! 154.267 us |      }
      z_wr_iss/1-31854 [009] 162723.348612: funcgraph_entry:        0.252 us   |      spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.348612: funcgraph_entry:        0.263 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348613: funcgraph_entry:        1.105 us   |      zio_taskq_member();
      z_wr_iss/6-31859 [005] 162723.348613: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.348613: funcgraph_entry:        0.271 us   |            zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.348614: funcgraph_exit:         0.848 us   |          }
      z_wr_iss/6-31859 [005] 162723.348614: funcgraph_exit:       + 20.439 us  |        }
      z_wr_iss/6-31859 [005] 162723.348614: funcgraph_exit:       + 77.296 us  |      }
      z_wr_iss/1-31854 [009] 162723.348614: funcgraph_entry:        0.348 us   |      spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.348615: funcgraph_exit:       + 78.487 us  |    }
      z_wr_iss/6-31859 [005] 162723.348615: funcgraph_entry:        0.291 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348615: funcgraph_entry:                   |      zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.348615: funcgraph_entry:        0.273 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348616: funcgraph_entry:        0.586 us   |        spa_config_enter();
      z_wr_iss/6-31859 [005] 162723.348616: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.348616: funcgraph_entry:        0.257 us   |      zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348617: funcgraph_entry:                   |        vdev_mirror_io_start() {
      z_wr_iss/6-31859 [005] 162723.348617: funcgraph_exit:         0.731 us   |    }
      z_wr_iss/6-31859 [005] 162723.348617: funcgraph_exit:       ! 385.908 us |  }
      z_wr_iss/1-31854 [009] 162723.348617: funcgraph_entry:                   |          vdev_mirror_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348618: funcgraph_entry:        3.240 us   |            spa_get_random();
      z_wr_iss/1-31854 [009] 162723.348622: funcgraph_entry:        0.515 us   |            vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348623: funcgraph_entry:        0.685 us   |            vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348624: funcgraph_entry:        0.555 us   |            vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348625: funcgraph_exit:         8.307 us   |          }
      z_wr_iss/1-31854 [009] 162723.348626: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348626: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/1-31854 [009] 162723.348627: funcgraph_entry:        1.058 us   |              zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348629: funcgraph_exit:         2.470 us   |            }
      z_wr_iss/1-31854 [009] 162723.348629: funcgraph_exit:         3.409 us   |          }
      z_wr_iss/1-31854 [009] 162723.348630: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348630: funcgraph_entry:        0.467 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348631: funcgraph_entry:        0.574 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348632: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348633: funcgraph_entry:        0.810 us   |              zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.348635: funcgraph_entry:        0.796 us   |              zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.348636: funcgraph_entry:        0.735 us   |              spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348637: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.348639: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348640: funcgraph_entry:        0.412 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348640: funcgraph_entry:        0.500 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348641: funcgraph_exit:         2.776 us   |                }
      z_wr_iss/1-31854 [009] 162723.348643: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348643: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/1-31854 [009] 162723.348644: funcgraph_entry:        0.909 us   |                    zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348645: funcgraph_exit:         1.980 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348646: funcgraph_exit:         2.717 us   |                }
      z_wr_iss/1-31854 [009] 162723.348646: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348646: funcgraph_entry:        0.289 us   |                  spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348647: funcgraph_entry:        0.256 us   |                  spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348647: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348648: funcgraph_entry:        0.279 us   |                    spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348648: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.348652: funcgraph_entry:        0.308 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348652: funcgraph_entry:        0.282 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348653: funcgraph_entry:        0.267 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348653: funcgraph_entry:        0.252 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348654: funcgraph_entry:        0.337 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348655: funcgraph_entry:        0.417 us   |                      vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.348656: funcgraph_exit:         7.356 us   |                    }
      z_wr_iss/1-31854 [009] 162723.348656: funcgraph_exit:         8.521 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348656: funcgraph_exit:       + 10.224 us  |                }
      z_wr_iss/1-31854 [009] 162723.348657: funcgraph_exit:       + 19.808 us  |              }
      z_wr_iss/1-31854 [009] 162723.348657: funcgraph_exit:       + 25.217 us  |            }
      z_wr_iss/1-31854 [009] 162723.348658: funcgraph_entry:        0.282 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348658: funcgraph_entry:        0.250 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348659: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348659: funcgraph_entry:        0.325 us   |              zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348660: funcgraph_exit:         0.932 us   |            }
      z_wr_iss/1-31854 [009] 162723.348660: funcgraph_exit:       + 30.284 us  |          }
      z_wr_iss/1-31854 [009] 162723.348660: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348660: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/1-31854 [009] 162723.348661: funcgraph_entry:        0.578 us   |              zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348662: funcgraph_exit:         1.486 us   |            }
      z_wr_iss/1-31854 [009] 162723.348662: funcgraph_exit:         2.037 us   |          }
      z_wr_iss/1-31854 [009] 162723.348662: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348663: funcgraph_entry:        0.249 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348663: funcgraph_entry:        0.249 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348664: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348664: funcgraph_entry:        0.296 us   |              zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.348665: funcgraph_entry:        0.402 us   |              zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.348666: funcgraph_entry:        0.315 us   |              spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348667: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.348667: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348668: funcgraph_entry:        0.302 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348669: funcgraph_entry:        0.306 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348669: funcgraph_exit:         1.820 us   |                }
      z_wr_iss/1-31854 [009] 162723.348670: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348670: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/1-31854 [009] 162723.348671: funcgraph_entry:        0.504 us   |                    zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348672: funcgraph_exit:         1.382 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348672: funcgraph_exit:         1.971 us   |                }
      z_wr_iss/1-31854 [009] 162723.348672: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348673: funcgraph_entry:        0.256 us   |                  spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348673: funcgraph_entry:        0.308 us   |                  spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348674: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348674: funcgraph_entry:        0.264 us   |                    spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348675: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.348675: funcgraph_entry:        0.250 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348676: funcgraph_entry:        0.266 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348676: funcgraph_entry:        0.362 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348677: funcgraph_entry:        0.289 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348678: funcgraph_entry:        0.339 us   |                      vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.348678: funcgraph_exit:         3.422 us   |                    }
      z_wr_iss/1-31854 [009] 162723.348679: funcgraph_exit:         4.603 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348679: funcgraph_exit:         6.437 us   |                }
      z_wr_iss/1-31854 [009] 162723.348680: funcgraph_exit:       + 12.797 us  |              }
      z_wr_iss/1-31854 [009] 162723.348680: funcgraph_exit:       + 15.964 us  |            }
      z_wr_iss/1-31854 [009] 162723.348680: funcgraph_entry:        0.308 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348681: funcgraph_entry:        0.266 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348681: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348681: funcgraph_entry:        0.285 us   |              zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348682: funcgraph_exit:         0.842 us   |            }
      z_wr_iss/1-31854 [009] 162723.348682: funcgraph_exit:       + 19.755 us  |          }
      z_wr_iss/1-31854 [009] 162723.348683: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348683: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/1-31854 [009] 162723.348683: funcgraph_entry:        0.504 us   |              zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348684: funcgraph_exit:         1.354 us   |            }
      z_wr_iss/1-31854 [009] 162723.348684: funcgraph_exit:         1.912 us   |          }
      z_wr_iss/1-31854 [009] 162723.348685: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348685: funcgraph_entry:        0.248 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348685: funcgraph_entry:        0.243 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348686: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348686: funcgraph_entry:        0.306 us   |              zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.348687: funcgraph_entry:        0.337 us   |              zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.348688: funcgraph_entry:        0.249 us   |              spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348688: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.348689: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348690: funcgraph_entry:        0.260 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348690: funcgraph_entry:        0.247 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348691: funcgraph_exit:         1.703 us   |                }
      z_wr_iss/1-31854 [009] 162723.348692: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348692: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/1-31854 [009] 162723.348693: funcgraph_entry:        0.465 us   |                    zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348693: funcgraph_exit:         1.309 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348694: funcgraph_exit:         1.826 us   |                }
      z_wr_iss/1-31854 [009] 162723.348694: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348694: funcgraph_entry:        0.309 us   |                  spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348695: funcgraph_entry:        0.258 us   |                  spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348695: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348695: funcgraph_entry:        0.273 us   |                    spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348696: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.348696: funcgraph_entry:        0.258 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348697: funcgraph_entry:        0.300 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348697: funcgraph_entry:        0.273 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348698: funcgraph_entry:        0.269 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348699: funcgraph_entry:        0.349 us   |                      vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.348699: funcgraph_exit:         3.331 us   |                    }
      z_wr_iss/1-31854 [009] 162723.348699: funcgraph_exit:         4.372 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348700: funcgraph_exit:         5.929 us   |                }
      z_wr_iss/1-31854 [009] 162723.348700: funcgraph_exit:       + 11.989 us  |              }
      z_wr_iss/1-31854 [009] 162723.348701: funcgraph_exit:       + 14.809 us  |            }
      z_wr_iss/1-31854 [009] 162723.348701: funcgraph_entry:        0.460 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348702: funcgraph_entry:        0.268 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348702: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348702: funcgraph_entry:        0.277 us   |              zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348703: funcgraph_exit:         0.789 us   |            }
      z_wr_iss/1-31854 [009] 162723.348703: funcgraph_exit:       + 18.575 us  |          }
      z_wr_iss/1-31854 [009] 162723.348704: funcgraph_exit:       + 87.063 us  |        }
      z_wr_iss/1-31854 [009] 162723.348704: funcgraph_exit:       + 88.870 us  |      }
      z_wr_iss/1-31854 [009] 162723.348704: funcgraph_entry:        0.262 us   |      spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348705: funcgraph_entry:        0.247 us   |      spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348705: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348706: funcgraph_entry:        0.257 us   |        zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348706: funcgraph_exit:         0.742 us   |      }
      z_wr_iss/1-31854 [009] 162723.348706: funcgraph_exit:       ! 403.655 us |    }
      z_wr_iss/1-31854 [009] 162723.348707: funcgraph_entry:        0.254 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348707: funcgraph_entry:        1.189 us   |    zio_taskq_member();
      z_wr_iss/1-31854 [009] 162723.348709: funcgraph_entry:        0.234 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348709: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348709: funcgraph_entry:        0.291 us   |      spa_config_enter();
      z_wr_iss/1-31854 [009] 162723.348710: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/1-31854 [009] 162723.348710: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348711: funcgraph_entry:        2.190 us   |          spa_get_random();
      z_wr_iss/1-31854 [009] 162723.348713: funcgraph_entry:        0.271 us   |          vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348714: funcgraph_entry:        0.298 us   |          vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348714: funcgraph_entry:        0.269 us   |          vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.348715: funcgraph_exit:         4.582 us   |        }
      z_wr_iss/1-31854 [009] 162723.348715: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348715: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.348716: funcgraph_entry:        0.527 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348717: funcgraph_exit:         1.419 us   |          }
      z_wr_iss/1-31854 [009] 162723.348717: funcgraph_exit:         1.940 us   |        }
      z_wr_iss/1-31854 [009] 162723.348717: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348717: funcgraph_entry:        0.251 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348718: funcgraph_entry:        0.246 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348718: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348719: funcgraph_entry:        0.904 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.348721: funcgraph_entry:        0.366 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.348722: funcgraph_entry:        0.257 us   |            spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348722: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.348723: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348723: funcgraph_entry:        0.350 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348724: funcgraph_entry:        0.263 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348725: funcgraph_exit:         1.831 us   |              }
      z_wr_iss/1-31854 [009] 162723.348726: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348726: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.348727: funcgraph_entry:        0.575 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348727: funcgraph_exit:         1.443 us   |                }
      z_wr_iss/1-31854 [009] 162723.348728: funcgraph_exit:         2.022 us   |              }
      z_wr_iss/1-31854 [009] 162723.348728: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348728: funcgraph_entry:        0.277 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348729: funcgraph_entry:        0.259 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348729: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348730: funcgraph_entry:        0.249 us   |                  spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348730: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.348730: funcgraph_entry:        0.285 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348731: funcgraph_entry:        0.292 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348731: funcgraph_entry:        0.282 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348732: funcgraph_entry:        0.595 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348733: funcgraph_entry:        0.276 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348734: funcgraph_entry:        0.376 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.348735: funcgraph_exit:         4.692 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348735: funcgraph_exit:         5.766 us   |                }
      z_wr_iss/1-31854 [009] 162723.348735: funcgraph_exit:         7.361 us   |              }
      z_wr_iss/1-31854 [009] 162723.348736: funcgraph_exit:       + 14.035 us  |            }
      z_wr_iss/1-31854 [009] 162723.348736: funcgraph_exit:       + 18.003 us  |          }
      z_wr_iss/1-31854 [009] 162723.348737: funcgraph_entry:        0.287 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348737: funcgraph_entry:        0.244 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348738: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348738: funcgraph_entry:        0.273 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348739: funcgraph_exit:         0.786 us   |          }
      z_wr_iss/1-31854 [009] 162723.348739: funcgraph_exit:       + 21.675 us  |        }
      z_wr_iss/1-31854 [009] 162723.348739: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348739: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.348740: funcgraph_entry:        0.464 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348741: funcgraph_exit:         1.311 us   |          }
      z_wr_iss/1-31854 [009] 162723.348741: funcgraph_exit:         1.855 us   |        }
      z_wr_iss/1-31854 [009] 162723.348741: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348741: funcgraph_entry:        0.259 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348742: funcgraph_entry:        0.255 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348742: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348743: funcgraph_entry:        0.280 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.348744: funcgraph_entry:        0.393 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.348745: funcgraph_entry:        0.257 us   |            spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348745: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.348746: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348747: funcgraph_entry:        0.278 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348747: funcgraph_entry:        0.305 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348748: funcgraph_exit:         1.742 us   |              }
      z_wr_iss/1-31854 [009] 162723.348749: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348749: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.348750: funcgraph_entry:        0.482 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348750: funcgraph_exit:         1.293 us   |                }
      z_wr_iss/1-31854 [009] 162723.348751: funcgraph_exit:         1.806 us   |              }
      z_wr_iss/1-31854 [009] 162723.348751: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348751: funcgraph_entry:        0.274 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348752: funcgraph_entry:        0.261 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348752: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348752: funcgraph_entry:        0.290 us   |                  spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348753: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.348753: funcgraph_entry:        0.242 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348754: funcgraph_entry:        0.273 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348754: funcgraph_entry:        0.287 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348755: funcgraph_entry:        0.285 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348755: funcgraph_entry:        0.303 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348756: funcgraph_entry:        0.311 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.348757: funcgraph_exit:         3.779 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348757: funcgraph_exit:         4.860 us   |                }
      z_wr_iss/1-31854 [009] 162723.348757: funcgraph_exit:         6.423 us   |              }
      z_wr_iss/1-31854 [009] 162723.348758: funcgraph_exit:       + 12.543 us  |            }
      z_wr_iss/1-31854 [009] 162723.348758: funcgraph_exit:       + 15.754 us  |          }
      z_wr_iss/1-31854 [009] 162723.348758: funcgraph_entry:        0.252 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348759: funcgraph_entry:        0.259 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348759: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348760: funcgraph_entry:        0.263 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348760: funcgraph_exit:         0.754 us   |          }
      z_wr_iss/1-31854 [009] 162723.348761: funcgraph_exit:       + 19.450 us  |        }
      z_wr_iss/1-31854 [009] 162723.348761: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348761: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.348762: funcgraph_entry:        0.443 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348762: funcgraph_exit:         1.270 us   |          }
      z_wr_iss/1-31854 [009] 162723.348763: funcgraph_exit:         1.822 us   |        }
      z_wr_iss/1-31854 [009] 162723.348763: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348763: funcgraph_entry:        0.301 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348764: funcgraph_entry:        0.244 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348764: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348765: funcgraph_entry:        0.353 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.348766: funcgraph_entry:        0.330 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.348767: funcgraph_entry:        0.252 us   |            spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348768: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.348768: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.348769: funcgraph_entry:        0.289 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348769: funcgraph_entry:        0.261 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.348770: funcgraph_exit:         1.684 us   |              }
      z_wr_iss/1-31854 [009] 162723.348771: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.348771: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.348772: funcgraph_entry:        0.527 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.348773: funcgraph_exit:         1.566 us   |                }
      z_wr_iss/1-31854 [009] 162723.348773: funcgraph_exit:         2.093 us   |              }
      z_wr_iss/1-31854 [009] 162723.348773: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.348774: funcgraph_entry:        0.243 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348774: funcgraph_entry:        0.240 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348775: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.348775: funcgraph_entry:        0.313 us   |                  spa_writeable();
      z_wr_iss/1-31854 [009] 162723.348775: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.348776: funcgraph_entry:        0.273 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348776: funcgraph_entry:        0.245 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348777: funcgraph_entry:        0.278 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.348777: funcgraph_entry:        0.392 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.348778: funcgraph_exit:         2.702 us   |                  }
      z_wr_iss/1-31854 [009] 162723.348778: funcgraph_exit:         3.779 us   |                }
      z_wr_iss/1-31854 [009] 162723.348779: funcgraph_exit:         5.260 us   |              }
      z_wr_iss/1-31854 [009] 162723.348779: funcgraph_exit:       + 11.643 us  |            }
      z_wr_iss/1-31854 [009] 162723.348779: funcgraph_exit:       + 15.120 us  |          }
      z_wr_iss/1-31854 [009] 162723.348780: funcgraph_entry:        0.247 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348780: funcgraph_entry:        0.271 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348781: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348781: funcgraph_entry:        0.379 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348782: funcgraph_exit:         0.926 us   |          }
      z_wr_iss/1-31854 [009] 162723.348782: funcgraph_exit:       + 18.953 us  |        }
      z_wr_iss/1-31854 [009] 162723.348782: funcgraph_exit:       + 72.344 us  |      }
      z_wr_iss/1-31854 [009] 162723.348782: funcgraph_exit:       + 73.397 us  |    }
      z_wr_iss/1-31854 [009] 162723.348783: funcgraph_entry:        0.275 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.348783: funcgraph_entry:        0.268 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.348784: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.348784: funcgraph_entry:        0.298 us   |      zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.348785: funcgraph_exit:         0.820 us   |    }
      z_wr_iss/1-31854 [009] 162723.348785: funcgraph_exit:       ! 800.031 us |  }
      z_wr_iss/2-31855 [002] 162723.350650: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/2-31855 [002] 162723.350651: funcgraph_entry:        0.301 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.350651: funcgraph_entry:        0.271 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.350652: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/2-31855 [002] 162723.350652: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/2-31855 [002] 162723.350653: funcgraph_entry:        3.264 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/2-31855 [002] 162723.350656: funcgraph_exit:         3.877 us   |      }
      z_wr_iss/2-31855 [002] 162723.350657: funcgraph_exit:         4.367 us   |    }
      z_wr_iss/2-31855 [002] 162723.350657: funcgraph_exit:         7.410 us   |  }
      z_wr_iss/2-31855 [002] 162723.350657: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/2-31855 [002] 162723.350658: funcgraph_entry:        0.236 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.350658: funcgraph_entry:        0.252 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350659: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/2-31855 [002] 162723.350659: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/2-31855 [002] 162723.350659: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/4-31857 [003] 162723.350659: funcgraph_entry:        0.305 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.350659: funcgraph_entry:        1.926 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/4-31857 [003] 162723.350660: funcgraph_entry:        0.284 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350661: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/4-31857 [003] 162723.350661: funcgraph_entry:        0.325 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.350661: funcgraph_exit:         2.458 us   |      }
      z_wr_iss/2-31855 [002] 162723.350662: funcgraph_exit:         2.925 us   |    }
      z_wr_iss/4-31857 [003] 162723.350662: funcgraph_entry:        0.338 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.350662: funcgraph_exit:         4.558 us   |  }
      z_wr_iss/2-31855 [002] 162723.350662: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/4-31857 [003] 162723.350663: funcgraph_entry:        0.757 us   |      zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.350663: funcgraph_entry:        0.236 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.350663: funcgraph_entry:        0.235 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350664: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/2-31855 [002] 162723.350664: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/2-31855 [002] 162723.350664: funcgraph_entry:        0.365 us   |      zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.350664: funcgraph_entry:      + 26.429 us  |        lzjb_compress();
      z_wr_iss/2-31855 [002] 162723.350665: funcgraph_entry:        0.235 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.350665: funcgraph_entry:        0.262 us   |      spa_sync_pass();
      z_wr_iss/2-31855 [002] 162723.350666: funcgraph_entry:        0.484 us   |      zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.350667: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/2-31855 [002] 162723.350667: funcgraph_entry:      + 11.829 us  |        lzjb_compress();
      z_wr_iss/7-31860 [004] 162723.350672: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/7-31860 [004] 162723.350673: funcgraph_entry:        0.306 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350674: funcgraph_entry:        0.271 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350674: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/7-31860 [004] 162723.350675: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/7-31860 [004] 162723.350675: funcgraph_entry:        3.033 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/7-31860 [004] 162723.350678: funcgraph_exit:         3.664 us   |      }
      z_wr_iss/7-31860 [004] 162723.350679: funcgraph_exit:         4.230 us   |    }
      z_wr_iss/7-31860 [004] 162723.350679: funcgraph_exit:         7.337 us   |  }
      z_wr_iss/7-31860 [004] 162723.350679: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/2-31855 [002] 162723.350680: funcgraph_exit:       + 13.120 us  |      }
      z_wr_iss/7-31860 [004] 162723.350680: funcgraph_entry:        0.248 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.350680: funcgraph_entry:        0.643 us   |      zio_push_transform();
      z_wr_iss/7-31860 [004] 162723.350680: funcgraph_entry:        0.241 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350681: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/7-31860 [004] 162723.350681: funcgraph_entry:        0.371 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.350681: funcgraph_exit:       + 17.329 us  |    }
      z_wr_iss/2-31855 [002] 162723.350682: funcgraph_entry:        0.221 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350682: funcgraph_entry:        0.280 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.350682: funcgraph_entry:        0.236 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350682: funcgraph_entry:        0.240 us   |      spa_sync_pass();
      z_wr_iss/2-31855 [002] 162723.350683: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/7-31860 [004] 162723.350683: funcgraph_entry:        0.549 us   |      zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.350683: funcgraph_entry:        0.482 us   |      zio_checksum_compute();
      z_wr_iss/7-31860 [004] 162723.350684: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/2-31855 [002] 162723.350684: funcgraph_exit:         1.001 us   |    }
      z_wr_iss/2-31855 [002] 162723.350684: funcgraph_entry:        0.222 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350684: funcgraph_entry:        9.082 us   |        lzjb_compress();
      z_wr_iss/2-31855 [002] 162723.350684: funcgraph_entry:        0.259 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.350685: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/2-31855 [002] 162723.350685: funcgraph_entry:        0.257 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.350686: funcgraph_entry:        0.239 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.350686: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/2-31855 [002] 162723.350687: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/2-31855 [002] 162723.350687: funcgraph_entry:        0.386 us   |          zrl_add();
      z_wr_iss/2-31855 [002] 162723.350688: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350688: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350688: funcgraph_entry:        0.339 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.350689: funcgraph_exit:         0.946 us   |            }
      z_wr_iss/2-31855 [002] 162723.350689: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350689: funcgraph_entry:        0.224 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.350690: funcgraph_exit:         0.713 us   |            }
      z_wr_iss/2-31855 [002] 162723.350690: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350690: funcgraph_entry:        0.283 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.350691: funcgraph_exit:         0.720 us   |            }
      z_wr_iss/4-31857 [003] 162723.350691: funcgraph_exit:       + 27.293 us  |      }
      z_wr_iss/2-31855 [002] 162723.350691: funcgraph_exit:         3.403 us   |          }
      z_wr_iss/2-31855 [002] 162723.350691: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.350691: funcgraph_entry:        0.482 us   |      zio_push_transform();
      z_wr_iss/2-31855 [002] 162723.350691: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350692: funcgraph_entry:        0.244 us   |              vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.350692: funcgraph_exit:       + 31.355 us  |    }
      z_wr_iss/2-31855 [002] 162723.350692: funcgraph_exit:         0.722 us   |            }
      z_wr_iss/2-31855 [002] 162723.350692: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.350692: funcgraph_entry:        0.313 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.350693: funcgraph_entry:        0.232 us   |              vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.350693: funcgraph_entry:        0.294 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.350693: funcgraph_exit:         0.671 us   |            }
      z_wr_iss/2-31855 [002] 162723.350693: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/7-31860 [004] 162723.350693: funcgraph_exit:         9.813 us   |      }
      z_wr_iss/2-31855 [002] 162723.350694: funcgraph_entry:        0.273 us   |              vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.350694: funcgraph_entry:        0.414 us   |      zio_push_transform();
      z_wr_iss/4-31857 [003] 162723.350694: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/2-31855 [002] 162723.350694: funcgraph_exit:         0.717 us   |            }
      z_wr_iss/4-31857 [003] 162723.350694: funcgraph_entry:        0.723 us   |      zio_checksum_compute();
      z_wr_iss/2-31855 [002] 162723.350694: funcgraph_exit:         3.150 us   |          }
      z_wr_iss/7-31860 [004] 162723.350694: funcgraph_exit:       + 13.679 us  |    }
      z_wr_iss/2-31855 [002] 162723.350695: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/7-31860 [004] 162723.350695: funcgraph_entry:        0.221 us   |    spa_get_dsl();
      z_wr_iss/5-31858 [001] 162723.350695: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/2-31855 [002] 162723.350695: funcgraph_entry:        0.235 us   |            spa_version();
      z_wr_iss/4-31857 [003] 162723.350695: funcgraph_exit:         1.357 us   |    }
      z_wr_iss/7-31860 [004] 162723.350695: funcgraph_entry:        0.234 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350695: funcgraph_entry:        0.295 us   |    spa_get_dsl();
      z_wr_iss/5-31858 [001] 162723.350695: funcgraph_entry:        0.540 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.350696: funcgraph_exit:         0.942 us   |          }
      z_wr_iss/7-31860 [004] 162723.350696: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/2-31855 [002] 162723.350696: funcgraph_entry:        0.260 us   |          zrl_remove();
      z_wr_iss/4-31857 [003] 162723.350696: funcgraph_entry:        1.446 us   |    zio_taskq_member();
      z_wr_iss/7-31860 [004] 162723.350696: funcgraph_entry:        0.486 us   |      zio_checksum_compute();
      z_wr_iss/2-31855 [002] 162723.350697: funcgraph_exit:         9.957 us   |        }
      z_wr_iss/5-31858 [001] 162723.350697: funcgraph_entry:        0.492 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350697: funcgraph_exit:         1.011 us   |    }
      z_wr_iss/2-31855 [002] 162723.350697: funcgraph_entry:        0.347 us   |        arc_cksum_compute();
      z_wr_iss/7-31860 [004] 162723.350697: funcgraph_entry:        0.269 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.350697: funcgraph_exit:       + 11.154 us  |      }
      z_wr_iss/7-31860 [004] 162723.350698: funcgraph_entry:        0.238 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350698: funcgraph_entry:        0.320 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.350698: funcgraph_entry:        0.318 us   |      zio_walk_parents();
      z_wr_iss/5-31858 [001] 162723.350698: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/7-31860 [004] 162723.350698: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/7-31860 [004] 162723.350698: funcgraph_entry:        0.236 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [001] 162723.350698: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/2-31855 [002] 162723.350698: funcgraph_entry:        0.277 us   |      zio_walk_parents();
      z_wr_iss/4-31857 [003] 162723.350698: funcgraph_entry:                   |    zio_dva_allocate() {
      z_wr_iss/7-31860 [004] 162723.350699: funcgraph_entry:        0.240 us   |      zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.350699: funcgraph_entry:        0.332 us   |      spa_normal_class();
      z_wr_iss/5-31858 [001] 162723.350699: funcgraph_entry:        2.272 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/2-31855 [002] 162723.350699: funcgraph_exit:       + 14.057 us  |    }
      z_wr_iss/2-31855 [002] 162723.350699: funcgraph_entry:        0.219 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350699: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/4-31857 [003] 162723.350700: funcgraph_entry:                   |      metaslab_alloc() {
      z_wr_iss/7-31860 [004] 162723.350700: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/2-31855 [002] 162723.350700: funcgraph_entry:        1.393 us   |    zio_taskq_member();
      z_wr_iss/4-31857 [003] 162723.350700: funcgraph_entry:        0.499 us   |        spa_config_enter();
      z_wr_iss/7-31860 [004] 162723.350700: funcgraph_entry:        0.372 us   |          zrl_add();
      z_wr_iss/7-31860 [004] 162723.350701: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.350701: funcgraph_entry:        0.355 us   |        vdev_allocatable();
      z_wr_iss/7-31860 [004] 162723.350701: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/7-31860 [004] 162723.350701: funcgraph_entry:        0.297 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.350702: funcgraph_entry:        0.269 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350702: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/5-31858 [001] 162723.350702: funcgraph_exit:         3.454 us   |      }
      z_wr_iss/7-31860 [004] 162723.350702: funcgraph_exit:         0.878 us   |            }
      z_wr_iss/4-31857 [003] 162723.350702: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/7-31860 [004] 162723.350702: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350702: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.350702: funcgraph_entry:        0.251 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [001] 162723.350702: funcgraph_exit:         4.577 us   |    }
      z_wr_iss/2-31855 [002] 162723.350702: funcgraph_entry:        0.329 us   |      spa_config_enter();
      z_wr_iss/4-31857 [003] 162723.350703: funcgraph_entry:        0.399 us   |            vdev_default_asize();
      z_wr_iss/7-31860 [004] 162723.350703: funcgraph_exit:         0.725 us   |            }
      z_wr_iss/5-31858 [001] 162723.350703: funcgraph_exit:         8.170 us   |  }
      z_wr_iss/7-31860 [004] 162723.350703: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350703: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/4-31857 [003] 162723.350703: funcgraph_entry:        0.308 us   |            vdev_default_asize();
      z_wr_iss/7-31860 [004] 162723.350703: funcgraph_entry:        0.254 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.350703: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.350704: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/7-31860 [004] 162723.350704: funcgraph_exit:         0.715 us   |            }
      z_wr_iss/2-31855 [002] 162723.350704: funcgraph_entry:        2.851 us   |          spa_get_random();
      z_wr_iss/4-31857 [003] 162723.350704: funcgraph_exit:         1.886 us   |          }
      z_wr_iss/7-31860 [004] 162723.350704: funcgraph_exit:         3.348 us   |          }
      z_wr_iss/6-31859 [005] 162723.350704: funcgraph_entry:        0.287 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350704: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.350704: funcgraph_exit:         2.541 us   |        }
      z_wr_iss/7-31860 [004] 162723.350704: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/7-31860 [004] 162723.350705: funcgraph_entry:        0.250 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.350705: funcgraph_entry:        0.273 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350705: funcgraph_entry:        0.325 us   |        metaslab_activate();
      z_wr_iss/7-31860 [004] 162723.350705: funcgraph_exit:         0.719 us   |            }
      z_wr_iss/6-31859 [005] 162723.350705: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/7-31860 [004] 162723.350705: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/7-31860 [004] 162723.350706: funcgraph_entry:        0.242 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.350706: funcgraph_entry:        0.318 us   |      zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.350706: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/7-31860 [004] 162723.350706: funcgraph_exit:         0.737 us   |            }
      z_wr_iss/4-31857 [003] 162723.350706: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/6-31859 [005] 162723.350706: funcgraph_entry:        0.309 us   |      zio_wait_for_children();
      z_wr_iss/7-31860 [004] 162723.350706: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/7-31860 [004] 162723.350707: funcgraph_entry:        0.241 us   |              vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.350707: funcgraph_entry:        0.438 us   |            metaslab_pp_maxsize();
      z_wr_iss/6-31859 [005] 162723.350707: funcgraph_entry:        0.275 us   |      spa_sync_pass();
      z_wr_iss/2-31855 [002] 162723.350707: funcgraph_entry:        0.224 us   |          vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.350707: funcgraph_exit:         0.690 us   |            }
      z_wr_iss/4-31857 [003] 162723.350707: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/6-31859 [005] 162723.350707: funcgraph_entry:        0.499 us   |      zio_buf_alloc();
      z_wr_iss/7-31860 [004] 162723.350708: funcgraph_exit:         3.021 us   |          }
      z_wr_iss/4-31857 [003] 162723.350708: funcgraph_entry:        0.410 us   |              space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.350708: funcgraph_entry:        0.235 us   |          vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.350708: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/7-31860 [004] 162723.350708: funcgraph_entry:        0.252 us   |            spa_version();
      z_wr_iss/6-31859 [005] 162723.350708: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/2-31855 [002] 162723.350708: funcgraph_entry:        0.226 us   |          vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.350709: funcgraph_exit:         1.130 us   |            }
      z_wr_iss/6-31859 [005] 162723.350709: funcgraph_entry:        8.415 us   |        lzjb_compress();
      z_wr_iss/7-31860 [004] 162723.350709: funcgraph_exit:         0.908 us   |          }
      z_wr_iss/4-31857 [003] 162723.350709: funcgraph_exit:         2.622 us   |          }
      z_wr_iss/2-31855 [002] 162723.350709: funcgraph_exit:         5.585 us   |        }
      z_wr_iss/7-31860 [004] 162723.350709: funcgraph_entry:        0.264 us   |          zrl_remove();
      z_wr_iss/2-31855 [002] 162723.350709: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.350709: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/2-31855 [002] 162723.350709: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/4-31857 [003] 162723.350710: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/7-31860 [004] 162723.350710: funcgraph_exit:         9.991 us   |        }
      z_wr_iss/7-31860 [004] 162723.350710: funcgraph_entry:        0.341 us   |        arc_cksum_compute();
      z_wr_iss/4-31857 [003] 162723.350710: funcgraph_entry:        0.318 us   |              space_map_seg_compare();
      z_wr_iss/2-31855 [002] 162723.350710: funcgraph_entry:        0.480 us   |            zio_add_child();
      z_wr_iss/7-31860 [004] 162723.350711: funcgraph_exit:       + 11.252 us  |      }
      z_wr_iss/4-31857 [003] 162723.350711: funcgraph_exit:         1.042 us   |            }
      z_wr_iss/7-31860 [004] 162723.350711: funcgraph_entry:        0.332 us   |      zio_walk_parents();
      z_wr_iss/2-31855 [002] 162723.350711: funcgraph_exit:         1.486 us   |          }
      z_wr_iss/2-31855 [002] 162723.350711: funcgraph_exit:         2.000 us   |        }
      z_wr_iss/4-31857 [003] 162723.350711: funcgraph_entry:        0.386 us   |            metaslab_segsize_compare();
      z_wr_iss/7-31860 [004] 162723.350711: funcgraph_entry:        0.235 us   |      zio_walk_parents();
      z_wr_iss/2-31855 [002] 162723.350712: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/2-31855 [002] 162723.350712: funcgraph_entry:        0.217 us   |          spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350712: funcgraph_exit:       + 14.007 us  |    }
      z_wr_iss/4-31857 [003] 162723.350712: funcgraph_exit:         2.859 us   |          }
      z_wr_iss/2-31855 [002] 162723.350712: funcgraph_entry:        0.226 us   |          spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350712: funcgraph_entry:        0.218 us   |    spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350712: funcgraph_exit:         6.636 us   |        }
      z_wr_iss/2-31855 [002] 162723.350713: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.350713: funcgraph_entry:        1.230 us   |    zio_taskq_member();
      z_wr_iss/4-31857 [003] 162723.350713: funcgraph_entry:                   |        vdev_dirty() {
      z_wr_iss/2-31855 [002] 162723.350713: funcgraph_entry:        0.301 us   |            zio_buf_alloc();
      z_wr_iss/4-31857 [003] 162723.350713: funcgraph_entry:        0.394 us   |          txg_list_add();
      z_wr_iss/4-31857 [003] 162723.350714: funcgraph_entry:        0.445 us   |          txg_list_add();
      z_wr_iss/2-31855 [002] 162723.350714: funcgraph_entry:        0.314 us   |            zio_push_transform();
      z_wr_iss/7-31860 [004] 162723.350714: funcgraph_entry:        0.247 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350715: funcgraph_exit:         1.756 us   |        }
      z_wr_iss/2-31855 [002] 162723.350715: funcgraph_entry:        0.229 us   |            spa_writeable();
      z_wr_iss/7-31860 [004] 162723.350715: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.350715: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/7-31860 [004] 162723.350715: funcgraph_entry:        0.356 us   |      spa_config_enter();
      z_wr_iss/4-31857 [003] 162723.350715: funcgraph_entry:        0.323 us   |          space_map_find();
      z_wr_iss/2-31855 [002] 162723.350715: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/7-31860 [004] 162723.350716: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/7-31860 [004] 162723.350716: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.350716: funcgraph_exit:         1.341 us   |        }
      z_wr_iss/7-31860 [004] 162723.350717: funcgraph_entry:        2.986 us   |          spa_get_random();
      z_wr_iss/4-31857 [003] 162723.350717: funcgraph_entry:        0.362 us   |        vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.350717: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.350717: funcgraph_exit:         9.107 us   |      }
      z_wr_iss/4-31857 [003] 162723.350717: funcgraph_entry:        0.342 us   |        vdev_allocatable();
      z_wr_iss/6-31859 [005] 162723.350718: funcgraph_entry:        0.398 us   |      zio_push_transform();
      z_wr_iss/2-31855 [002] 162723.350718: funcgraph_entry:        0.328 us   |                vdev_readable();
      z_wr_iss/4-31857 [003] 162723.350718: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/6-31859 [005] 162723.350718: funcgraph_exit:       + 12.987 us  |    }
      z_wr_iss/4-31857 [003] 162723.350718: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/2-31855 [002] 162723.350718: funcgraph_entry:        0.261 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.350719: funcgraph_entry:        0.275 us   |    spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350719: funcgraph_entry:        0.468 us   |            vdev_default_asize();
      z_wr_iss/6-31859 [005] 162723.350719: funcgraph_entry:        0.308 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.350719: funcgraph_exit:         2.046 us   |              }
      z_wr_iss/6-31859 [005] 162723.350720: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/4-31857 [003] 162723.350720: funcgraph_entry:        0.586 us   |            vdev_default_asize();
      z_wr_iss/7-31860 [004] 162723.350720: funcgraph_entry:        0.309 us   |          vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.350720: funcgraph_entry:        0.515 us   |      zio_checksum_compute();
      z_wr_iss/7-31860 [004] 162723.350720: funcgraph_entry:        0.323 us   |          vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.350721: funcgraph_exit:         1.027 us   |    }
      z_wr_iss/7-31860 [004] 162723.350721: funcgraph_entry:        0.257 us   |          vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.350721: funcgraph_exit:         2.468 us   |          }
      z_wr_iss/2-31855 [002] 162723.350721: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.350721: funcgraph_entry:        0.260 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.350721: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/7-31860 [004] 162723.350722: funcgraph_exit:         5.490 us   |        }
      z_wr_iss/6-31859 [005] 162723.350722: funcgraph_entry:        0.292 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.350722: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/4-31857 [003] 162723.350722: funcgraph_exit:         3.739 us   |        }
      z_wr_iss/7-31860 [004] 162723.350722: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/2-31855 [002] 162723.350722: funcgraph_entry:        0.476 us   |                  zio_add_child();
      z_wr_iss/7-31860 [004] 162723.350722: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/6-31859 [005] 162723.350722: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/1-31854 [009] 162723.350723: funcgraph_entry:        0.522 us   |    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350723: funcgraph_entry:        0.268 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.350723: funcgraph_exit:         1.327 us   |                }
      z_wr_iss/7-31860 [004] 162723.350723: funcgraph_entry:        0.492 us   |            zio_add_child();
      z_wr_iss/2-31855 [002] 162723.350723: funcgraph_exit:         1.879 us   |              }
      z_wr_iss/4-31857 [003] 162723.350723: funcgraph_entry:        0.673 us   |        metaslab_activate();
      z_wr_iss/6-31859 [005] 162723.350723: funcgraph_entry:        0.276 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.350723: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/2-31855 [002] 162723.350724: funcgraph_entry:        0.216 us   |                spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350724: funcgraph_exit:         1.441 us   |          }
      z_wr_iss/6-31859 [005] 162723.350724: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/1-31854 [009] 162723.350724: funcgraph_entry:        0.559 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350724: funcgraph_exit:         1.967 us   |        }
      z_wr_iss/2-31855 [002] 162723.350724: funcgraph_entry:        0.224 us   |                spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.350724: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/7-31860 [004] 162723.350724: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.350725: funcgraph_entry:        0.330 us   |          zrl_add();
      z_wr_iss/7-31860 [004] 162723.350725: funcgraph_entry:        0.233 us   |          spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350725: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/2-31855 [002] 162723.350725: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.350725: funcgraph_entry:        0.269 us   |                  spa_writeable();
      z_wr_iss/4-31857 [003] 162723.350725: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/7-31860 [004] 162723.350725: funcgraph_entry:        0.243 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.350725: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/6-31859 [005] 162723.350725: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.350725: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350725: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/7-31860 [004] 162723.350726: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.350726: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/4-31857 [003] 162723.350726: funcgraph_entry:        0.688 us   |            metaslab_pp_maxsize();
      z_wr_iss/6-31859 [005] 162723.350726: funcgraph_entry:        0.376 us   |              vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.350726: funcgraph_entry:        0.325 us   |            zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.350726: funcgraph_exit:         0.967 us   |            }
      z_wr_iss/2-31855 [002] 162723.350726: funcgraph_entry:                   |                    vdev_queue_io_to_issue() {
      z_wr_iss/1-31854 [009] 162723.350726: funcgraph_entry:        2.796 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/6-31859 [005] 162723.350727: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350727: funcgraph_entry:        0.348 us   |                      zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.350727: funcgraph_entry:        0.317 us   |              vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.350727: funcgraph_entry:        0.318 us   |            zio_push_transform();
      z_wr_iss/4-31857 [003] 162723.350727: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/6-31859 [005] 162723.350727: funcgraph_exit:         0.803 us   |            }
      z_wr_iss/2-31855 [002] 162723.350727: funcgraph_entry:        0.315 us   |                      vdev_queue_offset_compare();
      z_wr_iss/7-31860 [004] 162723.350727: funcgraph_entry:        0.226 us   |            spa_writeable();
      z_wr_iss/4-31857 [003] 162723.350727: funcgraph_entry:        0.490 us   |              space_map_seg_compare();
      z_wr_iss/6-31859 [005] 162723.350728: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.350728: funcgraph_entry:        0.276 us   |              vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.350728: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/2-31855 [002] 162723.350728: funcgraph_entry:        0.388 us   |                      zio_buf_free();
      z_wr_iss/4-31857 [003] 162723.350728: funcgraph_exit:         1.461 us   |            }
      z_wr_iss/6-31859 [005] 162723.350728: funcgraph_exit:         0.797 us   |            }
      z_wr_iss/6-31859 [005] 162723.350729: funcgraph_exit:         3.623 us   |          }
      z_wr_iss/4-31857 [003] 162723.350729: funcgraph_exit:         3.934 us   |          }
      z_wr_iss/2-31855 [002] 162723.350729: funcgraph_entry:        0.428 us   |                      vdev_queue_io_remove();
      z_wr_iss/6-31859 [005] 162723.350729: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.350729: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.350729: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/6-31859 [005] 162723.350729: funcgraph_entry:        0.296 us   |              vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.350730: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/2-31855 [002] 162723.350730: funcgraph_exit:         3.464 us   |                    }
      z_wr_iss/1-31854 [009] 162723.350730: funcgraph_exit:         3.981 us   |      }
      z_wr_iss/6-31859 [005] 162723.350730: funcgraph_exit:         0.794 us   |            }
      z_wr_iss/7-31860 [004] 162723.350730: funcgraph_entry:        0.423 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.350730: funcgraph_exit:         4.608 us   |                  }
      z_wr_iss/4-31857 [003] 162723.350730: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/6-31859 [005] 162723.350730: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.350730: funcgraph_exit:         5.393 us   |    }
      z_wr_iss/2-31855 [002] 162723.350730: funcgraph_entry:        0.302 us   |                  vdev_accessible();
      z_wr_iss/6-31859 [005] 162723.350730: funcgraph_entry:        0.271 us   |              vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.350731: funcgraph_entry:        0.613 us   |              space_map_seg_compare();
      z_wr_iss/1-31854 [009] 162723.350731: funcgraph_exit:         9.081 us   |  }
      z_wr_iss/7-31860 [004] 162723.350731: funcgraph_entry:        0.279 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.350731: funcgraph_entry:                   |                  vdev_disk_io_start() {
      z_wr_iss/6-31859 [005] 162723.350731: funcgraph_exit:         0.796 us   |            }
      z_wr_iss/6-31859 [005] 162723.350731: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350731: funcgraph_entry:                   |                    __vdev_disk_physio() {
      z_wr_iss/6-31859 [005] 162723.350731: funcgraph_entry:        0.283 us   |              vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.350732: funcgraph_exit:         2.086 us   |              }
      z_wr_iss/6-31859 [005] 162723.350732: funcgraph_exit:         0.772 us   |            }
      z_wr_iss/4-31857 [003] 162723.350732: funcgraph_exit:         1.928 us   |            }
      z_wr_iss/1-31854 [009] 162723.350732: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/6-31859 [005] 162723.350732: funcgraph_exit:         3.336 us   |          }
      z_wr_iss/6-31859 [005] 162723.350733: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/1-31854 [009] 162723.350733: funcgraph_entry:        0.812 us   |    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350733: funcgraph_entry:        0.252 us   |            spa_version();
      z_wr_iss/4-31857 [003] 162723.350733: funcgraph_entry:        0.634 us   |            metaslab_segsize_compare();
      z_wr_iss/7-31860 [004] 162723.350734: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.350734: funcgraph_exit:         0.935 us   |          }
      z_wr_iss/7-31860 [004] 162723.350734: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/6-31859 [005] 162723.350734: funcgraph_entry:        0.264 us   |          zrl_remove();
      z_wr_iss/1-31854 [009] 162723.350734: funcgraph_entry:        0.873 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350734: funcgraph_entry:        0.431 us   |                  zio_add_child();
      z_wr_iss/4-31857 [003] 162723.350734: funcgraph_exit:         4.991 us   |          }
      z_wr_iss/6-31859 [005] 162723.350734: funcgraph_exit:       + 10.346 us  |        }
      z_wr_iss/6-31859 [005] 162723.350735: funcgraph_entry:        0.281 us   |        arc_cksum_compute();
      z_wr_iss/7-31860 [004] 162723.350735: funcgraph_exit:         1.128 us   |                }
      z_wr_iss/4-31857 [003] 162723.350735: funcgraph_exit:       + 10.609 us  |        }
      z_wr_iss/7-31860 [004] 162723.350735: funcgraph_exit:         1.660 us   |              }
      z_wr_iss/6-31859 [005] 162723.350735: funcgraph_exit:       + 11.531 us  |      }
      z_wr_iss/7-31860 [004] 162723.350735: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.350736: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/6-31859 [005] 162723.350736: funcgraph_entry:        0.340 us   |      zio_walk_parents();
      z_wr_iss/7-31860 [004] 162723.350736: funcgraph_entry:        0.254 us   |                spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350736: funcgraph_entry:                   |        vdev_dirty() {
      z_wr_iss/7-31860 [004] 162723.350736: funcgraph_entry:        0.243 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.350736: funcgraph_entry:        0.717 us   |      zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.350736: funcgraph_entry:        0.260 us   |      zio_walk_parents();
      z_wr_iss/4-31857 [003] 162723.350737: funcgraph_entry:        0.757 us   |          txg_list_add();
      z_wr_iss/7-31860 [004] 162723.350737: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.350737: funcgraph_entry:        0.240 us   |                  spa_writeable();
      z_wr_iss/6-31859 [005] 162723.350737: funcgraph_exit:       + 14.507 us  |    }
      z_wr_iss/6-31859 [005] 162723.350737: funcgraph_entry:        0.254 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.350737: funcgraph_entry:        0.810 us   |      zio_wait_for_children();
      z_wr_iss/7-31860 [004] 162723.350737: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/6-31859 [005] 162723.350738: funcgraph_entry:        1.033 us   |    zio_taskq_member();
      z_wr_iss/4-31857 [003] 162723.350738: funcgraph_entry:        0.720 us   |          txg_list_add();
      z_wr_iss/7-31860 [004] 162723.350738: funcgraph_entry:        0.616 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.350739: funcgraph_entry:        0.573 us   |      spa_sync_pass();
      z_wr_iss/6-31859 [005] 162723.350739: funcgraph_entry:        0.305 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350739: funcgraph_exit:         3.376 us   |        }
      z_wr_iss/7-31860 [004] 162723.350739: funcgraph_exit:         1.757 us   |                  }
      z_wr_iss/7-31860 [004] 162723.350739: funcgraph_exit:         2.861 us   |                }
      z_wr_iss/6-31859 [005] 162723.350740: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.350740: funcgraph_exit:         4.257 us   |              }
      z_wr_iss/4-31857 [003] 162723.350740: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/6-31859 [005] 162723.350740: funcgraph_entry:        0.428 us   |      spa_config_enter();
      z_wr_iss/1-31854 [009] 162723.350740: funcgraph_entry:        0.924 us   |      zio_buf_alloc();
      z_wr_iss/7-31860 [004] 162723.350740: funcgraph_exit:       + 12.422 us  |            }
      z_wr_iss/7-31860 [004] 162723.350741: funcgraph_exit:       + 15.080 us  |          }
      z_wr_iss/6-31859 [005] 162723.350741: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/4-31857 [003] 162723.350741: funcgraph_entry:        0.939 us   |          space_map_find();
      z_wr_iss/7-31860 [004] 162723.350741: funcgraph_entry:        0.232 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350741: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/2-31855 [002] 162723.350741: funcgraph_entry:        0.346 us   |                      vdev_disk_dio_put();
      z_wr_iss/1-31854 [009] 162723.350741: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/6-31859 [005] 162723.350741: funcgraph_entry:        2.572 us   |          spa_get_random();
      z_wr_iss/7-31860 [004] 162723.350742: funcgraph_entry:        0.261 us   |          spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.350742: funcgraph_exit:       + 10.419 us  |                    }
      z_wr_iss/2-31855 [002] 162723.350742: funcgraph_exit:       + 10.930 us  |                  }
      z_wr_iss/7-31860 [004] 162723.350742: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/2-31855 [002] 162723.350742: funcgraph_exit:       + 17.576 us  |                }
      z_wr_iss/1-31854 [009] 162723.350742: funcgraph_entry:      + 47.256 us  |        lzjb_compress();
      z_wr_iss/4-31857 [003] 162723.350742: funcgraph_exit:         2.577 us   |        }
      z_wr_iss/7-31860 [004] 162723.350742: funcgraph_entry:        0.276 us   |            zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.350742: funcgraph_exit:       + 19.029 us  |              }
      z_wr_iss/7-31860 [004] 162723.350743: funcgraph_exit:         0.834 us   |          }
      z_wr_iss/4-31857 [003] 162723.350743: funcgraph_entry:        0.636 us   |        vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.350743: funcgraph_exit:       + 18.898 us  |        }
      z_wr_iss/2-31855 [002] 162723.350743: funcgraph_exit:       + 27.902 us  |            }
      z_wr_iss/2-31855 [002] 162723.350743: funcgraph_exit:       + 30.646 us  |          }
      z_wr_iss/7-31860 [004] 162723.350744: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/2-31855 [002] 162723.350744: funcgraph_entry:        0.219 us   |          spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350744: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/4-31857 [003] 162723.350744: funcgraph_entry:        0.623 us   |        vdev_allocatable();
      z_wr_iss/2-31855 [002] 162723.350744: funcgraph_entry:        0.302 us   |          spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350744: funcgraph_entry:        0.539 us   |            zio_add_child();
      z_wr_iss/6-31859 [005] 162723.350744: funcgraph_entry:        0.318 us   |          vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.350745: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.350745: funcgraph_entry:        0.358 us   |          vdev_lookup_top();
      z_wr_iss/7-31860 [004] 162723.350745: funcgraph_exit:         1.286 us   |          }
      z_wr_iss/4-31857 [003] 162723.350745: funcgraph_entry:                   |        vdev_psize_to_asize() {
      z_wr_iss/2-31855 [002] 162723.350745: funcgraph_entry:        0.391 us   |            zio_wait_for_children();
      z_wr_iss/7-31860 [004] 162723.350745: funcgraph_exit:         1.860 us   |        }
      z_wr_iss/7-31860 [004] 162723.350746: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.350746: funcgraph_entry:        0.297 us   |          vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.350746: funcgraph_entry:                   |          vdev_default_asize() {
      z_wr_iss/7-31860 [004] 162723.350746: funcgraph_entry:        0.275 us   |          spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.350746: funcgraph_exit:         1.033 us   |          }
      z_wr_iss/6-31859 [005] 162723.350746: funcgraph_exit:         5.289 us   |        }
      z_wr_iss/2-31855 [002] 162723.350746: funcgraph_exit:       + 34.807 us  |        }
      z_wr_iss/4-31857 [003] 162723.350746: funcgraph_entry:        0.632 us   |            vdev_default_asize();
      z_wr_iss/7-31860 [004] 162723.350746: funcgraph_entry:        0.266 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.350747: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/2-31855 [002] 162723.350747: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.350747: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/7-31860 [004] 162723.350747: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.350747: funcgraph_entry:        0.328 us   |            zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.350747: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/6-31859 [005] 162723.350748: funcgraph_entry:        0.603 us   |            zio_add_child();
      z_wr_iss/4-31857 [003] 162723.350748: funcgraph_entry:        0.542 us   |            vdev_default_asize();
      z_wr_iss/7-31860 [004] 162723.350748: funcgraph_entry:        0.339 us   |            zio_push_transform();
      z_wr_iss/2-31855 [002] 162723.350748: funcgraph_entry:        0.820 us   |            zio_add_child();
      z_wr_iss/6-31859 [005] 162723.350748: funcgraph_exit:         1.657 us   |          }
      z_wr_iss/4-31857 [003] 162723.350749: funcgraph_exit:         2.882 us   |          }
      z_wr_iss/7-31860 [004] 162723.350749: funcgraph_entry:        0.289 us   |            spa_writeable();
      z_wr_iss/4-31857 [003] 162723.350749: funcgraph_exit:         4.026 us   |        }
      z_wr_iss/8-31861 [008] 162723.350749: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/7-31860 [004] 162723.350749: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/2-31855 [002] 162723.350750: funcgraph_exit:         2.281 us   |          }
      z_wr_iss/2-31855 [002] 162723.350750: funcgraph_exit:         3.180 us   |        }
      z_wr_iss/8-31861 [008] 162723.350750: funcgraph_entry:        0.676 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350750: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.350750: funcgraph_entry:        0.588 us   |        metaslab_activate();
      z_wr_iss/7-31860 [004] 162723.350751: funcgraph_entry:        0.289 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.350751: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.350751: funcgraph_exit:         4.505 us   |        }
      z_wr_iss/7-31860 [004] 162723.350751: funcgraph_entry:        0.261 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.350751: funcgraph_entry:        0.525 us   |          spa_get_dsl();
      z_wr_iss/8-31861 [008] 162723.350751: funcgraph_entry:        0.590 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350751: funcgraph_entry:                   |        space_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.350752: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/7-31860 [004] 162723.350752: funcgraph_exit:         1.542 us   |              }
      z_wr_iss/4-31857 [003] 162723.350752: funcgraph_entry:                   |          metaslab_df_alloc() {
      z_wr_iss/6-31859 [005] 162723.350752: funcgraph_entry:        0.483 us   |          spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.350752: funcgraph_entry:        0.403 us   |          spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350752: funcgraph_entry:        0.591 us   |            metaslab_pp_maxsize();
      z_wr_iss/8-31861 [008] 162723.350753: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/7-31860 [004] 162723.350753: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/7-31860 [004] 162723.350753: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/8-31861 [008] 162723.350753: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/2-31855 [002] 162723.350753: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.350753: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/6-31859 [005] 162723.350754: funcgraph_entry:        0.510 us   |          spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350754: funcgraph_entry:        0.421 us   |                  zio_add_child();
      z_wr_iss/8-31861 [008] 162723.350754: funcgraph_entry:        3.379 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/4-31857 [003] 162723.350754: funcgraph_entry:                   |            metaslab_block_picker.clone.0() {
      z_wr_iss/2-31855 [002] 162723.350754: funcgraph_entry:        0.598 us   |            zio_buf_alloc();
      z_wr_iss/0-31853 [006] 162723.350754: funcgraph_entry:        0.379 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350754: funcgraph_exit:         1.118 us   |                }
      z_wr_iss/4-31857 [003] 162723.350754: funcgraph_entry:        0.584 us   |              space_map_seg_compare();
      z_wr_iss/7-31860 [004] 162723.350754: funcgraph_exit:         1.674 us   |              }
      z_wr_iss/6-31859 [005] 162723.350755: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.350755: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.350755: funcgraph_entry:        0.389 us   |    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.350755: funcgraph_entry:        0.828 us   |            zio_buf_alloc();
      z_wr_iss/7-31860 [004] 162723.350755: funcgraph_entry:        0.274 us   |                spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350755: funcgraph_exit:         1.665 us   |            }
      z_wr_iss/2-31855 [002] 162723.350755: funcgraph_entry:        1.033 us   |            zio_push_transform();
      z_wr_iss/7-31860 [004] 162723.350756: funcgraph_entry:        0.445 us   |                spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350756: funcgraph_exit:         3.871 us   |          }
      z_wr_iss/0-31853 [006] 162723.350756: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/4-31857 [003] 162723.350756: funcgraph_entry:                   |          space_map_remove() {
      z_wr_iss/0-31853 [006] 162723.350756: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/7-31860 [004] 162723.350756: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.350757: funcgraph_entry:        0.253 us   |                  spa_writeable();
      z_wr_iss/0-31853 [006] 162723.350757: funcgraph_entry:        3.018 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/4-31857 [003] 162723.350757: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/2-31855 [002] 162723.350757: funcgraph_entry:        0.617 us   |            spa_writeable();
      z_wr_iss/6-31859 [005] 162723.350757: funcgraph_entry:        0.824 us   |            zio_push_transform();
      z_wr_iss/7-31860 [004] 162723.350757: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/8-31861 [008] 162723.350757: funcgraph_exit:         4.403 us   |      }
      z_wr_iss/4-31857 [003] 162723.350758: funcgraph_entry:        0.541 us   |              space_map_seg_compare();
      z_wr_iss/7-31860 [004] 162723.350758: funcgraph_entry:        0.289 us   |                    vdev_queue_offset_compare();
      z_wr_iss/8-31861 [008] 162723.350758: funcgraph_exit:         5.317 us   |    }
      z_wr_iss/2-31855 [002] 162723.350758: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/8-31861 [008] 162723.350758: funcgraph_exit:         9.324 us   |  }
      z_wr_iss/7-31860 [004] 162723.350758: funcgraph_entry:        0.443 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/6-31859 [005] 162723.350758: funcgraph_entry:        0.513 us   |            spa_writeable();
      z_wr_iss/4-31857 [003] 162723.350758: funcgraph_exit:         1.559 us   |            }
      z_wr_iss/7-31860 [004] 162723.350759: funcgraph_exit:         1.893 us   |                  }
      z_wr_iss/4-31857 [003] 162723.350759: funcgraph_exit:         2.854 us   |          }
      z_wr_iss/7-31860 [004] 162723.350759: funcgraph_exit:         2.997 us   |                }
      z_wr_iss/6-31859 [005] 162723.350760: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/7-31860 [004] 162723.350760: funcgraph_exit:         4.883 us   |              }
      z_wr_iss/4-31857 [003] 162723.350760: funcgraph_exit:         8.198 us   |        }
      z_wr_iss/2-31855 [002] 162723.350760: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.350760: funcgraph_entry:                   |        vdev_dirty() {
      z_wr_iss/0-31853 [006] 162723.350760: funcgraph_exit:         3.931 us   |      }
      z_wr_iss/8-31861 [008] 162723.350760: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/4-31857 [003] 162723.350761: funcgraph_entry:        0.502 us   |          txg_list_add();
      z_wr_iss/2-31855 [002] 162723.350761: funcgraph_entry:        0.598 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.350761: funcgraph_exit:         4.902 us   |    }
      z_wr_iss/8-31861 [008] 162723.350761: funcgraph_entry:        0.550 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350761: funcgraph_exit:         8.066 us   |  }
      z_wr_iss/3-31856 [001] 162723.350761: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/6-31859 [005] 162723.350761: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/7-31860 [004] 162723.350762: funcgraph_exit:       + 12.314 us  |            }
      z_wr_iss/7-31860 [004] 162723.350762: funcgraph_exit:       + 14.987 us  |          }
      z_wr_iss/8-31861 [008] 162723.350762: funcgraph_entry:        0.409 us   |    spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.350762: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/2-31855 [002] 162723.350762: funcgraph_entry:        0.485 us   |                vdev_readable();
      z_wr_iss/3-31856 [001] 162723.350762: funcgraph_entry:        0.692 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350762: funcgraph_entry:        0.285 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350762: funcgraph_entry:        0.312 us   |    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350762: funcgraph_entry:        0.420 us   |                vdev_readable();
      z_wr_iss/7-31860 [004] 162723.350763: funcgraph_entry:        0.285 us   |          spa_is_initializing();
      z_wr_iss/8-31861 [008] 162723.350763: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/0-31853 [006] 162723.350763: funcgraph_entry:        0.325 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.350763: funcgraph_exit:         3.347 us   |              }
      z_wr_iss/8-31861 [008] 162723.350763: funcgraph_entry:        0.532 us   |      zio_wait_for_children();
      z_wr_iss/7-31860 [004] 162723.350763: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.350763: funcgraph_entry:        0.532 us   |                vdev_readable();
      z_wr_iss/3-31856 [001] 162723.350764: funcgraph_entry:        0.669 us   |    spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350764: funcgraph_entry:        0.294 us   |            zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.350764: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/7-31860 [004] 162723.350764: funcgraph_exit:         0.873 us   |          }
      z_wr_iss/0-31853 [006] 162723.350764: funcgraph_entry:        0.502 us   |      zio_wait_for_children();
      z_wr_iss/8-31861 [008] 162723.350764: funcgraph_entry:        0.407 us   |      zio_wait_for_children();
      z_wr_iss/7-31860 [004] 162723.350764: funcgraph_exit:       + 18.848 us  |        }
      z_wr_iss/3-31856 [001] 162723.350765: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/7-31860 [004] 162723.350765: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.350765: funcgraph_exit:         3.526 us   |              }
      z_wr_iss/4-31857 [003] 162723.350765: funcgraph_entry:        2.186 us   |          txg_list_add();
      z_wr_iss/0-31853 [006] 162723.350765: funcgraph_entry:        0.375 us   |      zio_wait_for_children();
      z_wr_iss/8-31861 [008] 162723.350765: funcgraph_exit:         2.189 us   |    }
      z_wr_iss/7-31860 [004] 162723.350765: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/2-31855 [002] 162723.350765: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/3-31856 [001] 162723.350765: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/8-31861 [008] 162723.350765: funcgraph_exit:         5.076 us   |  }
      z_wr_iss/7-31860 [004] 162723.350766: funcgraph_entry:        0.431 us   |            zio_add_child();
      z_wr_iss/2-31855 [002] 162723.350766: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/0-31853 [006] 162723.350766: funcgraph_entry:        0.320 us   |      spa_sync_pass();
      z_wr_iss/3-31856 [001] 162723.350766: funcgraph_entry:        2.783 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/7-31860 [004] 162723.350766: funcgraph_exit:         1.278 us   |          }
      z_wr_iss/2-31855 [002] 162723.350766: funcgraph_entry:        0.754 us   |                  zio_add_child();
      z_wr_iss/0-31853 [006] 162723.350766: funcgraph_entry:        0.886 us   |      zio_buf_alloc();
      z_wr_iss/7-31860 [004] 162723.350767: funcgraph_exit:         1.796 us   |        }
      z_wr_iss/7-31860 [004] 162723.350767: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/7-31860 [004] 162723.350767: funcgraph_entry:        0.299 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350767: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/7-31860 [004] 162723.350768: funcgraph_entry:        0.253 us   |          spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.350768: funcgraph_exit:         2.060 us   |                }
      z_wr_iss/0-31853 [006] 162723.350768: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/6-31859 [005] 162723.350768: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/2-31855 [002] 162723.350768: funcgraph_exit:         2.878 us   |              }
      z_wr_iss/7-31860 [004] 162723.350768: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.350768: funcgraph_entry:      + 40.818 us  |        lzjb_compress();
      z_wr_iss/7-31860 [004] 162723.350768: funcgraph_entry:        0.372 us   |            zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.350768: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/2-31855 [002] 162723.350769: funcgraph_entry:        0.446 us   |                spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350769: funcgraph_entry:        0.903 us   |                  zio_add_child();
      z_wr_iss/7-31860 [004] 162723.350769: funcgraph_entry:        0.358 us   |            zio_push_transform();
      z_wr_iss/3-31856 [001] 162723.350770: funcgraph_exit:         4.368 us   |      }
      z_wr_iss/2-31855 [002] 162723.350770: funcgraph_entry:        0.405 us   |                spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350770: funcgraph_entry:        0.291 us   |            spa_writeable();
      z_wr_iss/3-31856 [001] 162723.350770: funcgraph_exit:         5.385 us   |    }
      z_wr_iss/6-31859 [005] 162723.350770: funcgraph_exit:         2.326 us   |                }
      z_wr_iss/3-31856 [001] 162723.350771: funcgraph_exit:         9.442 us   |  }
      z_wr_iss/7-31860 [004] 162723.350771: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/2-31855 [002] 162723.350771: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.350771: funcgraph_exit:         3.329 us   |              }
      z_wr_iss/8-31861 [008] 162723.350771: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/6-31859 [005] 162723.350771: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/2-31855 [002] 162723.350771: funcgraph_entry:        0.475 us   |                  spa_writeable();
      z_wr_iss/8-31861 [008] 162723.350772: funcgraph_entry:        0.572 us   |    spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350772: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.350772: funcgraph_entry:        0.335 us   |                spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350772: funcgraph_entry:        0.238 us   |                vdev_readable();
      z_wr_iss/8-31861 [008] 162723.350772: funcgraph_entry:        0.457 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.350772: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/6-31859 [005] 162723.350773: funcgraph_entry:        0.464 us   |                spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350773: funcgraph_entry:        0.238 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.350773: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.350773: funcgraph_exit:         1.707 us   |              }
      z_wr_iss/2-31855 [002] 162723.350773: funcgraph_entry:        0.630 us   |                    vdev_queue_offset_compare();
      z_wr_iss/8-31861 [008] 162723.350773: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/6-31859 [005] 162723.350773: funcgraph_entry:        0.335 us   |                  spa_writeable();
      z_wr_iss/8-31861 [008] 162723.350774: funcgraph_entry:        0.591 us   |      zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.350774: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/7-31860 [004] 162723.350774: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/7-31860 [004] 162723.350774: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/2-31855 [002] 162723.350775: funcgraph_entry:        0.577 us   |                    vdev_queue_offset_compare();
      z_wr_iss/7-31860 [004] 162723.350775: funcgraph_entry:        0.417 us   |                  zio_add_child();
      z_wr_iss/8-31861 [008] 162723.350775: funcgraph_entry:        0.605 us   |      zio_wait_for_children();
      z_wr_iss/7-31860 [004] 162723.350776: funcgraph_exit:         1.156 us   |                }
      z_wr_iss/7-31860 [004] 162723.350776: funcgraph_exit:         1.703 us   |              }
      z_wr_iss/8-31861 [008] 162723.350776: funcgraph_exit:         2.705 us   |    }
      z_wr_iss/2-31855 [002] 162723.350776: funcgraph_entry:        0.934 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/7-31860 [004] 162723.350776: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/7-31860 [004] 162723.350776: funcgraph_entry:        0.229 us   |                spa_get_dsl();
      z_wr_iss/8-31861 [008] 162723.350776: funcgraph_exit:         5.630 us   |  }
      z_wr_iss/7-31860 [004] 162723.350777: funcgraph_entry:        0.236 us   |                spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350777: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.350778: funcgraph_exit:         5.087 us   |                  }
      z_wr_iss/7-31860 [004] 162723.350778: funcgraph_entry:        0.238 us   |                  spa_writeable();
      z_wr_iss/6-31859 [005] 162723.350778: funcgraph_entry:        0.331 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.350778: funcgraph_exit:         7.414 us   |                }
      z_wr_iss/7-31860 [004] 162723.350778: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/6-31859 [005] 162723.350778: funcgraph_entry:        0.277 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.350779: funcgraph_exit:       + 10.169 us  |              }
      z_wr_iss/6-31859 [005] 162723.350779: funcgraph_entry:        0.431 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/2-31855 [002] 162723.350780: funcgraph_exit:       + 21.581 us  |            }
      z_wr_iss/6-31859 [005] 162723.350780: funcgraph_exit:         5.988 us   |                  }
      z_wr_iss/2-31855 [002] 162723.350780: funcgraph_exit:       + 26.899 us  |          }
      z_wr_iss/7-31860 [004] 162723.350780: funcgraph_entry:        0.236 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.350780: funcgraph_exit:         7.254 us   |                }
      z_wr_iss/2-31855 [002] 162723.350781: funcgraph_entry:        0.318 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350781: funcgraph_exit:         9.547 us   |              }
      z_wr_iss/7-31860 [004] 162723.350781: funcgraph_entry:        0.221 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.350781: funcgraph_entry:        0.312 us   |          spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350782: funcgraph_entry:        0.309 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/6-31859 [005] 162723.350782: funcgraph_exit:       + 22.259 us  |            }
      z_wr_iss/2-31855 [002] 162723.350782: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.350782: funcgraph_exit:       + 27.593 us  |          }
      z_wr_iss/7-31860 [004] 162723.350782: funcgraph_exit:         3.932 us   |                  }
      z_wr_iss/7-31860 [004] 162723.350782: funcgraph_exit:         4.892 us   |                }
      z_wr_iss/2-31855 [002] 162723.350782: funcgraph_entry:        0.339 us   |            zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.350782: funcgraph_entry:        0.319 us   |          spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350782: funcgraph_exit:         6.284 us   |              }
      z_wr_iss/6-31859 [005] 162723.350783: funcgraph_entry:        0.262 us   |          spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.350783: funcgraph_exit:         0.945 us   |          }
      z_wr_iss/7-31860 [004] 162723.350783: funcgraph_exit:       + 12.684 us  |            }
      z_wr_iss/2-31855 [002] 162723.350783: funcgraph_exit:       + 32.797 us  |        }
      z_wr_iss/4-31857 [003] 162723.350783: funcgraph_exit:         7.341 us   |        }
      z_wr_iss/7-31860 [004] 162723.350783: funcgraph_exit:       + 15.482 us  |          }
      z_wr_iss/6-31859 [005] 162723.350784: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/2-31855 [002] 162723.350784: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/7-31860 [004] 162723.350784: funcgraph_entry:        0.233 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350784: funcgraph_entry:        0.306 us   |            zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.350784: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/4-31857 [003] 162723.350784: funcgraph_entry:                   |        space_map_add() {
      z_wr_iss/7-31860 [004] 162723.350784: funcgraph_entry:        0.242 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.350784: funcgraph_exit:         0.872 us   |          }
      z_wr_iss/2-31855 [002] 162723.350784: funcgraph_entry:        0.476 us   |            zio_add_child();
      z_wr_iss/4-31857 [003] 162723.350785: funcgraph_entry:        0.445 us   |          space_map_find();
      z_wr_iss/6-31859 [005] 162723.350785: funcgraph_exit:       + 33.100 us  |        }
      z_wr_iss/7-31860 [004] 162723.350785: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/7-31860 [004] 162723.350785: funcgraph_entry:        0.257 us   |            zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.350785: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.350785: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/2-31855 [002] 162723.350785: funcgraph_exit:         1.423 us   |          }
      z_wr_iss/7-31860 [004] 162723.350785: funcgraph_exit:         0.695 us   |          }
      z_wr_iss/7-31860 [004] 162723.350786: funcgraph_exit:       + 18.871 us  |        }
      z_wr_iss/4-31857 [003] 162723.350786: funcgraph_exit:         1.622 us   |        }
      z_wr_iss/2-31855 [002] 162723.350786: funcgraph_exit:         2.084 us   |        }
      z_wr_iss/6-31859 [005] 162723.350786: funcgraph_entry:        0.529 us   |            zio_add_child();
      z_wr_iss/7-31860 [004] 162723.350786: funcgraph_exit:       + 70.023 us  |      }
      z_wr_iss/2-31855 [002] 162723.350786: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/7-31860 [004] 162723.350786: funcgraph_exit:       + 71.236 us  |    }
      z_wr_iss/2-31855 [002] 162723.350786: funcgraph_entry:        0.219 us   |          spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350786: funcgraph_entry:        0.648 us   |        spa_config_exit();
      z_wr_iss/7-31860 [004] 162723.350786: funcgraph_entry:        0.229 us   |    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350787: funcgraph_exit:         1.525 us   |          }
      z_wr_iss/2-31855 [002] 162723.350787: funcgraph_entry:        0.258 us   |          spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350787: funcgraph_entry:        0.239 us   |    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.350787: funcgraph_exit:         2.053 us   |        }
      z_wr_iss/6-31859 [005] 162723.350787: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/7-31860 [004] 162723.350787: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/2-31855 [002] 162723.350787: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.350787: funcgraph_exit:       + 71.939 us  |      }
      z_wr_iss/6-31859 [005] 162723.350787: funcgraph_entry:        0.261 us   |          spa_get_dsl();
      z_wr_iss/7-31860 [004] 162723.350787: funcgraph_entry:        0.233 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.350788: funcgraph_entry:        0.431 us   |            zio_buf_alloc();
      z_wr_iss/4-31857 [003] 162723.350788: funcgraph_exit:       + 73.486 us  |    }
      z_wr_iss/7-31860 [004] 162723.350788: funcgraph_exit:         0.709 us   |    }
      z_wr_iss/6-31859 [005] 162723.350788: funcgraph_entry:        0.292 us   |          spa_is_initializing();
      z_wr_iss/7-31860 [004] 162723.350788: funcgraph_exit:       ! 108.868 us |  }
      z_wr_iss/4-31857 [003] 162723.350789: funcgraph_entry:        0.438 us   |    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350789: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.350789: funcgraph_entry:        0.366 us   |            zio_push_transform();
      z_wr_iss/6-31859 [005] 162723.350789: funcgraph_entry:        0.356 us   |            zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.350789: funcgraph_entry:        0.217 us   |            spa_writeable();
      z_wr_iss/4-31857 [003] 162723.350789: funcgraph_entry:        0.508 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.350790: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/6-31859 [005] 162723.350790: funcgraph_entry:        0.384 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.350790: funcgraph_exit:       + 48.828 us  |      }
      z_wr_iss/4-31857 [003] 162723.350791: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/6-31859 [005] 162723.350791: funcgraph_entry:        0.263 us   |            spa_writeable();
      z_wr_iss/2-31855 [002] 162723.350791: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.350791: funcgraph_entry:        0.942 us   |      zio_push_transform();
      z_wr_iss/4-31857 [003] 162723.350791: funcgraph_entry:        0.624 us   |      zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.350791: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/2-31855 [002] 162723.350791: funcgraph_entry:        0.304 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.350792: funcgraph_entry:        0.288 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.350792: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.350792: funcgraph_entry:        0.651 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.350792: funcgraph_exit:         1.785 us   |              }
      z_wr_iss/1-31854 [009] 162723.350792: funcgraph_exit:       + 56.944 us  |    }
      z_wr_iss/6-31859 [005] 162723.350793: funcgraph_entry:        0.274 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.350793: funcgraph_entry:        0.702 us   |    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350793: funcgraph_entry:        0.263 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.350794: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.350794: funcgraph_exit:         1.839 us   |              }
      z_wr_iss/2-31855 [002] 162723.350794: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/4-31857 [003] 162723.350794: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/1-31854 [009] 162723.350794: funcgraph_entry:        0.400 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.350795: funcgraph_entry:        0.428 us   |                  zio_add_child();
      z_wr_iss/4-31857 [003] 162723.350795: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/6-31859 [005] 162723.350795: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.350795: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/2-31855 [002] 162723.350795: funcgraph_exit:         1.392 us   |                }
      z_wr_iss/1-31854 [009] 162723.350795: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/2-31855 [002] 162723.350796: funcgraph_exit:         1.892 us   |              }
      z_wr_iss/4-31857 [003] 162723.350796: funcgraph_entry:        0.791 us   |          zrl_add();
      z_wr_iss/2-31855 [002] 162723.350796: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.350796: funcgraph_entry:        0.502 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.350796: funcgraph_entry:        1.307 us   |      zio_checksum_compute();
      z_wr_iss/2-31855 [002] 162723.350796: funcgraph_entry:        0.431 us   |                spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350797: funcgraph_exit:         1.330 us   |                }
      z_wr_iss/2-31855 [002] 162723.350797: funcgraph_entry:        0.235 us   |                spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350797: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.350797: funcgraph_exit:         1.865 us   |              }
      z_wr_iss/6-31859 [005] 162723.350797: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/2-31855 [002] 162723.350797: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.350797: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.350797: funcgraph_entry:        0.257 us   |                spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.350797: funcgraph_entry:        0.234 us   |                  spa_writeable();
      z_wr_iss/1-31854 [009] 162723.350798: funcgraph_exit:         2.401 us   |    }
      z_wr_iss/2-31855 [002] 162723.350798: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/4-31857 [003] 162723.350798: funcgraph_entry:        0.690 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.350798: funcgraph_entry:        0.274 us   |                spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.350798: funcgraph_entry:        0.226 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.350798: funcgraph_entry:        0.558 us   |    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350799: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.350799: funcgraph_entry:        0.241 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.350799: funcgraph_entry:        0.320 us   |                  spa_writeable();
      z_wr_iss/4-31857 [003] 162723.350799: funcgraph_exit:         1.912 us   |            }
      z_wr_iss/2-31855 [002] 162723.350799: funcgraph_entry:        0.324 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.350800: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.350800: funcgraph_entry:        0.549 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350800: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350800: funcgraph_entry:        0.316 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/4-31857 [003] 162723.350800: funcgraph_entry:        0.583 us   |              vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.350801: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/2-31855 [002] 162723.350801: funcgraph_exit:         2.944 us   |                  }
      z_wr_iss/2-31855 [002] 162723.350801: funcgraph_exit:         3.911 us   |                }
      z_wr_iss/2-31855 [002] 162723.350801: funcgraph_exit:         5.514 us   |              }
      z_wr_iss/1-31854 [009] 162723.350801: funcgraph_entry:        0.624 us   |      zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.350802: funcgraph_exit:         1.800 us   |            }
      z_wr_iss/4-31857 [003] 162723.350802: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350802: funcgraph_exit:       + 12.422 us  |            }
      z_wr_iss/2-31855 [002] 162723.350802: funcgraph_exit:       + 15.099 us  |          }
      z_wr_iss/1-31854 [009] 162723.350802: funcgraph_entry:        0.636 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.350803: funcgraph_entry:        0.222 us   |          spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350803: funcgraph_entry:        0.726 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.350803: funcgraph_entry:        0.231 us   |          spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.350804: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.350804: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/2-31855 [002] 162723.350804: funcgraph_entry:        0.233 us   |            zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.350804: funcgraph_exit:         2.009 us   |            }
      z_wr_iss/1-31854 [009] 162723.350804: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/2-31855 [002] 162723.350804: funcgraph_exit:         0.747 us   |          }
      z_wr_iss/2-31855 [002] 162723.350805: funcgraph_exit:       + 18.516 us  |        }
      z_wr_iss/2-31855 [002] 162723.350805: funcgraph_exit:       ! 101.676 us |      }
      z_wr_iss/4-31857 [003] 162723.350805: funcgraph_exit:         7.963 us   |          }
      z_wr_iss/2-31855 [002] 162723.350805: funcgraph_exit:       ! 102.865 us |    }
      z_wr_iss/1-31854 [009] 162723.350805: funcgraph_entry:        0.801 us   |          zrl_add();
      z_wr_iss/2-31855 [002] 162723.350805: funcgraph_entry:        0.214 us   |    spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350805: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350806: funcgraph_entry:        0.226 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350806: funcgraph_entry:        0.614 us   |            dva_get_dsize_sync();
      z_wr_iss/2-31855 [002] 162723.350806: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.350806: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350806: funcgraph_entry:        0.235 us   |      zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.350807: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.350807: funcgraph_exit:         0.682 us   |    }
      z_wr_iss/4-31857 [003] 162723.350807: funcgraph_entry:        0.617 us   |            dva_get_dsize_sync();
      z_wr_iss/2-31855 [002] 162723.350807: funcgraph_exit:       ! 144.561 us |  }
      z_wr_iss/1-31854 [009] 162723.350807: funcgraph_entry:        0.689 us   |              vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.350808: funcgraph_entry:        0.610 us   |            dva_get_dsize_sync();
      z_wr_iss/1-31854 [009] 162723.350809: funcgraph_exit:         1.996 us   |            }
      z_wr_iss/1-31854 [009] 162723.350809: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.350810: funcgraph_exit:         4.267 us   |          }
      z_wr_iss/0-31853 [006] 162723.350810: funcgraph_exit:       + 41.903 us  |      }
      z_wr_iss/1-31854 [009] 162723.350810: funcgraph_entry:        0.735 us   |              vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.350810: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/0-31853 [006] 162723.350810: funcgraph_entry:        0.605 us   |      zio_push_transform();
      z_wr_iss/4-31857 [003] 162723.350811: funcgraph_entry:        0.758 us   |            spa_version();
      z_wr_iss/1-31854 [009] 162723.350811: funcgraph_exit:         1.827 us   |            }
      z_wr_iss/0-31853 [006] 162723.350811: funcgraph_exit:       + 47.590 us  |    }
      z_wr_iss/0-31853 [006] 162723.350812: funcgraph_entry:        0.353 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.350812: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.350812: funcgraph_exit:         2.098 us   |          }
      z_wr_iss/1-31854 [009] 162723.350812: funcgraph_entry:        0.620 us   |              vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.350812: funcgraph_entry:        0.313 us   |    spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350813: funcgraph_entry:        0.569 us   |          zrl_remove();
      z_wr_iss/0-31853 [006] 162723.350813: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/0-31853 [006] 162723.350813: funcgraph_entry:        0.954 us   |      zio_checksum_compute();
      z_wr_iss/1-31854 [009] 162723.350814: funcgraph_exit:         1.822 us   |            }
      z_wr_iss/4-31857 [003] 162723.350814: funcgraph_exit:       + 19.415 us  |        }
      z_wr_iss/1-31854 [009] 162723.350814: funcgraph_exit:         7.980 us   |          }
      z_wr_iss/0-31853 [006] 162723.350815: funcgraph_exit:         1.624 us   |    }
      z_wr_iss/4-31857 [003] 162723.350815: funcgraph_entry:        0.593 us   |        arc_cksum_compute();
      z_wr_iss/1-31854 [009] 162723.350815: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.350815: funcgraph_entry:        0.307 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.350815: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.350816: funcgraph_entry:        0.322 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.350816: funcgraph_entry:        0.695 us   |              vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.350816: funcgraph_exit:       + 22.210 us  |      }
      z_wr_iss/0-31853 [006] 162723.350817: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/4-31857 [003] 162723.350817: funcgraph_entry:        0.558 us   |      zio_walk_parents();
      z_wr_iss/0-31853 [006] 162723.350817: funcgraph_entry:        0.353 us   |      zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.350817: funcgraph_exit:         1.874 us   |            }
      z_wr_iss/0-31853 [006] 162723.350818: funcgraph_entry:        0.332 us   |      zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.350818: funcgraph_entry:        0.338 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.350818: funcgraph_entry:        0.763 us   |      zio_walk_parents();
      z_wr_iss/1-31854 [009] 162723.350818: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.350818: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/6-31859 [005] 162723.350818: funcgraph_entry:        0.300 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.350819: funcgraph_entry:        0.705 us   |              vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.350819: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/6-31859 [005] 162723.350819: funcgraph_entry:        0.269 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.350819: funcgraph_entry:        0.406 us   |          zrl_add();
      z_wr_iss/4-31857 [003] 162723.350819: funcgraph_exit:       + 28.905 us  |    }
      z_wr_iss/6-31859 [005] 162723.350820: funcgraph_entry:        0.368 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.350820: funcgraph_exit:         1.990 us   |            }
      z_wr_iss/0-31853 [006] 162723.350820: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.350820: funcgraph_entry:        0.730 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350820: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.350820: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.350820: funcgraph_exit:       + 20.894 us  |                  }
      z_wr_iss/6-31859 [005] 162723.350821: funcgraph_exit:       + 22.111 us  |                }
      z_wr_iss/0-31853 [006] 162723.350821: funcgraph_entry:        0.393 us   |              vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.350821: funcgraph_entry:        0.540 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.350821: funcgraph_exit:       + 23.891 us  |              }
      z_wr_iss/4-31857 [003] 162723.350821: funcgraph_entry:        1.820 us   |    zio_taskq_member();
      z_wr_iss/0-31853 [006] 162723.350821: funcgraph_exit:         1.100 us   |            }
      z_wr_iss/6-31859 [005] 162723.350822: funcgraph_exit:       + 30.716 us  |            }
      z_wr_iss/0-31853 [006] 162723.350822: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.350822: funcgraph_exit:         1.594 us   |            }
      z_wr_iss/6-31859 [005] 162723.350822: funcgraph_exit:       + 33.643 us  |          }
      z_wr_iss/0-31853 [006] 162723.350822: funcgraph_entry:        0.324 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.350822: funcgraph_entry:        0.299 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.350823: funcgraph_exit:         7.774 us   |          }
      z_wr_iss/0-31853 [006] 162723.350823: funcgraph_exit:         1.008 us   |            }
      z_wr_iss/1-31854 [009] 162723.350823: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/6-31859 [005] 162723.350823: funcgraph_entry:        0.270 us   |          spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.350823: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.350824: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.350824: funcgraph_entry:        0.583 us   |            spa_version();
      z_wr_iss/0-31853 [006] 162723.350824: funcgraph_entry:        0.318 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.350824: funcgraph_entry:        0.274 us   |            zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.350824: funcgraph_entry:        0.584 us   |    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.350824: funcgraph_exit:         0.808 us   |          }
      z_wr_iss/0-31853 [006] 162723.350824: funcgraph_exit:         1.096 us   |            }
      z_wr_iss/6-31859 [005] 162723.350825: funcgraph_exit:       + 37.459 us  |        }
      z_wr_iss/1-31854 [009] 162723.350825: funcgraph_exit:         1.726 us   |          }
      z_wr_iss/0-31853 [006] 162723.350825: funcgraph_exit:         4.876 us   |          }
      z_wr_iss/6-31859 [005] 162723.350825: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.350825: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.350825: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.350825: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.350825: funcgraph_entry:        0.412 us   |          zrl_remove();
      z_wr_iss/0-31853 [006] 162723.350825: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/4-31857 [003] 162723.350826: funcgraph_entry:        0.998 us   |      spa_config_enter();
      z_wr_iss/0-31853 [006] 162723.350826: funcgraph_entry:        0.436 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.350826: funcgraph_entry:        0.515 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.350826: funcgraph_exit:       + 22.180 us  |        }
      z_wr_iss/0-31853 [006] 162723.350827: funcgraph_exit:         1.088 us   |            }
      z_wr_iss/6-31859 [005] 162723.350827: funcgraph_exit:         1.542 us   |          }
      z_wr_iss/1-31854 [009] 162723.350827: funcgraph_entry:        0.537 us   |        arc_cksum_compute();
      z_wr_iss/0-31853 [006] 162723.350827: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.350827: funcgraph_exit:         2.064 us   |        }
      z_wr_iss/6-31859 [005] 162723.350827: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.350827: funcgraph_entry:        0.428 us   |              vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.350827: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/6-31859 [005] 162723.350828: funcgraph_entry:        0.264 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350828: funcgraph_exit:         1.103 us   |            }
      z_wr_iss/6-31859 [005] 162723.350828: funcgraph_entry:        0.262 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.350828: funcgraph_exit:       + 24.548 us  |      }
      z_wr_iss/4-31857 [003] 162723.350828: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.350828: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.350829: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.350829: funcgraph_entry:        0.458 us   |      zio_walk_parents();
      z_wr_iss/0-31853 [006] 162723.350829: funcgraph_entry:        0.431 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.350829: funcgraph_entry:        0.468 us   |            zio_buf_alloc();
      z_wr_iss/4-31857 [003] 162723.350829: funcgraph_entry:        4.441 us   |          spa_get_random();
      z_wr_iss/0-31853 [006] 162723.350830: funcgraph_exit:         1.205 us   |            }
      z_wr_iss/1-31854 [009] 162723.350830: funcgraph_entry:        0.448 us   |      zio_walk_parents();
      z_wr_iss/0-31853 [006] 162723.350830: funcgraph_exit:         4.676 us   |          }
      z_wr_iss/6-31859 [005] 162723.350830: funcgraph_entry:        0.386 us   |            zio_push_transform();
      z_wr_iss/0-31853 [006] 162723.350830: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/6-31859 [005] 162723.350831: funcgraph_entry:        0.296 us   |            spa_writeable();
      z_wr_iss/0-31853 [006] 162723.350831: funcgraph_entry:        0.307 us   |            spa_version();
      z_wr_iss/1-31854 [009] 162723.350831: funcgraph_entry:        0.370 us   |      spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350831: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/0-31853 [006] 162723.350831: funcgraph_exit:         1.128 us   |          }
      z_wr_iss/1-31854 [009] 162723.350832: funcgraph_entry:        0.405 us   |      spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.350832: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.350832: funcgraph_entry:        0.445 us   |          zrl_remove();
      z_wr_iss/1-31854 [009] 162723.350832: funcgraph_entry:                   |      zio_write_bp_init() {
      z_wr_iss/6-31859 [005] 162723.350832: funcgraph_entry:        0.314 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.350833: funcgraph_exit:       + 14.028 us  |        }
      z_wr_iss/1-31854 [009] 162723.350833: funcgraph_entry:        0.431 us   |        zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.350833: funcgraph_entry:        0.261 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.350833: funcgraph_entry:        0.360 us   |        arc_cksum_compute();
      z_wr_iss/6-31859 [005] 162723.350834: funcgraph_exit:         1.792 us   |              }
      z_wr_iss/1-31854 [009] 162723.350834: funcgraph_entry:        0.516 us   |        zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.350834: funcgraph_exit:       + 15.722 us  |      }
      z_wr_iss/4-31857 [003] 162723.350834: funcgraph_entry:        0.807 us   |          vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.350835: funcgraph_entry:        0.380 us   |      zio_walk_parents();
      z_wr_iss/6-31859 [005] 162723.350835: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.350835: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.350835: funcgraph_entry:        0.824 us   |        spa_sync_pass();
      z_wr_iss/0-31853 [006] 162723.350835: funcgraph_entry:        0.337 us   |      zio_walk_parents();
      z_wr_iss/6-31859 [005] 162723.350836: funcgraph_entry:        0.467 us   |                  zio_add_child();
      z_wr_iss/4-31857 [003] 162723.350836: funcgraph_entry:        0.663 us   |          vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.350836: funcgraph_exit:       + 19.704 us  |    }
      z_wr_iss/6-31859 [005] 162723.350836: funcgraph_exit:         1.358 us   |                }
      z_wr_iss/1-31854 [009] 162723.350836: funcgraph_entry:        0.772 us   |        zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.350837: funcgraph_exit:         1.865 us   |              }
      z_wr_iss/0-31853 [006] 162723.350837: funcgraph_entry:        0.339 us   |    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350837: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.350837: funcgraph_entry:        0.302 us   |                spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350837: funcgraph_entry:        0.707 us   |          vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.350837: funcgraph_entry:        1.393 us   |    zio_taskq_member();
      z_wr_iss/6-31859 [005] 162723.350838: funcgraph_entry:        0.271 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.350838: funcgraph_entry:                   |        zio_compress_data() {
      z_wr_iss/6-31859 [005] 162723.350838: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.350838: funcgraph_entry:        0.351 us   |                  spa_writeable();
      z_wr_iss/4-31857 [003] 162723.350839: funcgraph_exit:       + 10.498 us  |        }
      z_wr_iss/1-31854 [009] 162723.350839: funcgraph_entry:      + 73.891 us  |          lzjb_compress();
      z_wr_iss/0-31853 [006] 162723.350839: funcgraph_entry:        0.325 us   |    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.350839: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/4-31857 [003] 162723.350839: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.350839: funcgraph_entry:        0.273 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.350840: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/0-31853 [006] 162723.350840: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.350840: funcgraph_entry:        0.351 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.350840: funcgraph_entry:        0.755 us   |      spa_config_enter();
      z_wr_iss/4-31857 [003] 162723.350841: funcgraph_entry:        0.696 us   |            zio_add_child();
      z_wr_iss/6-31859 [005] 162723.350841: funcgraph_entry:        0.346 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/6-31859 [005] 162723.350841: funcgraph_exit:         2.273 us   |                  }
      z_wr_iss/0-31853 [006] 162723.350841: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/6-31859 [005] 162723.350842: funcgraph_exit:         3.469 us   |                }
      z_wr_iss/0-31853 [006] 162723.350842: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.350842: funcgraph_exit:         5.008 us   |              }
      z_wr_iss/4-31857 [003] 162723.350842: funcgraph_exit:         2.204 us   |          }
      z_wr_iss/0-31853 [006] 162723.350842: funcgraph_entry:        3.586 us   |          spa_get_random();
      z_wr_iss/6-31859 [005] 162723.350843: funcgraph_exit:       + 11.241 us  |            }
      z_wr_iss/4-31857 [003] 162723.350843: funcgraph_exit:         3.230 us   |        }
      z_wr_iss/6-31859 [005] 162723.350843: funcgraph_exit:       + 14.308 us  |          }
      z_wr_iss/4-31857 [003] 162723.350843: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.350843: funcgraph_entry:        0.306 us   |          spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350844: funcgraph_entry:        0.579 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.350844: funcgraph_entry:        0.264 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.350844: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/4-31857 [003] 162723.350845: funcgraph_entry:        0.494 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.350845: funcgraph_entry:        0.320 us   |            zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.350845: funcgraph_exit:         1.158 us   |          }
      z_wr_iss/4-31857 [003] 162723.350846: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.350846: funcgraph_exit:       + 18.382 us  |        }
      z_wr_iss/6-31859 [005] 162723.350846: funcgraph_exit:       ! 105.389 us |      }
      z_wr_iss/4-31857 [003] 162723.350846: funcgraph_entry:        0.593 us   |            zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.350846: funcgraph_exit:       ! 106.774 us |    }
      z_wr_iss/0-31853 [006] 162723.350846: funcgraph_entry:        0.346 us   |          vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.350847: funcgraph_entry:        0.320 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350847: funcgraph_entry:        0.309 us   |          vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.350847: funcgraph_entry:        0.259 us   |    spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.350848: funcgraph_entry:        0.386 us   |          vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.350848: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/4-31857 [003] 162723.350848: funcgraph_entry:        0.710 us   |            zio_push_transform();
      z_wr_iss/6-31859 [005] 162723.350848: funcgraph_entry:        0.280 us   |      zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.350849: funcgraph_exit:         6.805 us   |        }
      z_wr_iss/6-31859 [005] 162723.350849: funcgraph_exit:         0.756 us   |    }
      z_wr_iss/6-31859 [005] 162723.350849: funcgraph_exit:       ! 145.531 us |  }
      z_wr_iss/0-31853 [006] 162723.350849: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.350849: funcgraph_entry:        0.456 us   |            spa_writeable();
      z_wr_iss/0-31853 [006] 162723.350849: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/0-31853 [006] 162723.350850: funcgraph_entry:        0.653 us   |            zio_add_child();
      z_wr_iss/4-31857 [003] 162723.350850: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/0-31853 [006] 162723.350851: funcgraph_exit:         1.924 us   |          }
      z_wr_iss/0-31853 [006] 162723.350852: funcgraph_exit:         2.753 us   |        }
      z_wr_iss/0-31853 [006] 162723.350852: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.350852: funcgraph_entry:        0.299 us   |          spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350853: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.350853: funcgraph_entry:        0.331 us   |          spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350854: funcgraph_entry:        0.588 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.350854: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.350854: funcgraph_entry:        0.572 us   |            zio_buf_alloc();
      z_wr_iss/4-31857 [003] 162723.350855: funcgraph_entry:        0.640 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.350856: funcgraph_entry:        0.549 us   |            zio_push_transform();
      z_wr_iss/0-31853 [006] 162723.350856: funcgraph_entry:        0.355 us   |            spa_writeable();
      z_wr_iss/4-31857 [003] 162723.350856: funcgraph_exit:         3.616 us   |              }
      z_wr_iss/0-31853 [006] 162723.350857: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/0-31853 [006] 162723.350860: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.350860: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.350860: funcgraph_entry:        0.376 us   |                vdev_readable();
      z_wr_iss/4-31857 [003] 162723.350861: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/0-31853 [006] 162723.350861: funcgraph_entry:        0.365 us   |                vdev_readable();
      z_wr_iss/4-31857 [003] 162723.350862: funcgraph_entry:        0.787 us   |                  zio_add_child();
      z_wr_iss/0-31853 [006] 162723.350862: funcgraph_exit:         2.619 us   |              }
      z_wr_iss/4-31857 [003] 162723.350863: funcgraph_exit:         2.093 us   |                }
      z_wr_iss/4-31857 [003] 162723.350863: funcgraph_exit:         3.166 us   |              }
      z_wr_iss/4-31857 [003] 162723.350864: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.350864: funcgraph_entry:        0.466 us   |                spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350865: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.350865: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/4-31857 [003] 162723.350865: funcgraph_entry:        0.541 us   |                spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.350866: funcgraph_entry:        0.535 us   |                  zio_add_child();
      z_wr_iss/4-31857 [003] 162723.350866: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.350867: funcgraph_exit:         1.713 us   |                }
      z_wr_iss/4-31857 [003] 162723.350867: funcgraph_entry:        0.468 us   |                  spa_writeable();
      z_wr_iss/0-31853 [006] 162723.350867: funcgraph_exit:         2.448 us   |              }
      z_wr_iss/0-31853 [006] 162723.350868: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.350868: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/0-31853 [006] 162723.350868: funcgraph_entry:        0.320 us   |                spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350869: funcgraph_entry:        0.457 us   |                spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350869: funcgraph_entry:        0.605 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.350870: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.350870: funcgraph_entry:        0.522 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.350870: funcgraph_entry:        0.345 us   |                  spa_writeable();
      z_wr_iss/0-31853 [006] 162723.350871: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/4-31857 [003] 162723.350871: funcgraph_entry:        0.591 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.350873: funcgraph_entry:        0.843 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/4-31857 [003] 162723.350874: funcgraph_exit:         5.942 us   |                  }
      z_wr_iss/0-31853 [006] 162723.350874: funcgraph_entry:        0.445 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.350874: funcgraph_exit:         8.035 us   |                }
      z_wr_iss/0-31853 [006] 162723.350875: funcgraph_entry:        0.358 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.350875: funcgraph_exit:       + 11.023 us  |              }
      z_wr_iss/0-31853 [006] 162723.350876: funcgraph_entry:        0.393 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.350876: funcgraph_exit:       + 26.231 us  |            }
      z_wr_iss/0-31853 [006] 162723.350876: funcgraph_entry:        0.462 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.350877: funcgraph_exit:       + 31.228 us  |          }
      z_wr_iss/4-31857 [003] 162723.350877: funcgraph_entry:        0.494 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350878: funcgraph_entry:        0.718 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/4-31857 [003] 162723.350878: funcgraph_entry:        0.563 us   |          spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.350879: funcgraph_exit:         7.918 us   |                  }
      z_wr_iss/0-31853 [006] 162723.350879: funcgraph_exit:         9.454 us   |                }
      z_wr_iss/4-31857 [003] 162723.350880: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/0-31853 [006] 162723.350880: funcgraph_exit:       + 11.799 us  |              }
      z_wr_iss/4-31857 [003] 162723.350880: funcgraph_entry:        0.569 us   |            zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.350881: funcgraph_exit:       + 23.740 us  |            }
      z_wr_iss/4-31857 [003] 162723.350881: funcgraph_exit:         1.554 us   |          }
      z_wr_iss/0-31853 [006] 162723.350881: funcgraph_exit:       + 27.409 us  |          }
      z_wr_iss/4-31857 [003] 162723.350881: funcgraph_exit:       + 38.475 us  |        }
      z_wr_iss/0-31853 [006] 162723.350882: funcgraph_entry:        0.332 us   |          spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350882: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.350882: funcgraph_entry:        0.451 us   |          spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350883: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/4-31857 [003] 162723.350883: funcgraph_entry:        0.749 us   |            zio_add_child();
      z_wr_iss/0-31853 [006] 162723.350883: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/0-31853 [006] 162723.350884: funcgraph_entry:        0.376 us   |            zio_wait_for_children();
      z_wr_iss/4-31857 [003] 162723.350885: funcgraph_exit:         2.081 us   |          }
      z_wr_iss/0-31853 [006] 162723.350885: funcgraph_exit:         1.438 us   |          }
      z_wr_iss/0-31853 [006] 162723.350885: funcgraph_exit:       + 32.878 us  |        }
      z_wr_iss/4-31857 [003] 162723.350885: funcgraph_exit:         3.077 us   |        }
      z_wr_iss/0-31853 [006] 162723.350885: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.350886: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.350886: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/4-31857 [003] 162723.350886: funcgraph_entry:        0.554 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350886: funcgraph_entry:        0.645 us   |            zio_add_child();
      z_wr_iss/4-31857 [003] 162723.350887: funcgraph_entry:        0.539 us   |          spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.350888: funcgraph_exit:         1.780 us   |          }
      z_wr_iss/0-31853 [006] 162723.350888: funcgraph_exit:         2.608 us   |        }
      z_wr_iss/4-31857 [003] 162723.350888: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.350889: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.350889: funcgraph_entry:        0.515 us   |            zio_buf_alloc();
      z_wr_iss/0-31853 [006] 162723.350889: funcgraph_entry:        0.558 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350890: funcgraph_entry:        0.459 us   |          spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350891: funcgraph_entry:        0.683 us   |            zio_push_transform();
      z_wr_iss/0-31853 [006] 162723.350891: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.350891: funcgraph_entry:        0.593 us   |            zio_buf_alloc();
      z_wr_iss/4-31857 [003] 162723.350892: funcgraph_entry:        0.483 us   |            spa_writeable();
      z_wr_iss/4-31857 [003] 162723.350893: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/0-31853 [006] 162723.350893: funcgraph_entry:        0.533 us   |            zio_push_transform();
      z_wr_iss/0-31853 [006] 162723.350894: funcgraph_entry:        0.445 us   |            spa_writeable();
      z_wr_iss/4-31857 [003] 162723.350894: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.350894: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/4-31857 [003] 162723.350895: funcgraph_entry:        0.442 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.350896: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.350896: funcgraph_entry:        0.551 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.350897: funcgraph_entry:        0.386 us   |                vdev_readable();
      z_wr_iss/4-31857 [003] 162723.350897: funcgraph_exit:         3.058 us   |              }
      z_wr_iss/0-31853 [006] 162723.350897: funcgraph_entry:        0.390 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.350898: funcgraph_exit:         2.600 us   |              }
      z_wr_iss/0-31853 [006] 162723.350900: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.350901: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/4-31857 [003] 162723.350901: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/4-31857 [003] 162723.350901: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/0-31853 [006] 162723.350901: funcgraph_entry:        0.485 us   |                  zio_add_child();
      z_wr_iss/4-31857 [003] 162723.350902: funcgraph_entry:        0.631 us   |                  zio_add_child();
      z_wr_iss/0-31853 [006] 162723.350902: funcgraph_exit:         1.538 us   |                }
      z_wr_iss/0-31853 [006] 162723.350902: funcgraph_exit:         2.235 us   |              }
      z_wr_iss/0-31853 [006] 162723.350903: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/4-31857 [003] 162723.350903: funcgraph_exit:         1.878 us   |                }
      z_wr_iss/0-31853 [006] 162723.350903: funcgraph_entry:        0.315 us   |                spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350904: funcgraph_exit:         2.965 us   |              }
      z_wr_iss/0-31853 [006] 162723.350904: funcgraph_entry:        0.321 us   |                spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350904: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.350905: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.350905: funcgraph_entry:        0.527 us   |                spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350905: funcgraph_entry:        0.420 us   |                  spa_writeable();
      z_wr_iss/0-31853 [006] 162723.350906: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/4-31857 [003] 162723.350906: funcgraph_entry:        0.444 us   |                spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.350906: funcgraph_entry:        0.393 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.350907: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.350907: funcgraph_entry:        0.382 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.350907: funcgraph_entry:        0.478 us   |                  spa_writeable();
      z_wr_iss/0-31853 [006] 162723.350908: funcgraph_entry:        0.398 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.350908: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/0-31853 [006] 162723.350909: funcgraph_entry:        0.463 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/0-31853 [006] 162723.350910: funcgraph_exit:         4.120 us   |                  }
      z_wr_iss/0-31853 [006] 162723.350910: funcgraph_exit:         5.633 us   |                }
      z_wr_iss/4-31857 [003] 162723.350910: funcgraph_entry:        0.523 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.350910: funcgraph_exit:         7.655 us   |              }
      z_wr_iss/4-31857 [003] 162723.350911: funcgraph_entry:        0.607 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.350912: funcgraph_exit:       + 17.320 us  |            }
      z_wr_iss/0-31853 [006] 162723.350912: funcgraph_exit:       + 21.301 us  |          }
      z_wr_iss/4-31857 [003] 162723.350912: funcgraph_entry:        0.664 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.350912: funcgraph_entry:        0.311 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350913: funcgraph_entry:        0.422 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.350913: funcgraph_exit:       + 75.573 us  |        }
      z_wr_iss/4-31857 [003] 162723.350913: funcgraph_entry:        0.626 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.350914: funcgraph_entry:        0.624 us   |        zio_push_transform();
      z_wr_iss/0-31853 [006] 162723.350914: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/0-31853 [006] 162723.350914: funcgraph_entry:        0.348 us   |            zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.350915: funcgraph_exit:         1.033 us   |          }
      z_wr_iss/1-31854 [009] 162723.350915: funcgraph_exit:       + 82.535 us  |      }
      z_wr_iss/0-31853 [006] 162723.350915: funcgraph_exit:       + 26.712 us  |        }
      z_wr_iss/4-31857 [003] 162723.350915: funcgraph_entry:        0.894 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.350916: funcgraph_entry:        0.590 us   |      spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350916: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.350916: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.350917: funcgraph_entry:        0.497 us   |      spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350917: funcgraph_exit:         8.619 us   |                  }
      z_wr_iss/0-31853 [006] 162723.350917: funcgraph_entry:        0.558 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.350917: funcgraph_entry:                   |      zio_checksum_generate() {
      z_wr_iss/4-31857 [003] 162723.350918: funcgraph_exit:       + 10.793 us  |                }
      z_wr_iss/0-31853 [006] 162723.350918: funcgraph_exit:         1.740 us   |          }
      z_wr_iss/0-31853 [006] 162723.350918: funcgraph_exit:         2.451 us   |        }
      z_wr_iss/4-31857 [003] 162723.350918: funcgraph_exit:       + 13.814 us  |              }
      z_wr_iss/1-31854 [009] 162723.350918: funcgraph_entry:        2.033 us   |        zio_checksum_compute();
      z_wr_iss/0-31853 [006] 162723.350918: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.350919: funcgraph_entry:        0.323 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350920: funcgraph_entry:        0.329 us   |          spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350920: funcgraph_exit:       + 26.983 us  |            }
      z_wr_iss/4-31857 [003] 162723.350920: funcgraph_exit:       + 31.809 us  |          }
      z_wr_iss/0-31853 [006] 162723.350920: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.350921: funcgraph_entry:        0.401 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.350921: funcgraph_exit:         3.150 us   |      }
      z_wr_iss/4-31857 [003] 162723.350921: funcgraph_entry:        0.575 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.350921: funcgraph_entry:        0.453 us   |      spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350922: funcgraph_entry:        0.588 us   |            zio_push_transform();
      z_wr_iss/4-31857 [003] 162723.350922: funcgraph_entry:        0.657 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.350922: funcgraph_entry:        1.780 us   |      zio_taskq_member();
      z_wr_iss/0-31853 [006] 162723.350923: funcgraph_entry:        0.292 us   |            spa_writeable();
      z_wr_iss/4-31857 [003] 162723.350923: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/0-31853 [006] 162723.350923: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/4-31857 [003] 162723.350924: funcgraph_entry:        0.645 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.350924: funcgraph_entry:        0.604 us   |      spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.350925: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.350925: funcgraph_exit:         1.804 us   |          }
      z_wr_iss/0-31853 [006] 162723.350925: funcgraph_entry:        0.591 us   |                vdev_readable();
      z_wr_iss/4-31857 [003] 162723.350926: funcgraph_exit:       + 40.057 us  |        }
      z_wr_iss/1-31854 [009] 162723.350926: funcgraph_entry:                   |      zio_dva_allocate() {
      z_wr_iss/1-31854 [009] 162723.350926: funcgraph_entry:        0.582 us   |        spa_normal_class();
      z_wr_iss/4-31857 [003] 162723.350926: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.350926: funcgraph_entry:        0.506 us   |                vdev_readable();
      z_wr_iss/4-31857 [003] 162723.350927: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/0-31853 [006] 162723.350927: funcgraph_exit:         2.722 us   |              }
      z_wr_iss/1-31854 [009] 162723.350928: funcgraph_entry:                   |        metaslab_alloc() {
      z_wr_iss/4-31857 [003] 162723.350928: funcgraph_entry:        0.935 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.350928: funcgraph_entry:        0.647 us   |          spa_config_enter();
      z_wr_iss/0-31853 [006] 162723.350929: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.350929: funcgraph_entry:        0.740 us   |          vdev_allocatable();
      z_wr_iss/4-31857 [003] 162723.350929: funcgraph_exit:         2.380 us   |          }
      z_wr_iss/0-31853 [006] 162723.350930: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/4-31857 [003] 162723.350930: funcgraph_exit:         3.794 us   |        }
      z_wr_iss/0-31853 [006] 162723.350930: funcgraph_entry:        0.771 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.350931: funcgraph_entry:                   |          vdev_psize_to_asize() {
      z_wr_iss/4-31857 [003] 162723.350931: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.350931: funcgraph_entry:                   |            vdev_default_asize() {
      z_wr_iss/0-31853 [006] 162723.350931: funcgraph_exit:         1.666 us   |                }
      z_wr_iss/4-31857 [003] 162723.350931: funcgraph_entry:        0.702 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.350932: funcgraph_exit:         2.433 us   |              }
      z_wr_iss/1-31854 [009] 162723.350932: funcgraph_entry:        0.637 us   |              vdev_default_asize();
      z_wr_iss/0-31853 [006] 162723.350932: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.350932: funcgraph_entry:        0.315 us   |                spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350933: funcgraph_entry:        0.692 us   |          spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.350933: funcgraph_entry:        0.377 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.350933: funcgraph_entry:        0.605 us   |              vdev_default_asize();
      z_wr_iss/0-31853 [006] 162723.350934: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/4-31857 [003] 162723.350934: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.350934: funcgraph_entry:        0.341 us   |                  spa_writeable();
      z_wr_iss/1-31854 [009] 162723.350934: funcgraph_exit:         2.911 us   |            }
      z_wr_iss/1-31854 [009] 162723.350935: funcgraph_exit:         3.984 us   |          }
      z_wr_iss/4-31857 [003] 162723.350935: funcgraph_entry:        0.806 us   |            zio_buf_alloc();
      z_wr_iss/0-31853 [006] 162723.350935: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.350936: funcgraph_entry:        0.527 us   |          metaslab_activate();
      z_wr_iss/1-31854 [009] 162723.350937: funcgraph_entry:                   |          space_map_alloc() {
      z_wr_iss/4-31857 [003] 162723.350937: funcgraph_entry:        0.860 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.350937: funcgraph_entry:                   |            metaslab_df_alloc() {
      z_wr_iss/1-31854 [009] 162723.350938: funcgraph_entry:        0.817 us   |              metaslab_pp_maxsize();
      z_wr_iss/4-31857 [003] 162723.350938: funcgraph_entry:        0.551 us   |            spa_writeable();
      z_wr_iss/1-31854 [009] 162723.350939: funcgraph_entry:                   |              metaslab_block_picker.clone.0() {
      z_wr_iss/4-31857 [003] 162723.350939: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.350940: funcgraph_entry:        0.404 us   |                space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.350941: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.350941: funcgraph_exit:         1.710 us   |              }
      z_wr_iss/1-31854 [009] 162723.350942: funcgraph_exit:         4.325 us   |            }
      z_wr_iss/4-31857 [003] 162723.350942: funcgraph_entry:        0.584 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.350942: funcgraph_entry:                   |            space_map_remove() {
      z_wr_iss/1-31854 [009] 162723.350943: funcgraph_entry:                   |              space_map_find() {
      z_wr_iss/4-31857 [003] 162723.350943: funcgraph_entry:        0.617 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.350943: funcgraph_entry:        0.751 us   |                space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.350944: funcgraph_exit:         3.576 us   |              }
      z_wr_iss/1-31854 [009] 162723.350945: funcgraph_exit:         1.940 us   |              }
      z_wr_iss/1-31854 [009] 162723.350945: funcgraph_entry:        0.487 us   |              metaslab_segsize_compare();
      z_wr_iss/4-31857 [003] 162723.350946: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.350946: funcgraph_exit:         4.286 us   |            }
      z_wr_iss/4-31857 [003] 162723.350947: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.350947: funcgraph_exit:       + 10.560 us  |          }
      z_wr_iss/1-31854 [009] 162723.350948: funcgraph_entry:                   |          space_map_add() {
      z_wr_iss/4-31857 [003] 162723.350948: funcgraph_entry:        1.011 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.350948: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/1-31854 [009] 162723.350949: funcgraph_entry:        0.566 us   |              space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.350949: funcgraph_exit:         2.756 us   |                }
      z_wr_iss/1-31854 [009] 162723.350950: funcgraph_exit:         1.861 us   |            }
      z_wr_iss/4-31857 [003] 162723.350950: funcgraph_exit:         3.966 us   |              }
      z_wr_iss/4-31857 [003] 162723.350951: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.350951: funcgraph_exit:         3.240 us   |          }
      z_wr_iss/4-31857 [003] 162723.350951: funcgraph_entry:        0.684 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.350952: funcgraph_entry:        0.471 us   |          vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.350952: funcgraph_entry:        0.374 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.350952: funcgraph_entry:        0.548 us   |                spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.350952: funcgraph_entry:        0.334 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.350953: funcgraph_entry:        0.553 us   |          vdev_allocatable();
      z_wr_iss/0-31853 [006] 162723.350953: funcgraph_entry:        0.485 us   |                    vdev_queue_offset_compare();
      z_wr_iss/4-31857 [003] 162723.350953: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.350954: funcgraph_entry:                   |          vdev_psize_to_asize() {
      z_wr_iss/4-31857 [003] 162723.350954: funcgraph_entry:        0.652 us   |                  spa_writeable();
      z_wr_iss/1-31854 [009] 162723.350954: funcgraph_entry:                   |            vdev_default_asize() {
      z_wr_iss/0-31853 [006] 162723.350954: funcgraph_entry:        0.500 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.350955: funcgraph_entry:        0.530 us   |              vdev_default_asize();
      z_wr_iss/0-31853 [006] 162723.350955: funcgraph_exit:       + 20.378 us  |                  }
      z_wr_iss/4-31857 [003] 162723.350955: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/0-31853 [006] 162723.350955: funcgraph_exit:       + 21.814 us  |                }
      z_wr_iss/0-31853 [006] 162723.350956: funcgraph_exit:       + 23.921 us  |              }
      z_wr_iss/1-31854 [009] 162723.350956: funcgraph_entry:        0.715 us   |              vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.350956: funcgraph_entry:        0.707 us   |                    vdev_queue_offset_compare();
      z_wr_iss/0-31853 [006] 162723.350957: funcgraph_exit:       + 33.615 us  |            }
      z_wr_iss/0-31853 [006] 162723.350957: funcgraph_exit:       + 37.048 us  |          }
      z_wr_iss/1-31854 [009] 162723.350957: funcgraph_exit:         3.171 us   |            }
      z_wr_iss/0-31853 [006] 162723.350958: funcgraph_entry:        0.414 us   |          spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350958: funcgraph_entry:        0.620 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.350958: funcgraph_exit:         4.224 us   |          }
      z_wr_iss/0-31853 [006] 162723.350958: funcgraph_entry:        0.376 us   |          spa_is_initializing();
      z_wr_iss/4-31857 [003] 162723.350959: funcgraph_entry:        0.696 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.350959: funcgraph_entry:        0.739 us   |          metaslab_activate();
      z_wr_iss/0-31853 [006] 162723.350959: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/0-31853 [006] 162723.350959: funcgraph_entry:        0.363 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.350960: funcgraph_entry:                   |          space_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.350960: funcgraph_exit:         1.109 us   |          }
      z_wr_iss/1-31854 [009] 162723.350961: funcgraph_entry:                   |            metaslab_df_alloc() {
      z_wr_iss/0-31853 [006] 162723.350961: funcgraph_exit:       + 42.094 us  |        }
      z_wr_iss/4-31857 [003] 162723.350961: funcgraph_entry:        0.838 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/0-31853 [006] 162723.350961: funcgraph_exit:       ! 119.528 us |      }
      z_wr_iss/1-31854 [009] 162723.350961: funcgraph_entry:        0.767 us   |              metaslab_pp_maxsize();
      z_wr_iss/0-31853 [006] 162723.350961: funcgraph_exit:       ! 121.447 us |    }
      z_wr_iss/0-31853 [006] 162723.350962: funcgraph_entry:        0.330 us   |    spa_get_dsl();
      z_wr_iss/4-31857 [003] 162723.350962: funcgraph_exit:         6.559 us   |                  }
      z_wr_iss/0-31853 [006] 162723.350962: funcgraph_entry:        0.438 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.350962: funcgraph_entry:                   |              metaslab_block_picker.clone.0() {
      z_wr_iss/4-31857 [003] 162723.350962: funcgraph_exit:         9.024 us   |                }
      z_wr_iss/1-31854 [009] 162723.350963: funcgraph_entry:        0.693 us   |                space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.350963: funcgraph_exit:       + 12.467 us  |              }
      z_wr_iss/0-31853 [006] 162723.350963: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/0-31853 [006] 162723.350963: funcgraph_entry:        0.341 us   |      zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.350964: funcgraph_exit:         1.617 us   |              }
      z_wr_iss/0-31853 [006] 162723.350964: funcgraph_exit:         1.043 us   |    }
      z_wr_iss/1-31854 [009] 162723.350964: funcgraph_exit:         3.877 us   |            }
      z_wr_iss/0-31853 [006] 162723.350964: funcgraph_exit:       ! 202.572 us |  }
      z_wr_iss/4-31857 [003] 162723.350965: funcgraph_exit:       + 25.247 us  |            }
      z_wr_iss/1-31854 [009] 162723.350965: funcgraph_entry:                   |            space_map_remove() {
      z_wr_iss/4-31857 [003] 162723.350965: funcgraph_exit:       + 31.135 us  |          }
      z_wr_iss/1-31854 [009] 162723.350966: funcgraph_entry:                   |              space_map_find() {
      z_wr_iss/4-31857 [003] 162723.350966: funcgraph_entry:        0.878 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.350966: funcgraph_entry:        0.583 us   |                space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.350967: funcgraph_entry:        0.666 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.350967: funcgraph_exit:         1.988 us   |              }
      z_wr_iss/1-31854 [009] 162723.350968: funcgraph_entry:        0.485 us   |              metaslab_segsize_compare();
      z_wr_iss/4-31857 [003] 162723.350969: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.350969: funcgraph_exit:         4.428 us   |            }
      z_wr_iss/4-31857 [003] 162723.350969: funcgraph_entry:        0.698 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.350970: funcgraph_exit:         9.860 us   |          }
      z_wr_iss/1-31854 [009] 162723.350971: funcgraph_entry:                   |          space_map_add() {
      z_wr_iss/4-31857 [003] 162723.350971: funcgraph_exit:         2.119 us   |          }
      z_wr_iss/1-31854 [009] 162723.350971: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/4-31857 [003] 162723.350971: funcgraph_exit:       + 40.697 us  |        }
      z_wr_iss/1-31854 [009] 162723.350972: funcgraph_entry:        0.577 us   |              space_map_seg_compare();
      z_wr_iss/4-31857 [003] 162723.350972: funcgraph_exit:       ! 144.582 us |      }
      z_wr_iss/4-31857 [003] 162723.350973: funcgraph_exit:       ! 147.562 us |    }
      z_wr_iss/1-31854 [009] 162723.350973: funcgraph_exit:         1.790 us   |            }
      z_wr_iss/4-31857 [003] 162723.350973: funcgraph_entry:        0.676 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.350973: funcgraph_exit:         2.841 us   |          }
      z_wr_iss/1-31854 [009] 162723.350974: funcgraph_entry:        0.668 us   |          vdev_lookup_top();
      z_wr_iss/4-31857 [003] 162723.350975: funcgraph_entry:        0.611 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.350975: funcgraph_entry:        0.464 us   |          vdev_allocatable();
      z_wr_iss/1-31854 [009] 162723.350976: funcgraph_entry:                   |          vdev_psize_to_asize() {
      z_wr_iss/4-31857 [003] 162723.350976: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.350977: funcgraph_entry:                   |            vdev_default_asize() {
      z_wr_iss/4-31857 [003] 162723.350977: funcgraph_entry:        0.749 us   |      zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.350977: funcgraph_entry:        0.447 us   |              vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.350978: funcgraph_exit:         1.991 us   |    }
      z_wr_iss/1-31854 [009] 162723.350978: funcgraph_entry:        0.693 us   |              vdev_default_asize();
      z_wr_iss/4-31857 [003] 162723.350979: funcgraph_exit:       ! 304.390 us |  }
      z_wr_iss/1-31854 [009] 162723.350979: funcgraph_exit:         2.711 us   |            }
      z_wr_iss/1-31854 [009] 162723.350980: funcgraph_exit:         3.621 us   |          }
      z_wr_iss/1-31854 [009] 162723.350981: funcgraph_entry:        0.445 us   |          metaslab_activate();
      z_wr_iss/1-31854 [009] 162723.350982: funcgraph_entry:                   |          space_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.350982: funcgraph_entry:                   |            metaslab_df_alloc() {
      z_wr_iss/1-31854 [009] 162723.350983: funcgraph_entry:        0.578 us   |              metaslab_pp_maxsize();
      z_wr_iss/1-31854 [009] 162723.350984: funcgraph_entry:                   |              metaslab_block_picker.clone.0() {
      z_wr_iss/1-31854 [009] 162723.350984: funcgraph_entry:        0.321 us   |                space_map_seg_compare();
      z_wr_iss/1-31854 [009] 162723.350985: funcgraph_exit:         1.277 us   |              }
      z_wr_iss/1-31854 [009] 162723.350985: funcgraph_exit:         3.100 us   |            }
      z_wr_iss/1-31854 [009] 162723.350985: funcgraph_entry:                   |            space_map_remove() {
      z_wr_iss/1-31854 [009] 162723.350986: funcgraph_entry:                   |              space_map_find() {
      z_wr_iss/1-31854 [009] 162723.350986: funcgraph_entry:        0.280 us   |                space_map_seg_compare();
      z_wr_iss/1-31854 [009] 162723.350986: funcgraph_exit:         0.796 us   |              }
      z_wr_iss/1-31854 [009] 162723.350987: funcgraph_exit:         1.388 us   |            }
      z_wr_iss/1-31854 [009] 162723.350987: funcgraph_exit:         5.460 us   |          }
      z_wr_iss/1-31854 [009] 162723.350987: funcgraph_entry:                   |          space_map_add() {
      z_wr_iss/1-31854 [009] 162723.350988: funcgraph_entry:                   |            space_map_find() {
      z_wr_iss/1-31854 [009] 162723.350988: funcgraph_entry:        0.255 us   |              space_map_seg_compare();
      z_wr_iss/1-31854 [009] 162723.350989: funcgraph_exit:         0.807 us   |            }
      z_wr_iss/1-31854 [009] 162723.350989: funcgraph_exit:         1.410 us   |          }
      z_wr_iss/1-31854 [009] 162723.350989: funcgraph_entry:        0.411 us   |          spa_config_exit();
      z_wr_iss/1-31854 [009] 162723.350990: funcgraph_exit:       + 62.477 us  |        }
      z_wr_iss/1-31854 [009] 162723.350990: funcgraph_exit:       + 64.497 us  |      }
      z_wr_iss/1-31854 [009] 162723.350991: funcgraph_entry:        0.285 us   |      spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.350991: funcgraph_entry:        0.264 us   |      spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.350992: funcgraph_entry:                   |      zio_ready() {
      z_wr_iss/1-31854 [009] 162723.350992: funcgraph_entry:        0.320 us   |        zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.350992: funcgraph_entry:        0.309 us   |        zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.350993: funcgraph_entry:                   |        arc_write_ready() {
      z_wr_iss/1-31854 [009] 162723.350994: funcgraph_entry:                   |          dbuf_write_ready() {
      z_wr_iss/1-31854 [009] 162723.350994: funcgraph_entry:        0.386 us   |            zrl_add();
      z_wr_iss/1-31854 [009] 162723.350995: funcgraph_entry:                   |            bp_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.350995: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.350995: funcgraph_entry:        0.276 us   |                vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.350996: funcgraph_exit:         0.811 us   |              }
      z_wr_iss/1-31854 [009] 162723.350996: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.350996: funcgraph_entry:        0.265 us   |                vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.350997: funcgraph_exit:         0.829 us   |              }
      z_wr_iss/1-31854 [009] 162723.350997: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.350998: funcgraph_entry:        0.262 us   |                vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.350998: funcgraph_exit:         0.815 us   |              }
      z_wr_iss/1-31854 [009] 162723.350998: funcgraph_exit:         3.645 us   |            }
      z_wr_iss/1-31854 [009] 162723.350999: funcgraph_entry:                   |            bp_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.350999: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.350999: funcgraph_entry:        0.261 us   |                vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.351000: funcgraph_exit:         0.761 us   |              }
      z_wr_iss/1-31854 [009] 162723.351000: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.351000: funcgraph_entry:        0.296 us   |                vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.351001: funcgraph_exit:         0.848 us   |              }
      z_wr_iss/1-31854 [009] 162723.351001: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.351001: funcgraph_entry:        0.278 us   |                vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.351002: funcgraph_exit:         0.798 us   |              }
      z_wr_iss/1-31854 [009] 162723.351002: funcgraph_exit:         3.405 us   |            }
      z_wr_iss/1-31854 [009] 162723.351002: funcgraph_entry:                   |            dnode_diduse_space() {
      z_wr_iss/1-31854 [009] 162723.351003: funcgraph_entry:        0.273 us   |              spa_version();
      z_wr_iss/1-31854 [009] 162723.351003: funcgraph_exit:         0.876 us   |            }
      z_wr_iss/1-31854 [009] 162723.351004: funcgraph_entry:        0.249 us   |            zrl_remove();
      z_wr_iss/1-31854 [009] 162723.351004: funcgraph_exit:       + 10.377 us  |          }
      z_wr_iss/1-31854 [009] 162723.351004: funcgraph_entry:        0.284 us   |          arc_cksum_compute();
      z_wr_iss/1-31854 [009] 162723.351005: funcgraph_exit:       + 11.746 us  |        }
      z_wr_iss/1-31854 [009] 162723.351005: funcgraph_entry:        0.289 us   |        zio_walk_parents();
      z_wr_iss/1-31854 [009] 162723.351006: funcgraph_entry:        0.266 us   |        zio_walk_parents();
      z_wr_iss/1-31854 [009] 162723.351006: funcgraph_entry:        0.276 us   |        spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351007: funcgraph_entry:        0.281 us   |        spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351007: funcgraph_entry:                   |        zio_write_bp_init() {
      z_wr_iss/1-31854 [009] 162723.351008: funcgraph_entry:        0.301 us   |          zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351008: funcgraph_entry:        0.264 us   |          zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351009: funcgraph_entry:        0.252 us   |          spa_sync_pass();
      z_wr_iss/1-31854 [009] 162723.351009: funcgraph_entry:        0.523 us   |          zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.351010: funcgraph_entry:                   |          zio_compress_data() {
      z_wr_iss/1-31854 [009] 162723.351010: funcgraph_entry:        5.669 us   |            lzjb_compress();
      z_wr_iss/1-31854 [009] 162723.351016: funcgraph_exit:         6.288 us   |          }
      z_wr_iss/1-31854 [009] 162723.351017: funcgraph_entry:        0.327 us   |          zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.351017: funcgraph_exit:         9.933 us   |        }
      z_wr_iss/1-31854 [009] 162723.351018: funcgraph_entry:        0.258 us   |        spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351018: funcgraph_entry:        0.252 us   |        spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351019: funcgraph_entry:                   |        zio_checksum_generate() {
      z_wr_iss/1-31854 [009] 162723.351019: funcgraph_entry:        0.424 us   |          zio_checksum_compute();
      z_wr_iss/1-31854 [009] 162723.351019: funcgraph_exit:         0.911 us   |        }
      z_wr_iss/1-31854 [009] 162723.351020: funcgraph_entry:        0.263 us   |        spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351020: funcgraph_entry:        0.269 us   |        spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351021: funcgraph_entry:                   |        zio_ready() {
      z_wr_iss/1-31854 [009] 162723.351021: funcgraph_entry:        0.280 us   |          zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351022: funcgraph_entry:        0.272 us   |          zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351022: funcgraph_entry:                   |          arc_write_ready() {
      z_wr_iss/1-31854 [009] 162723.351022: funcgraph_entry:        0.295 us   |            dmu_objset_write_ready();
      z_wr_iss/1-31854 [009] 162723.351023: funcgraph_entry:        0.266 us   |            arc_cksum_compute();
      z_wr_iss/1-31854 [009] 162723.351024: funcgraph_exit:         1.514 us   |          }
      z_wr_iss/1-31854 [009] 162723.351024: funcgraph_entry:        0.299 us   |          zio_walk_parents();
      z_wr_iss/1-31854 [009] 162723.351025: funcgraph_entry:        0.266 us   |          zio_walk_parents();
      z_wr_iss/1-31854 [009] 162723.351025: funcgraph_exit:         4.606 us   |        }
      z_wr_iss/1-31854 [009] 162723.351026: funcgraph_entry:        0.283 us   |        spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351026: funcgraph_entry:        1.182 us   |        zio_taskq_member();
      z_wr_iss/1-31854 [009] 162723.351028: funcgraph_entry:        0.256 us   |        spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351028: funcgraph_entry:                   |        zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351029: funcgraph_entry:        0.398 us   |          spa_config_enter();
      z_wr_iss/1-31854 [009] 162723.351029: funcgraph_entry:                   |          vdev_mirror_io_start() {
      z_wr_iss/1-31854 [009] 162723.351029: funcgraph_entry:                   |            vdev_mirror_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.351030: funcgraph_entry:        2.635 us   |              spa_get_random();
      z_wr_iss/1-31854 [009] 162723.351033: funcgraph_entry:        0.271 us   |              vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.351034: funcgraph_entry:        0.318 us   |              vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.351034: funcgraph_entry:        0.318 us   |              vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.351035: funcgraph_exit:         5.220 us   |            }
      z_wr_iss/1-31854 [009] 162723.351035: funcgraph_entry:                   |            zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351035: funcgraph_entry:                   |              zio_create() {
      z_wr_iss/1-31854 [009] 162723.351036: funcgraph_entry:        0.513 us   |                zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351037: funcgraph_exit:         1.512 us   |              }
      z_wr_iss/1-31854 [009] 162723.351037: funcgraph_exit:         2.126 us   |            }
      z_wr_iss/1-31854 [009] 162723.351037: funcgraph_entry:                   |            zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351038: funcgraph_entry:        0.263 us   |              spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351038: funcgraph_entry:        0.254 us   |              spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351039: funcgraph_entry:                   |              zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351039: funcgraph_entry:        0.464 us   |                zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.351040: funcgraph_entry:        0.419 us   |                zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.351041: funcgraph_entry:        0.283 us   |                spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351041: funcgraph_entry:                   |                vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.351043: funcgraph_entry:                   |                  vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.351043: funcgraph_entry:        0.442 us   |                    vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351044: funcgraph_entry:        0.273 us   |                    vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351045: funcgraph_exit:         1.968 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351046: funcgraph_entry:                   |                  zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351046: funcgraph_entry:                   |                    zio_create() {
      z_wr_iss/1-31854 [009] 162723.351047: funcgraph_entry:        0.517 us   |                      zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351048: funcgraph_exit:         1.502 us   |                    }
      z_wr_iss/1-31854 [009] 162723.351048: funcgraph_exit:         2.086 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351048: funcgraph_entry:                   |                  zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351048: funcgraph_entry:        0.364 us   |                    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351049: funcgraph_entry:        0.251 us   |                    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351050: funcgraph_entry:                   |                    zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351050: funcgraph_entry:        0.238 us   |                      spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351050: funcgraph_entry:                   |                      vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.351059: funcgraph_entry:        0.362 us   |                        vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351060: funcgraph_entry:        0.288 us   |                        vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351061: funcgraph_entry:        0.466 us   |                        vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.351062: funcgraph_exit:       + 11.262 us  |                      }
      z_wr_iss/1-31854 [009] 162723.351062: funcgraph_exit:       + 12.371 us  |                    }
      z_wr_iss/1-31854 [009] 162723.351062: funcgraph_exit:       + 14.026 us  |                  }
      z_wr_iss/1-31854 [009] 162723.351063: funcgraph_exit:       + 21.546 us  |                }
      z_wr_iss/1-31854 [009] 162723.351063: funcgraph_exit:       + 24.577 us  |              }
      z_wr_iss/1-31854 [009] 162723.351064: funcgraph_entry:        0.266 us   |              spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351064: funcgraph_entry:        0.250 us   |              spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351065: funcgraph_entry:                   |              zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.351065: funcgraph_entry:        0.292 us   |                zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351065: funcgraph_exit:         0.810 us   |              }
      z_wr_iss/1-31854 [009] 162723.351066: funcgraph_exit:       + 28.298 us  |            }
      z_wr_iss/1-31854 [009] 162723.351066: funcgraph_entry:                   |            zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351067: funcgraph_entry:                   |              zio_create() {
      z_wr_iss/1-31854 [009] 162723.351067: funcgraph_entry:        0.456 us   |                zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351068: funcgraph_exit:         1.281 us   |              }
      z_wr_iss/1-31854 [009] 162723.351068: funcgraph_exit:         1.819 us   |            }
      z_wr_iss/1-31854 [009] 162723.351068: funcgraph_entry:                   |            zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351069: funcgraph_entry:        0.212 us   |              spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351069: funcgraph_entry:        0.232 us   |              spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351070: funcgraph_entry:                   |              zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351070: funcgraph_entry:        0.268 us   |                zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.351071: funcgraph_entry:        0.334 us   |                zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.351071: funcgraph_entry:        0.217 us   |                spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351072: funcgraph_entry:                   |                vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.351073: funcgraph_entry:                   |                  vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.351073: funcgraph_entry:        0.254 us   |                    vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351074: funcgraph_entry:        0.274 us   |                    vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351074: funcgraph_exit:         1.578 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351075: funcgraph_entry:                   |                  zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351075: funcgraph_entry:                   |                    zio_create() {
      z_wr_iss/1-31854 [009] 162723.351076: funcgraph_entry:        0.598 us   |                      zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351077: funcgraph_exit:         1.276 us   |                    }
      z_wr_iss/1-31854 [009] 162723.351077: funcgraph_exit:         1.761 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351077: funcgraph_entry:                   |                  zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351077: funcgraph_entry:        0.229 us   |                    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351078: funcgraph_entry:        0.241 us   |                    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351078: funcgraph_entry:                   |                    zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351078: funcgraph_entry:        0.248 us   |                      spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351079: funcgraph_entry:                   |                      vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.351079: funcgraph_entry:        0.285 us   |                        vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351080: funcgraph_entry:        0.238 us   |                        vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351080: funcgraph_entry:        0.264 us   |                        vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351081: funcgraph_entry:        0.383 us   |                        vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.351082: funcgraph_exit:         2.670 us   |                      }
      z_wr_iss/1-31854 [009] 162723.351082: funcgraph_exit:         3.685 us   |                    }
      z_wr_iss/1-31854 [009] 162723.351082: funcgraph_exit:         5.106 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351083: funcgraph_exit:       + 10.962 us  |                }
      z_wr_iss/1-31854 [009] 162723.351083: funcgraph_exit:       + 13.514 us  |              }
      z_wr_iss/1-31854 [009] 162723.351083: funcgraph_entry:        0.233 us   |              spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351084: funcgraph_entry:        0.243 us   |              spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351084: funcgraph_entry:                   |              zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.351084: funcgraph_entry:        0.243 us   |                zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351085: funcgraph_exit:         0.687 us   |              }
      z_wr_iss/1-31854 [009] 162723.351085: funcgraph_exit:       + 16.780 us  |            }
      z_wr_iss/1-31854 [009] 162723.351085: funcgraph_entry:                   |            zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351086: funcgraph_entry:                   |              zio_create() {
      z_wr_iss/1-31854 [009] 162723.351086: funcgraph_entry:        0.447 us   |                zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351087: funcgraph_exit:         1.218 us   |              }
      z_wr_iss/1-31854 [009] 162723.351087: funcgraph_exit:         1.716 us   |            }
      z_wr_iss/1-31854 [009] 162723.351087: funcgraph_entry:                   |            zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351088: funcgraph_entry:        0.217 us   |              spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351088: funcgraph_entry:        0.236 us   |              spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351088: funcgraph_entry:                   |              zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351089: funcgraph_entry:        0.285 us   |                zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.351090: funcgraph_entry:        0.309 us   |                zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.351090: funcgraph_entry:        0.222 us   |                spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351091: funcgraph_entry:                   |                vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.351091: funcgraph_entry:                   |                  vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.351092: funcgraph_entry:        0.240 us   |                    vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351092: funcgraph_entry:        0.265 us   |                    vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351093: funcgraph_exit:         1.736 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351094: funcgraph_entry:                   |                  zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351094: funcgraph_entry:                   |                    zio_create() {
      z_wr_iss/1-31854 [009] 162723.351095: funcgraph_entry:        0.527 us   |                      zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351096: funcgraph_exit:         1.373 us   |                    }
      z_wr_iss/1-31854 [009] 162723.351096: funcgraph_exit:         1.965 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351096: funcgraph_entry:                   |                  zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351097: funcgraph_entry:        0.245 us   |                    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351097: funcgraph_entry:        0.269 us   |                    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351098: funcgraph_entry:                   |                    zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351098: funcgraph_entry:        0.243 us   |                      spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351098: funcgraph_entry:                   |                      vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.351099: funcgraph_entry:        0.264 us   |                        vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351099: funcgraph_entry:        0.249 us   |                        vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351100: funcgraph_entry:        0.272 us   |                        vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351100: funcgraph_entry:        0.315 us   |                        vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.351101: funcgraph_exit:         2.601 us   |                      }
      z_wr_iss/1-31854 [009] 162723.351101: funcgraph_exit:         3.681 us   |                    }
      z_wr_iss/1-31854 [009] 162723.351102: funcgraph_exit:         5.255 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351102: funcgraph_exit:       + 11.523 us  |                }
      z_wr_iss/1-31854 [009] 162723.351103: funcgraph_exit:       + 14.016 us  |              }
      z_wr_iss/1-31854 [009] 162723.351103: funcgraph_entry:        0.242 us   |              spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351103: funcgraph_entry:        0.243 us   |              spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351104: funcgraph_entry:                   |              zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.351104: funcgraph_entry:        0.272 us   |                zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351105: funcgraph_exit:         0.779 us   |              }
      z_wr_iss/1-31854 [009] 162723.351105: funcgraph_exit:       + 17.404 us  |            }
      z_wr_iss/1-31854 [009] 162723.351105: funcgraph_exit:       + 75.792 us  |          }
      z_wr_iss/1-31854 [009] 162723.351105: funcgraph_exit:       + 77.053 us  |        }
      z_wr_iss/1-31854 [009] 162723.351105: funcgraph_entry:        0.249 us   |        spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351106: funcgraph_entry:        0.243 us   |        spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351106: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.351107: funcgraph_entry:        0.278 us   |          zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351107: funcgraph_exit:         0.799 us   |        }
      z_wr_iss/1-31854 [009] 162723.351108: funcgraph_exit:       ! 115.932 us |      }
      z_wr_iss/1-31854 [009] 162723.351108: funcgraph_entry:        0.247 us   |      spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351108: funcgraph_entry:        0.866 us   |      zio_taskq_member();
      z_wr_iss/1-31854 [009] 162723.351109: funcgraph_entry:        0.271 us   |      spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351110: funcgraph_entry:                   |      zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351110: funcgraph_entry:        0.349 us   |        spa_config_enter();
      z_wr_iss/1-31854 [009] 162723.351111: funcgraph_entry:                   |        vdev_mirror_io_start() {
      z_wr_iss/1-31854 [009] 162723.351111: funcgraph_entry:                   |          vdev_mirror_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.351111: funcgraph_entry:        2.188 us   |            spa_get_random();
      z_wr_iss/1-31854 [009] 162723.351114: funcgraph_entry:        0.276 us   |            vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.351115: funcgraph_entry:        0.304 us   |            vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.351115: funcgraph_entry:        0.290 us   |            vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.351116: funcgraph_exit:         4.610 us   |          }
      z_wr_iss/1-31854 [009] 162723.351116: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351116: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/1-31854 [009] 162723.351117: funcgraph_entry:        0.540 us   |              zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351118: funcgraph_exit:         1.385 us   |            }
      z_wr_iss/1-31854 [009] 162723.351118: funcgraph_exit:         1.901 us   |          }
      z_wr_iss/1-31854 [009] 162723.351118: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351118: funcgraph_entry:        0.275 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351119: funcgraph_entry:        0.270 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351119: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351120: funcgraph_entry:        0.294 us   |              zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.351121: funcgraph_entry:        0.605 us   |              zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.351122: funcgraph_entry:        0.297 us   |              spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351122: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.351123: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.351123: funcgraph_entry:        0.277 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351124: funcgraph_entry:        0.287 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351125: funcgraph_exit:         1.674 us   |                }
      z_wr_iss/1-31854 [009] 162723.351126: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351126: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/1-31854 [009] 162723.351127: funcgraph_entry:        0.527 us   |                    zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351127: funcgraph_exit:         1.410 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351128: funcgraph_exit:         1.975 us   |                }
      z_wr_iss/1-31854 [009] 162723.351128: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351128: funcgraph_entry:        0.256 us   |                  spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351129: funcgraph_entry:        0.245 us   |                  spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351129: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351129: funcgraph_entry:        0.275 us   |                    spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351130: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.351130: funcgraph_entry:        0.299 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351131: funcgraph_entry:        0.273 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351131: funcgraph_entry:        0.245 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351132: funcgraph_entry:        0.273 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351133: funcgraph_entry:        0.326 us   |                      vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.351133: funcgraph_exit:         3.220 us   |                    }
      z_wr_iss/1-31854 [009] 162723.351133: funcgraph_exit:         4.321 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351134: funcgraph_exit:         5.772 us   |                }
      z_wr_iss/1-31854 [009] 162723.351134: funcgraph_exit:       + 12.100 us  |              }
      z_wr_iss/1-31854 [009] 162723.351135: funcgraph_exit:       + 15.231 us  |            }
      z_wr_iss/1-31854 [009] 162723.351135: funcgraph_entry:        0.241 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351135: funcgraph_entry:        0.250 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351136: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.351136: funcgraph_entry:        0.298 us   |              zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351137: funcgraph_exit:         0.791 us   |            }
      z_wr_iss/1-31854 [009] 162723.351137: funcgraph_exit:       + 18.817 us  |          }
      z_wr_iss/1-31854 [009] 162723.351137: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351137: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/1-31854 [009] 162723.351138: funcgraph_entry:        0.546 us   |              zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351139: funcgraph_exit:         1.366 us   |            }
      z_wr_iss/1-31854 [009] 162723.351139: funcgraph_exit:         1.872 us   |          }
      z_wr_iss/1-31854 [009] 162723.351139: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351140: funcgraph_entry:        0.248 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351140: funcgraph_entry:        0.255 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351141: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351141: funcgraph_entry:        0.280 us   |              zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.351142: funcgraph_entry:        4.860 us   |              zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.351148: funcgraph_entry:        0.742 us   |              spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351149: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.351150: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.351151: funcgraph_entry:        0.544 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351152: funcgraph_entry:        0.739 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351153: funcgraph_exit:         3.313 us   |                }
      z_wr_iss/1-31854 [009] 162723.351155: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351155: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/1-31854 [009] 162723.351156: funcgraph_entry:        0.804 us   |                    zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351158: funcgraph_exit:         2.319 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351158: funcgraph_exit:         3.391 us   |                }
      z_wr_iss/1-31854 [009] 162723.351159: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351159: funcgraph_entry:        0.417 us   |                  spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351160: funcgraph_entry:        0.568 us   |                  spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351161: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351162: funcgraph_entry:        0.877 us   |                    spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351163: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.351176: funcgraph_entry:        0.403 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351176: funcgraph_entry:        0.342 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351177: funcgraph_entry:        0.304 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351178: funcgraph_entry:        0.476 us   |                      vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.351179: funcgraph_exit:       + 15.364 us  |                    }
      z_wr_iss/1-31854 [009] 162723.351179: funcgraph_exit:       + 17.628 us  |                  }
      z_wr_iss/1-31854 [009] 162723.351179: funcgraph_exit:       + 20.696 us  |                }
      z_wr_iss/1-31854 [009] 162723.351180: funcgraph_exit:       + 31.690 us  |              }
      z_wr_iss/1-31854 [009] 162723.351181: funcgraph_exit:       + 40.038 us  |            }
      z_wr_iss/1-31854 [009] 162723.351181: funcgraph_entry:        0.285 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351181: funcgraph_entry:        0.281 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351182: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.351182: funcgraph_entry:        0.278 us   |              zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351183: funcgraph_exit:         0.884 us   |            }
      z_wr_iss/1-31854 [009] 162723.351183: funcgraph_exit:       + 43.919 us  |          }
      z_wr_iss/1-31854 [009] 162723.351183: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351184: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/1-31854 [009] 162723.351184: funcgraph_entry:        0.464 us   |              zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351185: funcgraph_exit:         1.373 us   |            }
      z_wr_iss/1-31854 [009] 162723.351185: funcgraph_exit:         1.900 us   |          }
      z_wr_iss/1-31854 [009] 162723.351186: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351186: funcgraph_entry:        0.258 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351186: funcgraph_entry:        0.247 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351187: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351187: funcgraph_entry:        0.444 us   |              zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.351188: funcgraph_entry:        0.470 us   |              zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.351189: funcgraph_entry:        0.262 us   |              spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351190: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.351191: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.351191: funcgraph_entry:        0.266 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351192: funcgraph_entry:        0.306 us   |                  vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351192: funcgraph_exit:         1.883 us   |                }
      z_wr_iss/1-31854 [009] 162723.351194: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351194: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/1-31854 [009] 162723.351194: funcgraph_entry:        0.672 us   |                    zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351195: funcgraph_exit:         1.465 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351196: funcgraph_exit:         2.044 us   |                }
      z_wr_iss/1-31854 [009] 162723.351196: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351196: funcgraph_entry:        0.297 us   |                  spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351197: funcgraph_entry:        0.299 us   |                  spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351197: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351197: funcgraph_entry:        0.240 us   |                    spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351198: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.351198: funcgraph_entry:        0.313 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351199: funcgraph_entry:        0.320 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351200: funcgraph_entry:        0.353 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351200: funcgraph_entry:        0.308 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351201: funcgraph_entry:        0.378 us   |                      vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.351202: funcgraph_exit:         3.574 us   |                    }
      z_wr_iss/1-31854 [009] 162723.351202: funcgraph_exit:         4.667 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351202: funcgraph_exit:         6.282 us   |                }
      z_wr_iss/1-31854 [009] 162723.351203: funcgraph_exit:       + 13.079 us  |              }
      z_wr_iss/1-31854 [009] 162723.351203: funcgraph_exit:       + 16.183 us  |            }
      z_wr_iss/1-31854 [009] 162723.351203: funcgraph_entry:        0.252 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351204: funcgraph_entry:        0.449 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351205: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.351205: funcgraph_entry:        0.337 us   |              zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351206: funcgraph_exit:         0.890 us   |            }
      z_wr_iss/1-31854 [009] 162723.351206: funcgraph_exit:       + 20.225 us  |          }
      z_wr_iss/1-31854 [009] 162723.351206: funcgraph_exit:       + 95.402 us  |        }
      z_wr_iss/1-31854 [009] 162723.351207: funcgraph_exit:       + 96.553 us  |      }
      z_wr_iss/1-31854 [009] 162723.351207: funcgraph_entry:        0.344 us   |      spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351208: funcgraph_entry:        0.242 us   |      spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351208: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.351208: funcgraph_entry:        0.317 us   |        zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351209: funcgraph_exit:         0.815 us   |      }
      z_wr_iss/1-31854 [009] 162723.351209: funcgraph_exit:       ! 408.443 us |    }
      z_wr_iss/1-31854 [009] 162723.351209: funcgraph_entry:        0.254 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351210: funcgraph_entry:        0.845 us   |    zio_taskq_member();
      z_wr_iss/1-31854 [009] 162723.351211: funcgraph_entry:        0.242 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351212: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351212: funcgraph_entry:        0.290 us   |      spa_config_enter();
      z_wr_iss/1-31854 [009] 162723.351212: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/1-31854 [009] 162723.351213: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.351213: funcgraph_entry:        2.303 us   |          spa_get_random();
      z_wr_iss/1-31854 [009] 162723.351216: funcgraph_entry:        0.319 us   |          vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.351216: funcgraph_entry:        0.323 us   |          vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.351217: funcgraph_entry:        0.247 us   |          vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.351217: funcgraph_exit:         4.832 us   |        }
      z_wr_iss/1-31854 [009] 162723.351218: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351218: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.351218: funcgraph_entry:        0.518 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351219: funcgraph_exit:         1.281 us   |          }
      z_wr_iss/1-31854 [009] 162723.351220: funcgraph_exit:         1.792 us   |        }
      z_wr_iss/1-31854 [009] 162723.351220: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351220: funcgraph_entry:        0.273 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351221: funcgraph_entry:        0.250 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351221: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351221: funcgraph_entry:        0.392 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.351223: funcgraph_entry:        0.302 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.351223: funcgraph_entry:        0.323 us   |            spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351224: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.351225: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.351225: funcgraph_entry:        0.254 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351226: funcgraph_entry:        0.275 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351226: funcgraph_exit:         1.700 us   |              }
      z_wr_iss/1-31854 [009] 162723.351227: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351228: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.351228: funcgraph_entry:        0.459 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351229: funcgraph_exit:         1.287 us   |                }
      z_wr_iss/1-31854 [009] 162723.351229: funcgraph_exit:         1.794 us   |              }
      z_wr_iss/1-31854 [009] 162723.351230: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351230: funcgraph_entry:        0.249 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351230: funcgraph_entry:        0.245 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351231: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351231: funcgraph_entry:        0.250 us   |                  spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351232: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.351232: funcgraph_entry:        0.301 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351233: funcgraph_entry:        0.318 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351233: funcgraph_entry:        0.321 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351234: funcgraph_entry:        0.240 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351235: funcgraph_entry:        0.603 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.351235: funcgraph_exit:         3.881 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351236: funcgraph_exit:         5.052 us   |                }
      z_wr_iss/1-31854 [009] 162723.351236: funcgraph_exit:         6.557 us   |              }
      z_wr_iss/1-31854 [009] 162723.351238: funcgraph_exit:       + 13.722 us  |            }
      z_wr_iss/1-31854 [009] 162723.351238: funcgraph_exit:       + 16.851 us  |          }
      z_wr_iss/1-31854 [009] 162723.351238: funcgraph_entry:        0.321 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351239: funcgraph_entry:        0.312 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351240: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.351240: funcgraph_entry:        0.421 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351241: funcgraph_exit:         1.013 us   |          }
      z_wr_iss/1-31854 [009] 162723.351241: funcgraph_exit:       + 21.171 us  |        }
      z_wr_iss/1-31854 [009] 162723.351241: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351242: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.351242: funcgraph_entry:        0.548 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351243: funcgraph_exit:         1.490 us   |          }
      z_wr_iss/1-31854 [009] 162723.351243: funcgraph_exit:         2.115 us   |        }
      z_wr_iss/1-31854 [009] 162723.351244: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351244: funcgraph_entry:        0.303 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351245: funcgraph_entry:        0.310 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351245: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351245: funcgraph_entry:        0.374 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.351247: funcgraph_entry:        0.393 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.351247: funcgraph_entry:        0.292 us   |            spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351248: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.351250: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.351250: funcgraph_entry:        0.348 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351251: funcgraph_entry:        0.325 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351252: funcgraph_exit:         1.899 us   |              }
      z_wr_iss/1-31854 [009] 162723.351253: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351254: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.351254: funcgraph_entry:        0.555 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351255: funcgraph_exit:         1.655 us   |                }
      z_wr_iss/1-31854 [009] 162723.351256: funcgraph_exit:         2.284 us   |              }
      z_wr_iss/1-31854 [009] 162723.351256: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351256: funcgraph_entry:        0.296 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351257: funcgraph_entry:        0.343 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351257: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351258: funcgraph_entry:        0.316 us   |                  spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351258: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.351259: funcgraph_entry:        0.297 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351259: funcgraph_entry:        0.325 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351260: funcgraph_entry:        0.332 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351261: funcgraph_entry:        0.341 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351261: funcgraph_entry:        0.393 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.351262: funcgraph_exit:         3.791 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351262: funcgraph_exit:         5.063 us   |                }
      z_wr_iss/1-31854 [009] 162723.351263: funcgraph_exit:         6.899 us   |              }
      z_wr_iss/1-31854 [009] 162723.351264: funcgraph_exit:       + 16.300 us  |            }
      z_wr_iss/1-31854 [009] 162723.351265: funcgraph_exit:       + 19.520 us  |          }
      z_wr_iss/1-31854 [009] 162723.351265: funcgraph_entry:        0.295 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351266: funcgraph_entry:        0.318 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351266: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.351266: funcgraph_entry:        0.308 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351267: funcgraph_exit:         0.896 us   |          }
      z_wr_iss/1-31854 [009] 162723.351267: funcgraph_exit:       + 23.731 us  |        }
      z_wr_iss/1-31854 [009] 162723.351268: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351268: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.351269: funcgraph_entry:        0.504 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351270: funcgraph_exit:         1.674 us   |          }
      z_wr_iss/1-31854 [009] 162723.351270: funcgraph_exit:         2.667 us   |        }
      z_wr_iss/1-31854 [009] 162723.351271: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351271: funcgraph_entry:        0.455 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351272: funcgraph_entry:        0.401 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351273: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351273: funcgraph_entry:        0.499 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.351275: funcgraph_entry:        0.661 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.351276: funcgraph_entry:        0.439 us   |            spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351277: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.351279: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.351279: funcgraph_entry:        0.415 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351280: funcgraph_entry:        0.310 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.351281: funcgraph_exit:         2.505 us   |              }
      z_wr_iss/1-31854 [009] 162723.351282: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.351283: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.351283: funcgraph_entry:        0.475 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.351284: funcgraph_exit:         1.505 us   |                }
      z_wr_iss/1-31854 [009] 162723.351285: funcgraph_exit:         2.162 us   |              }
      z_wr_iss/1-31854 [009] 162723.351285: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.351285: funcgraph_entry:        0.322 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351286: funcgraph_entry:        0.309 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351286: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.351287: funcgraph_entry:        0.291 us   |                  spa_writeable();
      z_wr_iss/1-31854 [009] 162723.351287: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.351288: funcgraph_entry:        0.318 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351288: funcgraph_entry:        0.331 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351289: funcgraph_entry:        0.304 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351290: funcgraph_entry:        0.309 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.351291: funcgraph_entry:        0.384 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.351291: funcgraph_exit:         3.983 us   |                  }
      z_wr_iss/1-31854 [009] 162723.351291: funcgraph_exit:         5.130 us   |                }
      z_wr_iss/1-31854 [009] 162723.351292: funcgraph_exit:         6.957 us   |              }
      z_wr_iss/1-31854 [009] 162723.351293: funcgraph_exit:       + 15.804 us  |            }
      z_wr_iss/1-31854 [009] 162723.351293: funcgraph_exit:       + 19.816 us  |          }
      z_wr_iss/1-31854 [009] 162723.351293: funcgraph_entry:        0.294 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351294: funcgraph_entry:        0.317 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351294: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.351295: funcgraph_entry:        0.324 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351295: funcgraph_exit:         0.989 us   |          }
      z_wr_iss/1-31854 [009] 162723.351296: funcgraph_exit:       + 24.982 us  |        }
      z_wr_iss/1-31854 [009] 162723.351296: funcgraph_exit:       + 83.721 us  |      }
      z_wr_iss/1-31854 [009] 162723.351296: funcgraph_exit:       + 84.847 us  |    }
      z_wr_iss/1-31854 [009] 162723.351297: funcgraph_entry:        0.316 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.351297: funcgraph_entry:        0.306 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.351298: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.351298: funcgraph_entry:        0.357 us   |      zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.351299: funcgraph_exit:         0.999 us   |    }
      z_wr_iss/1-31854 [009] 162723.351299: funcgraph_exit:       ! 567.351 us |  }
      z_wr_iss/3-31856 [001] 162723.353062: funcgraph_entry:        0.821 us   |              vdev_lookup_top();
      z_wr_iss/3-31856 [001] 162723.353063: funcgraph_exit:         2.110 us   |            }
      z_wr_iss/3-31856 [001] 162723.353063: funcgraph_exit:         7.358 us   |          }
      z_wr_iss/3-31856 [001] 162723.353064: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/3-31856 [001] 162723.353064: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/3-31856 [001] 162723.353065: funcgraph_entry:        0.525 us   |              vdev_lookup_top();
      z_wr_iss/3-31856 [001] 162723.353066: funcgraph_exit:         1.663 us   |            }
      z_wr_iss/3-31856 [001] 162723.353067: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/3-31856 [001] 162723.353067: funcgraph_entry:        0.685 us   |              vdev_lookup_top();
      z_wr_iss/3-31856 [001] 162723.353068: funcgraph_exit:         1.813 us   |            }
      z_wr_iss/3-31856 [001] 162723.353069: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/3-31856 [001] 162723.353069: funcgraph_entry:        0.480 us   |              vdev_lookup_top();
      z_wr_iss/3-31856 [001] 162723.353071: funcgraph_exit:         1.603 us   |            }
      z_wr_iss/3-31856 [001] 162723.353071: funcgraph_exit:         7.221 us   |          }
      z_wr_iss/3-31856 [001] 162723.353072: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/3-31856 [001] 162723.353072: funcgraph_entry:        0.462 us   |            spa_version();
      z_wr_iss/3-31856 [001] 162723.353073: funcgraph_exit:         1.710 us   |          }
      z_wr_iss/3-31856 [001] 162723.353074: funcgraph_entry:        0.607 us   |          zrl_remove();
      z_wr_iss/3-31856 [001] 162723.353075: funcgraph_exit:       + 20.911 us  |        }
      z_wr_iss/3-31856 [001] 162723.353076: funcgraph_entry:        0.558 us   |        arc_cksum_compute();
      z_wr_iss/3-31856 [001] 162723.353077: funcgraph_exit:       + 23.342 us  |      }
      z_wr_iss/3-31856 [001] 162723.353077: funcgraph_entry:        0.535 us   |      zio_walk_parents();
      z_wr_iss/3-31856 [001] 162723.353079: funcgraph_entry:        0.568 us   |      zio_walk_parents();
      z_wr_iss/3-31856 [001] 162723.353080: funcgraph_exit:       + 28.786 us  |    }
      z_wr_iss/3-31856 [001] 162723.353080: funcgraph_entry:        0.620 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [001] 162723.353081: funcgraph_entry:        2.471 us   |    zio_taskq_member();
      z_wr_iss/7-31860 [004] 162723.353084: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/3-31856 [001] 162723.353085: funcgraph_entry:        0.700 us   |    spa_is_initializing();
      z_wr_iss/5-31858 [008] 162723.353085: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/7-31860 [004] 162723.353085: funcgraph_entry:        0.281 us   |    spa_get_dsl();
      z_wr_iss/5-31858 [008] 162723.353086: funcgraph_entry:        0.254 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [001] 162723.353086: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/7-31860 [004] 162723.353086: funcgraph_entry:        0.276 us   |    spa_is_initializing();
      z_wr_iss/5-31858 [008] 162723.353086: funcgraph_entry:        0.233 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [001] 162723.353087: funcgraph_entry:        0.614 us   |      spa_config_enter();
      z_wr_iss/7-31860 [004] 162723.353087: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/5-31858 [008] 162723.353087: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/7-31860 [004] 162723.353087: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/5-31858 [008] 162723.353087: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/7-31860 [004] 162723.353088: funcgraph_entry:        4.551 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/5-31858 [008] 162723.353088: funcgraph_entry:        1.398 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/3-31856 [001] 162723.353088: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/3-31856 [001] 162723.353088: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/5-31858 [008] 162723.353089: funcgraph_exit:         1.982 us   |      }
      z_wr_iss/3-31856 [001] 162723.353089: funcgraph_entry:        4.097 us   |          spa_get_random();
      z_wr_iss/5-31858 [008] 162723.353090: funcgraph_exit:         2.584 us   |    }
      z_wr_iss/5-31858 [008] 162723.353090: funcgraph_exit:         5.248 us   |  }
      z_wr_iss/7-31860 [004] 162723.353092: funcgraph_exit:         5.174 us   |      }
      z_wr_iss/7-31860 [004] 162723.353093: funcgraph_exit:         5.662 us   |    }
      z_wr_iss/5-31858 [008] 162723.353093: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/7-31860 [004] 162723.353093: funcgraph_exit:         8.766 us   |  }
      z_wr_iss/2-31855 [002] 162723.353093: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/5-31858 [008] 162723.353093: funcgraph_entry:        0.430 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353094: funcgraph_entry:        0.588 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [001] 162723.353094: funcgraph_entry:        0.551 us   |          vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353094: funcgraph_entry:        0.611 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353095: funcgraph_entry:        0.616 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [001] 162723.353095: funcgraph_entry:        0.673 us   |          vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353095: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/2-31855 [002] 162723.353096: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/5-31858 [008] 162723.353096: funcgraph_entry:        0.570 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.353096: funcgraph_entry:        0.569 us   |      zio_wait_for_children();
      z_wr_iss/3-31856 [001] 162723.353097: funcgraph_entry:        0.709 us   |          vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353097: funcgraph_entry:        0.461 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.353098: funcgraph_entry:        0.478 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [008] 162723.353098: funcgraph_entry:        0.478 us   |      spa_sync_pass();
      z_wr_iss/3-31856 [001] 162723.353098: funcgraph_exit:         9.571 us   |        }
      z_wr_iss/2-31855 [002] 162723.353099: funcgraph_entry:        0.426 us   |      spa_sync_pass();
      z_wr_iss/3-31856 [001] 162723.353099: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/5-31858 [008] 162723.353099: funcgraph_entry:        0.817 us   |      zio_buf_alloc();
      z_wr_iss/3-31856 [001] 162723.353099: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/2-31855 [002] 162723.353100: funcgraph_entry:        0.810 us   |      zio_buf_alloc();
      z_wr_iss/3-31856 [001] 162723.353100: funcgraph_entry:        0.843 us   |            zio_add_child();
      z_wr_iss/5-31858 [008] 162723.353100: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/5-31858 [008] 162723.353101: funcgraph_entry:      + 13.094 us  |        lzjb_compress();
      z_wr_iss/2-31855 [002] 162723.353101: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/2-31855 [002] 162723.353102: funcgraph_entry:      + 11.914 us  |        lzjb_compress();
      z_wr_iss/3-31856 [001] 162723.353102: funcgraph_exit:         2.496 us   |          }
      z_wr_iss/3-31856 [001] 162723.353102: funcgraph_exit:         3.640 us   |        }
      z_wr_iss/3-31856 [001] 162723.353103: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.353103: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/3-31856 [001] 162723.353104: funcgraph_entry:        0.608 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353104: funcgraph_entry:        0.386 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [001] 162723.353105: funcgraph_entry:        0.596 us   |          spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.353105: funcgraph_entry:        0.344 us   |    spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.353106: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/3-31856 [001] 162723.353106: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.353106: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/3-31856 [001] 162723.353107: funcgraph_entry:        0.847 us   |            zio_buf_alloc();
      z_wr_iss/0-31853 [006] 162723.353107: funcgraph_entry:        2.670 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/3-31856 [001] 162723.353108: funcgraph_entry:        0.892 us   |            zio_push_transform();
      z_wr_iss/3-31856 [001] 162723.353110: funcgraph_entry:        0.595 us   |            spa_writeable();
      z_wr_iss/0-31853 [006] 162723.353110: funcgraph_exit:         4.050 us   |      }
      z_wr_iss/0-31853 [006] 162723.353110: funcgraph_exit:         4.679 us   |    }
      z_wr_iss/0-31853 [006] 162723.353111: funcgraph_exit:         7.707 us   |  }
      z_wr_iss/3-31856 [001] 162723.353111: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/0-31853 [006] 162723.353111: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/0-31853 [006] 162723.353112: funcgraph_entry:        0.316 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353113: funcgraph_entry:        0.336 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [001] 162723.353113: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.353113: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/0-31853 [006] 162723.353114: funcgraph_entry:        0.423 us   |      zio_wait_for_children();
      z_wr_iss/3-31856 [001] 162723.353114: funcgraph_entry:        0.616 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.353114: funcgraph_exit:       + 13.066 us  |      }
      z_wr_iss/0-31853 [006] 162723.353114: funcgraph_entry:        0.380 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [008] 162723.353115: funcgraph_exit:       + 14.385 us  |      }
      z_wr_iss/2-31855 [002] 162723.353115: funcgraph_entry:        0.819 us   |      zio_push_transform();
      z_wr_iss/5-31858 [008] 162723.353115: funcgraph_entry:        0.617 us   |      zio_push_transform();
      z_wr_iss/3-31856 [001] 162723.353115: funcgraph_entry:        0.715 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.353115: funcgraph_entry:        0.346 us   |      spa_sync_pass();
      z_wr_iss/0-31853 [006] 162723.353116: funcgraph_entry:        0.590 us   |      zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.353116: funcgraph_exit:       + 20.171 us  |    }
      z_wr_iss/5-31858 [008] 162723.353116: funcgraph_exit:       + 20.934 us  |    }
      z_wr_iss/2-31855 [002] 162723.353116: funcgraph_entry:        0.544 us   |    spa_get_dsl();
      z_wr_iss/3-31856 [001] 162723.353117: funcgraph_exit:         3.798 us   |              }
      z_wr_iss/5-31858 [008] 162723.353117: funcgraph_entry:        0.462 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353117: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/0-31853 [006] 162723.353117: funcgraph_entry:      + 11.877 us  |        lzjb_compress();
      z_wr_iss/2-31855 [002] 162723.353118: funcgraph_entry:        0.591 us   |    spa_is_initializing();
      z_wr_iss/5-31858 [008] 162723.353118: funcgraph_entry:        0.548 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353119: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/5-31858 [008] 162723.353119: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/3-31856 [001] 162723.353119: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/2-31855 [002] 162723.353119: funcgraph_entry:        0.856 us   |      zio_checksum_compute();
      z_wr_iss/5-31858 [008] 162723.353119: funcgraph_entry:        0.791 us   |      zio_checksum_compute();
      z_wr_iss/3-31856 [001] 162723.353120: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/5-31858 [008] 162723.353121: funcgraph_exit:         1.804 us   |    }
      z_wr_iss/3-31856 [001] 162723.353121: funcgraph_entry:        1.038 us   |                  zio_add_child();
      z_wr_iss/2-31855 [002] 162723.353121: funcgraph_exit:         1.931 us   |    }
      z_wr_iss/5-31858 [008] 162723.353121: funcgraph_entry:        0.488 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353121: funcgraph_entry:        0.558 us   |    spa_get_dsl();
      z_wr_iss/5-31858 [008] 162723.353122: funcgraph_entry:        0.453 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [001] 162723.353122: funcgraph_exit:         2.630 us   |                }
      z_wr_iss/2-31855 [002] 162723.353122: funcgraph_entry:        0.520 us   |    spa_is_initializing();
      z_wr_iss/3-31856 [001] 162723.353123: funcgraph_exit:         3.948 us   |              }
      z_wr_iss/5-31858 [008] 162723.353123: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/2-31855 [002] 162723.353123: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/3-31856 [001] 162723.353123: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/5-31858 [008] 162723.353124: funcgraph_entry:        0.440 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.353124: funcgraph_entry:        0.624 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [008] 162723.353125: funcgraph_entry:        0.502 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.353125: funcgraph_entry:        0.462 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [008] 162723.353126: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/2-31855 [002] 162723.353126: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/5-31858 [008] 162723.353127: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/2-31855 [002] 162723.353127: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/5-31858 [008] 162723.353127: funcgraph_entry:        0.558 us   |          zrl_add();
      z_wr_iss/2-31855 [002] 162723.353127: funcgraph_entry:        0.587 us   |          zrl_add();
      z_wr_iss/5-31858 [008] 162723.353128: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/5-31858 [008] 162723.353129: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.353129: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.353129: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/5-31858 [008] 162723.353129: funcgraph_entry:        0.746 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.353130: funcgraph_entry:        0.522 us   |              vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.353130: funcgraph_exit:       + 12.786 us  |      }
      z_wr_iss/0-31853 [006] 162723.353130: funcgraph_entry:        0.535 us   |      zio_push_transform();
      z_wr_iss/5-31858 [008] 162723.353130: funcgraph_exit:         1.783 us   |            }
      z_wr_iss/2-31855 [002] 162723.353131: funcgraph_exit:         1.634 us   |            }
      z_wr_iss/5-31858 [008] 162723.353131: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.353131: funcgraph_exit:       + 17.864 us  |    }
      z_wr_iss/5-31858 [008] 162723.353131: funcgraph_entry:        0.697 us   |              vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.353132: funcgraph_entry:        0.356 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353132: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.353132: funcgraph_entry:        0.325 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353132: funcgraph_entry:        0.469 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353133: funcgraph_exit:         1.690 us   |            }
      z_wr_iss/0-31853 [006] 162723.353133: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/5-31858 [008] 162723.353133: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.353133: funcgraph_exit:         1.937 us   |            }
      z_wr_iss/0-31853 [006] 162723.353134: funcgraph_entry:        0.761 us   |      zio_checksum_compute();
      z_wr_iss/5-31858 [008] 162723.353134: funcgraph_entry:        0.651 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.353134: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.353134: funcgraph_entry:        0.531 us   |              vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.353134: funcgraph_exit:         1.451 us   |    }
      z_wr_iss/5-31858 [008] 162723.353135: funcgraph_exit:         1.562 us   |            }
      z_wr_iss/0-31853 [006] 162723.353135: funcgraph_entry:        0.395 us   |    spa_get_dsl();
      z_wr_iss/5-31858 [008] 162723.353135: funcgraph_exit:         7.010 us   |          }
      z_wr_iss/2-31855 [002] 162723.353135: funcgraph_exit:         1.660 us   |            }
      z_wr_iss/0-31853 [006] 162723.353136: funcgraph_entry:        0.318 us   |    spa_is_initializing();
      z_wr_iss/5-31858 [008] 162723.353136: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.353136: funcgraph_exit:         7.313 us   |          }
      z_wr_iss/5-31858 [008] 162723.353136: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.353136: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/2-31855 [002] 162723.353136: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/5-31858 [008] 162723.353137: funcgraph_entry:        0.513 us   |              vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.353137: funcgraph_entry:        0.351 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.353137: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.353137: funcgraph_entry:        0.353 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.353137: funcgraph_entry:        0.428 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353138: funcgraph_exit:         1.764 us   |            }
      z_wr_iss/0-31853 [006] 162723.353138: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/2-31855 [002] 162723.353138: funcgraph_exit:         1.461 us   |            }
      z_wr_iss/5-31858 [008] 162723.353138: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.353139: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/5-31858 [008] 162723.353139: funcgraph_entry:        0.495 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.353139: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.353139: funcgraph_entry:        0.381 us   |          zrl_add();
      z_wr_iss/2-31855 [002] 162723.353140: funcgraph_entry:        0.638 us   |              vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.353140: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/5-31858 [008] 162723.353140: funcgraph_exit:         1.481 us   |            }
      z_wr_iss/0-31853 [006] 162723.353140: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/5-31858 [008] 162723.353140: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.353141: funcgraph_entry:        0.438 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.353141: funcgraph_exit:         1.590 us   |            }
      z_wr_iss/5-31858 [008] 162723.353141: funcgraph_entry:        0.904 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.353141: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.353141: funcgraph_exit:         1.290 us   |            }
      z_wr_iss/2-31855 [002] 162723.353142: funcgraph_entry:        0.489 us   |              vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.353142: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/5-31858 [008] 162723.353142: funcgraph_exit:         1.771 us   |            }
      z_wr_iss/0-31853 [006] 162723.353142: funcgraph_entry:        0.320 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353143: funcgraph_exit:         6.918 us   |          }
      z_wr_iss/2-31855 [002] 162723.353143: funcgraph_exit:         1.601 us   |            }
      z_wr_iss/0-31853 [006] 162723.353143: funcgraph_exit:         1.020 us   |            }
      z_wr_iss/5-31858 [008] 162723.353143: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/0-31853 [006] 162723.353143: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.353143: funcgraph_exit:         6.870 us   |          }
      z_wr_iss/0-31853 [006] 162723.353144: funcgraph_entry:        0.414 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353144: funcgraph_entry:        0.551 us   |            spa_version();
      z_wr_iss/2-31855 [002] 162723.353144: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/0-31853 [006] 162723.353144: funcgraph_exit:         1.115 us   |            }
      z_wr_iss/2-31855 [002] 162723.353145: funcgraph_entry:        0.540 us   |            spa_version();
      z_wr_iss/0-31853 [006] 162723.353145: funcgraph_exit:         4.899 us   |          }
      z_wr_iss/5-31858 [008] 162723.353145: funcgraph_exit:         1.752 us   |          }
      z_wr_iss/0-31853 [006] 162723.353145: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.353146: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/5-31858 [008] 162723.353146: funcgraph_entry:        0.490 us   |          zrl_remove();
      z_wr_iss/1-31854 [009] 162723.353146: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/2-31855 [002] 162723.353146: funcgraph_exit:         1.768 us   |          }
      z_wr_iss/0-31853 [006] 162723.353146: funcgraph_entry:        0.394 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.353146: funcgraph_entry:        0.598 us   |          zrl_remove();
      z_wr_iss/5-31858 [008] 162723.353147: funcgraph_exit:       + 19.986 us  |        }
      z_wr_iss/0-31853 [006] 162723.353147: funcgraph_exit:         1.122 us   |            }
      z_wr_iss/1-31854 [009] 162723.353147: funcgraph_entry:        0.389 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353147: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/5-31858 [008] 162723.353147: funcgraph_entry:        0.490 us   |        arc_cksum_compute();
      z_wr_iss/0-31853 [006] 162723.353147: funcgraph_entry:        0.363 us   |              vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.353147: funcgraph_entry:        0.315 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353148: funcgraph_exit:       + 20.880 us  |        }
      z_wr_iss/0-31853 [006] 162723.353148: funcgraph_exit:         1.121 us   |            }
      z_wr_iss/5-31858 [008] 162723.353148: funcgraph_exit:       + 22.277 us  |      }
      z_wr_iss/2-31855 [002] 162723.353148: funcgraph_entry:        0.452 us   |        arc_cksum_compute();
      z_wr_iss/1-31854 [009] 162723.353148: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/0-31853 [006] 162723.353148: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.353149: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/5-31858 [008] 162723.353149: funcgraph_entry:        0.564 us   |      zio_walk_parents();
      z_wr_iss/0-31853 [006] 162723.353149: funcgraph_entry:        0.353 us   |              vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.353149: funcgraph_entry:        2.981 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/2-31855 [002] 162723.353149: funcgraph_exit:       + 23.060 us  |      }
      z_wr_iss/0-31853 [006] 162723.353150: funcgraph_exit:         1.107 us   |            }
      z_wr_iss/2-31855 [002] 162723.353150: funcgraph_entry:        0.529 us   |      zio_walk_parents();
      z_wr_iss/0-31853 [006] 162723.353150: funcgraph_exit:         4.819 us   |          }
      z_wr_iss/5-31858 [008] 162723.353150: funcgraph_entry:        0.534 us   |      zio_walk_parents();
      z_wr_iss/0-31853 [006] 162723.353150: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/2-31855 [002] 162723.353151: funcgraph_entry:        0.385 us   |      zio_walk_parents();
      z_wr_iss/0-31853 [006] 162723.353151: funcgraph_entry:        0.410 us   |            spa_version();
      z_wr_iss/5-31858 [008] 162723.353151: funcgraph_exit:       + 27.849 us  |    }
      z_wr_iss/0-31853 [006] 162723.353152: funcgraph_exit:         1.229 us   |          }
      z_wr_iss/5-31858 [008] 162723.353152: funcgraph_entry:        0.533 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353152: funcgraph_exit:       + 28.344 us  |    }
      z_wr_iss/0-31853 [006] 162723.353152: funcgraph_entry:        0.372 us   |          zrl_remove();
      z_wr_iss/2-31855 [002] 162723.353152: funcgraph_entry:        0.492 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.353152: funcgraph_exit:         3.809 us   |      }
      z_wr_iss/5-31858 [008] 162723.353153: funcgraph_entry:        2.272 us   |    zio_taskq_member();
      z_wr_iss/0-31853 [006] 162723.353153: funcgraph_exit:       + 14.137 us  |        }
      z_wr_iss/1-31854 [009] 162723.353153: funcgraph_exit:         4.591 us   |    }
      z_wr_iss/2-31855 [002] 162723.353153: funcgraph_entry:        1.615 us   |    zio_taskq_member();
      z_wr_iss/0-31853 [006] 162723.353153: funcgraph_entry:        0.334 us   |        arc_cksum_compute();
      z_wr_iss/1-31854 [009] 162723.353153: funcgraph_exit:         8.140 us   |  }
      z_wr_iss/0-31853 [006] 162723.353154: funcgraph_exit:       + 15.806 us  |      }
      z_wr_iss/1-31854 [009] 162723.353154: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/0-31853 [006] 162723.353155: funcgraph_entry:        0.622 us   |      zio_walk_parents();
      z_wr_iss/1-31854 [009] 162723.353155: funcgraph_entry:        0.909 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353155: funcgraph_entry:        0.343 us   |      zio_walk_parents();
      z_wr_iss/5-31858 [008] 162723.353155: funcgraph_entry:        0.566 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353155: funcgraph_entry:        0.539 us   |    spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.353156: funcgraph_exit:       + 19.878 us  |    }
      z_wr_iss/1-31854 [009] 162723.353156: funcgraph_entry:        0.441 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353157: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.353157: funcgraph_entry:        0.308 us   |    spa_get_dsl();
      z_wr_iss/5-31858 [008] 162723.353157: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/5-31858 [008] 162723.353157: funcgraph_entry:        0.838 us   |      spa_config_enter();
      z_wr_iss/2-31855 [002] 162723.353157: funcgraph_entry:        0.786 us   |      spa_config_enter();
      z_wr_iss/0-31853 [006] 162723.353157: funcgraph_entry:        1.498 us   |    zio_taskq_member();
      z_wr_iss/1-31854 [009] 162723.353157: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/1-31854 [009] 162723.353158: funcgraph_entry:        0.683 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [008] 162723.353159: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/2-31855 [002] 162723.353159: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/1-31854 [009] 162723.353159: funcgraph_entry:        0.348 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [008] 162723.353159: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.353159: funcgraph_entry:        0.342 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353159: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/1-31854 [009] 162723.353160: funcgraph_entry:        0.311 us   |      spa_sync_pass();
      z_wr_iss/0-31853 [006] 162723.353160: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/5-31858 [008] 162723.353160: funcgraph_entry:        4.813 us   |          spa_get_random();
      z_wr_iss/2-31855 [002] 162723.353160: funcgraph_entry:        4.312 us   |          spa_get_random();
      z_wr_iss/1-31854 [009] 162723.353160: funcgraph_entry:        0.611 us   |      zio_buf_alloc();
      z_wr_iss/0-31853 [006] 162723.353160: funcgraph_entry:        0.599 us   |      spa_config_enter();
      z_wr_iss/1-31854 [009] 162723.353161: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/0-31853 [006] 162723.353161: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/1-31854 [009] 162723.353162: funcgraph_entry:      + 33.892 us  |        lzjb_compress();
      z_wr_iss/0-31853 [006] 162723.353162: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.353162: funcgraph_entry:        4.502 us   |          spa_get_random();
      z_wr_iss/2-31855 [002] 162723.353165: funcgraph_entry:        0.638 us   |          vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353165: funcgraph_entry:        0.654 us   |          vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.353166: funcgraph_entry:        0.533 us   |          vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353166: funcgraph_entry:        0.415 us   |          vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.353167: funcgraph_entry:        0.579 us   |          vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353167: funcgraph_entry:        0.476 us   |          vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.353168: funcgraph_entry:        0.368 us   |          vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.353168: funcgraph_entry:        0.346 us   |          vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353168: funcgraph_exit:         9.157 us   |        }
      z_wr_iss/2-31855 [002] 162723.353168: funcgraph_exit:         9.191 us   |        }
      z_wr_iss/2-31855 [002] 162723.353169: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/5-31858 [008] 162723.353169: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.353169: funcgraph_entry:        0.336 us   |          vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353169: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/2-31855 [002] 162723.353169: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/0-31853 [006] 162723.353170: funcgraph_exit:         8.005 us   |        }
      z_wr_iss/0-31853 [006] 162723.353170: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/5-31858 [008] 162723.353170: funcgraph_entry:        0.857 us   |            zio_add_child();
      z_wr_iss/0-31853 [006] 162723.353171: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/2-31855 [002] 162723.353171: funcgraph_entry:        0.827 us   |            zio_add_child();
      z_wr_iss/0-31853 [006] 162723.353171: funcgraph_entry:        0.579 us   |            zio_add_child();
      z_wr_iss/2-31855 [002] 162723.353172: funcgraph_exit:         2.488 us   |          }
      z_wr_iss/5-31858 [008] 162723.353172: funcgraph_exit:         2.531 us   |          }
      z_wr_iss/0-31853 [006] 162723.353172: funcgraph_exit:         1.790 us   |          }
      z_wr_iss/5-31858 [008] 162723.353172: funcgraph_exit:         3.506 us   |        }
      z_wr_iss/2-31855 [002] 162723.353173: funcgraph_exit:         3.689 us   |        }
      z_wr_iss/0-31853 [006] 162723.353173: funcgraph_exit:         2.613 us   |        }
      z_wr_iss/5-31858 [008] 162723.353173: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.353173: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/2-31855 [002] 162723.353173: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/5-31858 [008] 162723.353173: funcgraph_entry:        0.438 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353173: funcgraph_entry:        0.320 us   |          spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353174: funcgraph_entry:        0.511 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353174: funcgraph_entry:        0.314 us   |          spa_is_initializing();
      z_wr_iss/5-31858 [008] 162723.353174: funcgraph_entry:        0.482 us   |          spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353175: funcgraph_entry:        0.560 us   |          spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.353175: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.353175: funcgraph_entry:        0.454 us   |            zio_buf_alloc();
      z_wr_iss/5-31858 [008] 162723.353175: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/5-31858 [008] 162723.353176: funcgraph_entry:        0.597 us   |            zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.353176: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.353177: funcgraph_entry:        0.624 us   |            zio_buf_alloc();
      z_wr_iss/0-31853 [006] 162723.353177: funcgraph_entry:        0.487 us   |            zio_push_transform();
      z_wr_iss/5-31858 [008] 162723.353178: funcgraph_entry:        0.669 us   |            zio_push_transform();
      z_wr_iss/0-31853 [006] 162723.353178: funcgraph_entry:        0.334 us   |            spa_writeable();
      z_wr_iss/2-31855 [002] 162723.353178: funcgraph_entry:        0.596 us   |            zio_push_transform();
      z_wr_iss/0-31853 [006] 162723.353178: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/5-31858 [008] 162723.353179: funcgraph_entry:        0.457 us   |            spa_writeable();
      z_wr_iss/2-31855 [002] 162723.353179: funcgraph_entry:        0.551 us   |            spa_writeable();
      z_wr_iss/5-31858 [008] 162723.353180: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/0-31853 [006] 162723.353180: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/2-31855 [002] 162723.353180: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/0-31853 [006] 162723.353181: funcgraph_entry:        0.327 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.353182: funcgraph_entry:        0.339 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.353182: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/0-31853 [006] 162723.353182: funcgraph_exit:         2.363 us   |              }
      z_wr_iss/2-31855 [002] 162723.353183: funcgraph_entry:        0.515 us   |                vdev_readable();
      z_wr_iss/5-31858 [008] 162723.353183: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/5-31858 [008] 162723.353183: funcgraph_entry:        0.511 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.353184: funcgraph_entry:        0.603 us   |                vdev_readable();
      z_wr_iss/5-31858 [008] 162723.353185: funcgraph_entry:        0.548 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.353185: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.353185: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/2-31855 [002] 162723.353185: funcgraph_exit:         3.183 us   |              }
      z_wr_iss/5-31858 [008] 162723.353186: funcgraph_exit:         2.958 us   |              }
      z_wr_iss/0-31853 [006] 162723.353186: funcgraph_entry:        0.626 us   |                  zio_add_child();
      z_wr_iss/0-31853 [006] 162723.353187: funcgraph_exit:         1.650 us   |                }
      z_wr_iss/0-31853 [006] 162723.353187: funcgraph_exit:         2.628 us   |              }
      z_wr_iss/0-31853 [006] 162723.353188: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.353188: funcgraph_entry:        0.301 us   |                spa_get_dsl();
      z_wr_iss/5-31858 [008] 162723.353188: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.353189: funcgraph_entry:        0.335 us   |                spa_is_initializing();
      z_wr_iss/5-31858 [008] 162723.353189: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/2-31855 [002] 162723.353189: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.353189: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.353190: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/0-31853 [006] 162723.353190: funcgraph_entry:        0.325 us   |                  spa_writeable();
      z_wr_iss/5-31858 [008] 162723.353190: funcgraph_entry:        0.770 us   |                  zio_add_child();
      z_wr_iss/0-31853 [006] 162723.353190: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/2-31855 [002] 162723.353190: funcgraph_entry:        0.754 us   |                  zio_add_child();
      z_wr_iss/5-31858 [008] 162723.353191: funcgraph_exit:         2.208 us   |                }
      z_wr_iss/0-31853 [006] 162723.353191: funcgraph_entry:        0.641 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/5-31858 [008] 162723.353192: funcgraph_exit:         3.287 us   |              }
      z_wr_iss/2-31855 [002] 162723.353192: funcgraph_exit:         2.291 us   |                }
      z_wr_iss/5-31858 [008] 162723.353192: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/2-31855 [002] 162723.353192: funcgraph_exit:         3.359 us   |              }
      z_wr_iss/0-31853 [006] 162723.353192: funcgraph_exit:         1.988 us   |                  }
      z_wr_iss/5-31858 [008] 162723.353193: funcgraph_entry:        0.467 us   |                spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353193: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.353193: funcgraph_exit:         3.461 us   |                }
      z_wr_iss/2-31855 [002] 162723.353193: funcgraph_entry:        0.453 us   |                spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353193: funcgraph_exit:         5.520 us   |              }
      z_wr_iss/5-31858 [008] 162723.353194: funcgraph_entry:        0.582 us   |                spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353194: funcgraph_entry:        0.411 us   |                spa_is_initializing();
      z_wr_iss/5-31858 [008] 162723.353195: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.353195: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.353195: funcgraph_exit:       + 16.844 us  |            }
      z_wr_iss/5-31858 [008] 162723.353195: funcgraph_entry:        0.467 us   |                  spa_writeable();
      z_wr_iss/2-31855 [002] 162723.353196: funcgraph_entry:        0.393 us   |                  spa_writeable();
      z_wr_iss/0-31853 [006] 162723.353196: funcgraph_exit:       + 20.700 us  |          }
      z_wr_iss/0-31853 [006] 162723.353196: funcgraph_entry:        0.381 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.353196: funcgraph_exit:       + 34.894 us  |      }
      z_wr_iss/5-31858 [008] 162723.353196: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/2-31855 [002] 162723.353196: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [009] 162723.353197: funcgraph_entry:        0.747 us   |      zio_push_transform();
      z_wr_iss/0-31853 [006] 162723.353197: funcgraph_entry:        0.447 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353197: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/0-31853 [006] 162723.353198: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.353198: funcgraph_exit:       + 40.505 us  |    }
      z_wr_iss/6-31859 [005] 162723.353198: funcgraph_entry:        0.290 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353198: funcgraph_entry:        0.449 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.353198: funcgraph_entry:        0.464 us   |    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353199: funcgraph_entry:        0.280 us   |    spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.353199: funcgraph_exit:         1.516 us   |          }
      z_wr_iss/6-31859 [005] 162723.353199: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/1-31854 [009] 162723.353199: funcgraph_entry:        0.517 us   |    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353200: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/0-31853 [006] 162723.353200: funcgraph_exit:       + 26.712 us  |        }
      z_wr_iss/5-31858 [008] 162723.353200: funcgraph_entry:        0.577 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.353200: funcgraph_entry:        2.098 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/0-31853 [006] 162723.353200: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.353200: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/0-31853 [006] 162723.353201: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.353201: funcgraph_entry:        1.083 us   |      zio_checksum_compute();
      z_wr_iss/5-31858 [008] 162723.353201: funcgraph_entry:        0.792 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/0-31853 [006] 162723.353201: funcgraph_entry:        0.683 us   |            zio_add_child();
      z_wr_iss/6-31859 [005] 162723.353202: funcgraph_exit:         2.771 us   |      }
      z_wr_iss/1-31854 [009] 162723.353202: funcgraph_exit:         2.039 us   |    }
      z_wr_iss/6-31859 [005] 162723.353203: funcgraph_exit:         3.300 us   |    }
      z_wr_iss/5-31858 [008] 162723.353203: funcgraph_exit:         6.423 us   |                  }
      z_wr_iss/2-31855 [002] 162723.353203: funcgraph_entry:        0.369 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.353203: funcgraph_exit:         5.729 us   |  }
      z_wr_iss/1-31854 [009] 162723.353203: funcgraph_entry:        0.435 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353203: funcgraph_exit:         2.074 us   |          }
      z_wr_iss/5-31858 [008] 162723.353203: funcgraph_exit:         8.385 us   |                }
      z_wr_iss/6-31859 [005] 162723.353203: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/0-31853 [006] 162723.353204: funcgraph_exit:         3.329 us   |        }
      z_wr_iss/5-31858 [008] 162723.353204: funcgraph_exit:       + 11.346 us  |              }
      z_wr_iss/2-31855 [002] 162723.353204: funcgraph_entry:        0.403 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.353204: funcgraph_entry:        0.264 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.353204: funcgraph_entry:        0.391 us   |    spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.353204: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.353204: funcgraph_entry:        0.285 us   |    spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.353204: funcgraph_entry:        0.327 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.353205: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/2-31855 [002] 162723.353205: funcgraph_entry:        0.617 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/6-31859 [005] 162723.353205: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/1-31854 [009] 162723.353205: funcgraph_entry:        0.393 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [008] 162723.353205: funcgraph_exit:       + 25.017 us  |            }
      z_wr_iss/6-31859 [005] 162723.353205: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/0-31853 [006] 162723.353205: funcgraph_entry:        0.327 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353205: funcgraph_entry:        1.340 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/5-31858 [008] 162723.353205: funcgraph_exit:       + 30.136 us  |          }
      z_wr_iss/1-31854 [009] 162723.353206: funcgraph_entry:        0.454 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.353206: funcgraph_exit:         9.559 us   |                  }
      z_wr_iss/0-31853 [006] 162723.353206: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/5-31858 [008] 162723.353206: funcgraph_entry:        0.535 us   |          spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353206: funcgraph_exit:       + 11.147 us  |                }
      z_wr_iss/0-31853 [006] 162723.353206: funcgraph_entry:        0.513 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.353207: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/2-31855 [002] 162723.353207: funcgraph_exit:       + 13.906 us  |              }
      z_wr_iss/5-31858 [008] 162723.353207: funcgraph_entry:        0.449 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353207: funcgraph_exit:         1.933 us   |      }
      z_wr_iss/1-31854 [009] 162723.353207: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/6-31859 [005] 162723.353207: funcgraph_exit:         2.501 us   |    }
      z_wr_iss/6-31859 [005] 162723.353208: funcgraph_exit:         4.255 us   |  }
      z_wr_iss/1-31854 [009] 162723.353208: funcgraph_entry:        0.486 us   |          zrl_add();
      z_wr_iss/0-31853 [006] 162723.353208: funcgraph_entry:        0.514 us   |            zio_push_transform();
      z_wr_iss/2-31855 [002] 162723.353208: funcgraph_exit:       + 27.590 us  |            }
      z_wr_iss/5-31858 [008] 162723.353208: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/2-31855 [002] 162723.353208: funcgraph_exit:       + 32.303 us  |          }
      z_wr_iss/5-31858 [008] 162723.353208: funcgraph_entry:        0.459 us   |            zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.353208: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/0-31853 [006] 162723.353208: funcgraph_entry:        0.306 us   |            spa_writeable();
      z_wr_iss/1-31854 [009] 162723.353209: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.353209: funcgraph_entry:        0.270 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353209: funcgraph_entry:        0.459 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.353209: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.353209: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/6-31859 [005] 162723.353209: funcgraph_entry:        0.276 us   |    spa_is_initializing();
      z_wr_iss/5-31858 [008] 162723.353209: funcgraph_exit:         1.424 us   |          }
      z_wr_iss/1-31854 [009] 162723.353209: funcgraph_entry:        0.518 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.353210: funcgraph_entry:        0.384 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353210: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/5-31858 [008] 162723.353210: funcgraph_exit:       + 36.942 us  |        }
      z_wr_iss/6-31859 [005] 162723.353210: funcgraph_entry:        0.318 us   |      zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.353210: funcgraph_exit:         1.394 us   |            }
      z_wr_iss/0-31853 [006] 162723.353210: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/5-31858 [008] 162723.353210: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/2-31855 [002] 162723.353211: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.353211: funcgraph_entry:        0.282 us   |      zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.353211: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/5-31858 [008] 162723.353211: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/0-31853 [006] 162723.353211: funcgraph_entry:        0.372 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.353211: funcgraph_entry:        0.376 us   |            zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.353211: funcgraph_exit:         1.320 us   |    }
      z_wr_iss/1-31854 [009] 162723.353211: funcgraph_entry:        0.430 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.353211: funcgraph_exit:         2.978 us   |  }
      z_wr_iss/5-31858 [008] 162723.353212: funcgraph_entry:        0.840 us   |            zio_add_child();
      z_wr_iss/0-31853 [006] 162723.353212: funcgraph_entry:        0.311 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.353212: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/2-31855 [002] 162723.353212: funcgraph_exit:         1.415 us   |          }
      z_wr_iss/1-31854 [009] 162723.353212: funcgraph_exit:         1.359 us   |            }
      z_wr_iss/6-31859 [005] 162723.353212: funcgraph_entry:        0.254 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353212: funcgraph_exit:         2.098 us   |              }
      z_wr_iss/2-31855 [002] 162723.353212: funcgraph_exit:       + 39.290 us  |        }
      z_wr_iss/1-31854 [009] 162723.353212: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.353213: funcgraph_entry:        0.281 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.353213: funcgraph_entry:        0.491 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353213: funcgraph_exit:         2.086 us   |          }
      z_wr_iss/2-31855 [002] 162723.353213: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.353213: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/5-31858 [008] 162723.353213: funcgraph_exit:         3.023 us   |        }
      z_wr_iss/6-31859 [005] 162723.353213: funcgraph_entry:        0.361 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.353214: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.353214: funcgraph_exit:         1.366 us   |            }
      z_wr_iss/5-31858 [008] 162723.353214: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.353214: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.353214: funcgraph_exit:         5.695 us   |          }
      z_wr_iss/5-31858 [008] 162723.353214: funcgraph_entry:        0.513 us   |          spa_get_dsl();
      z_wr_iss/4-31857 [004] 162723.353214: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/2-31855 [002] 162723.353214: funcgraph_entry:        0.657 us   |            zio_add_child();
      z_wr_iss/6-31859 [005] 162723.353214: funcgraph_entry:        0.531 us   |      zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.353214: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.353215: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.353215: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/0-31853 [006] 162723.353215: funcgraph_entry:        0.671 us   |                  zio_add_child();
      z_wr_iss/5-31858 [008] 162723.353215: funcgraph_entry:        0.494 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353215: funcgraph_entry:        0.433 us   |      spa_sync_pass();
      z_wr_iss/4-31857 [004] 162723.353215: funcgraph_entry:        0.619 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353215: funcgraph_exit:         1.834 us   |          }
      z_wr_iss/1-31854 [009] 162723.353216: funcgraph_entry:        0.391 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.353216: funcgraph_exit:         2.842 us   |        }
      z_wr_iss/6-31859 [005] 162723.353216: funcgraph_entry:        0.768 us   |      zio_buf_alloc();
      z_wr_iss/5-31858 [008] 162723.353216: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.353216: funcgraph_exit:         1.853 us   |                }
      z_wr_iss/2-31855 [002] 162723.353216: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.353216: funcgraph_exit:         1.178 us   |            }
      z_wr_iss/0-31853 [006] 162723.353217: funcgraph_exit:         2.555 us   |              }
      z_wr_iss/4-31857 [004] 162723.353217: funcgraph_entry:        0.594 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.353217: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/5-31858 [008] 162723.353217: funcgraph_entry:        0.662 us   |            zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.353217: funcgraph_entry:        0.416 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353217: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.353217: funcgraph_entry:        0.408 us   |              vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.353217: funcgraph_entry:                   |      zio_compress_data() {
      z_wr_iss/0-31853 [006] 162723.353217: funcgraph_entry:        0.307 us   |                spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353218: funcgraph_entry:        0.395 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353218: funcgraph_entry:      + 40.577 us  |        lzjb_compress();
      z_wr_iss/1-31854 [009] 162723.353218: funcgraph_exit:         1.353 us   |            }
      z_wr_iss/0-31853 [006] 162723.353218: funcgraph_entry:        0.322 us   |                spa_is_initializing();
      z_wr_iss/4-31857 [004] 162723.353218: funcgraph_entry:                   |    zio_issue_async() {
      z_wr_iss/2-31855 [002] 162723.353218: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/5-31858 [008] 162723.353218: funcgraph_entry:        0.817 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.353218: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/4-31857 [004] 162723.353219: funcgraph_entry:                   |      zio_taskq_dispatch() {
      z_wr_iss/2-31855 [002] 162723.353219: funcgraph_entry:        0.436 us   |            zio_buf_alloc();
      z_wr_iss/0-31853 [006] 162723.353219: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.353219: funcgraph_entry:        0.426 us   |              vdev_lookup_top();
      z_wr_iss/0-31853 [006] 162723.353219: funcgraph_entry:        0.338 us   |                  spa_writeable();
      z_wr_iss/4-31857 [004] 162723.353219: funcgraph_entry:        1.395 us   |        spa_taskq_dispatch_ent();
      z_wr_iss/5-31858 [008] 162723.353220: funcgraph_entry:        0.313 us   |            spa_writeable();
      z_wr_iss/1-31854 [009] 162723.353220: funcgraph_exit:         1.347 us   |            }
      z_wr_iss/0-31853 [006] 162723.353220: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/2-31855 [002] 162723.353220: funcgraph_entry:        0.519 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.353220: funcgraph_exit:         5.474 us   |          }
      z_wr_iss/0-31853 [006] 162723.353220: funcgraph_entry:        0.332 us   |                    vdev_queue_offset_compare();
      z_wr_iss/5-31858 [008] 162723.353221: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.353221: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/2-31855 [002] 162723.353221: funcgraph_entry:        0.389 us   |            spa_writeable();
      z_wr_iss/0-31853 [006] 162723.353221: funcgraph_entry:        0.380 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.353221: funcgraph_entry:        0.459 us   |            spa_version();
      z_wr_iss/4-31857 [004] 162723.353221: funcgraph_exit:         2.604 us   |      }
      z_wr_iss/4-31857 [004] 162723.353222: funcgraph_exit:         3.692 us   |    }
      z_wr_iss/5-31858 [008] 162723.353222: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/2-31855 [002] 162723.353222: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.353222: funcgraph_exit:         1.383 us   |          }
      z_wr_iss/0-31853 [006] 162723.353222: funcgraph_entry:        0.530 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/4-31857 [004] 162723.353222: funcgraph_exit:         8.473 us   |  }
      z_wr_iss/5-31858 [008] 162723.353223: funcgraph_entry:        0.382 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.353223: funcgraph_entry:        0.410 us   |          zrl_remove();
      z_wr_iss/0-31853 [006] 162723.353223: funcgraph_exit:         3.352 us   |                  }
      z_wr_iss/2-31855 [002] 162723.353223: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/4-31857 [004] 162723.353223: funcgraph_entry:                   |  zio_execute() {
      z_wr_iss/5-31858 [008] 162723.353223: funcgraph_entry:        0.443 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.353223: funcgraph_exit:       + 16.265 us  |        }
      z_wr_iss/0-31853 [006] 162723.353223: funcgraph_exit:         4.741 us   |                }
      z_wr_iss/4-31857 [004] 162723.353224: funcgraph_entry:        0.558 us   |    spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353224: funcgraph_exit:         6.842 us   |              }
      z_wr_iss/1-31854 [009] 162723.353224: funcgraph_entry:        0.412 us   |        arc_cksum_compute();
      z_wr_iss/2-31855 [002] 162723.353224: funcgraph_entry:        0.511 us   |                vdev_readable();
      z_wr_iss/5-31858 [008] 162723.353224: funcgraph_exit:         2.654 us   |              }
      z_wr_iss/1-31854 [009] 162723.353225: funcgraph_exit:       + 18.044 us  |      }
      z_wr_iss/4-31857 [004] 162723.353225: funcgraph_entry:        0.579 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353225: funcgraph_entry:        0.305 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.353225: funcgraph_entry:        0.451 us   |      zio_walk_parents();
      z_wr_iss/0-31853 [006] 162723.353225: funcgraph_exit:       + 16.027 us  |            }
      z_wr_iss/0-31853 [006] 162723.353225: funcgraph_exit:       + 19.591 us  |          }
      z_wr_iss/2-31855 [002] 162723.353226: funcgraph_exit:         2.630 us   |              }
      z_wr_iss/0-31853 [006] 162723.353226: funcgraph_entry:        0.395 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.353226: funcgraph_entry:        0.412 us   |      zio_walk_parents();
      z_wr_iss/4-31857 [004] 162723.353226: funcgraph_entry:                   |    zio_write_bp_init() {
      z_wr_iss/0-31853 [006] 162723.353227: funcgraph_entry:        0.346 us   |          spa_is_initializing();
      z_wr_iss/4-31857 [004] 162723.353227: funcgraph_entry:        0.699 us   |      zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.353227: funcgraph_entry:        0.422 us   |      spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353227: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/0-31853 [006] 162723.353228: funcgraph_entry:        0.354 us   |            zio_wait_for_children();
      z_wr_iss/4-31857 [004] 162723.353228: funcgraph_entry:        0.612 us   |      zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.353228: funcgraph_entry:        0.852 us   |      spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.353228: funcgraph_exit:         1.055 us   |          }
      z_wr_iss/5-31858 [008] 162723.353229: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.353229: funcgraph_exit:       + 24.826 us  |        }
      z_wr_iss/5-31858 [008] 162723.353229: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/4-31857 [004] 162723.353229: funcgraph_exit:         2.942 us   |    }
      z_wr_iss/0-31853 [006] 162723.353229: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.353229: funcgraph_entry:                   |      zio_write_bp_init() {
      z_wr_iss/0-31853 [006] 162723.353230: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/4-31857 [004] 162723.353230: funcgraph_exit:         6.342 us   |  }
      z_wr_iss/5-31858 [008] 162723.353230: funcgraph_entry:        0.600 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.353230: funcgraph_entry:        0.405 us   |        zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.353230: funcgraph_entry:        0.688 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.353231: funcgraph_entry:        0.454 us   |        zio_wait_for_children();
      z_wr_iss/5-31858 [008] 162723.353231: funcgraph_exit:         1.684 us   |                }
      z_wr_iss/5-31858 [008] 162723.353231: funcgraph_exit:         2.378 us   |              }
      z_wr_iss/0-31853 [006] 162723.353231: funcgraph_exit:         1.680 us   |          }
      z_wr_iss/5-31858 [008] 162723.353231: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.353232: funcgraph_exit:         2.432 us   |        }
      z_wr_iss/5-31858 [008] 162723.353232: funcgraph_entry:        0.324 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.353232: funcgraph_entry:        0.394 us   |        spa_sync_pass();
      z_wr_iss/0-31853 [006] 162723.353232: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.353232: funcgraph_entry:        0.311 us   |          spa_get_dsl();
      z_wr_iss/5-31858 [008] 162723.353232: funcgraph_entry:        0.335 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.353232: funcgraph_entry:        0.845 us   |        zio_buf_alloc();
      z_wr_iss/0-31853 [006] 162723.353233: funcgraph_entry:        0.330 us   |          spa_is_initializing();
      z_wr_iss/5-31858 [008] 162723.353233: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/5-31858 [008] 162723.353233: funcgraph_entry:        0.300 us   |                  spa_writeable();
      z_wr_iss/0-31853 [006] 162723.353234: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.353234: funcgraph_entry:                   |        zio_compress_data() {
      z_wr_iss/5-31858 [008] 162723.353234: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/0-31853 [006] 162723.353234: funcgraph_entry:        0.444 us   |            zio_buf_alloc();
      z_wr_iss/2-31855 [002] 162723.353234: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.353234: funcgraph_entry:      + 68.170 us  |          lzjb_compress();
      z_wr_iss/2-31855 [002] 162723.353235: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/0-31853 [006] 162723.353235: funcgraph_entry:        0.522 us   |            zio_push_transform();
      z_wr_iss/2-31855 [002] 162723.353235: funcgraph_entry:        0.526 us   |                  zio_add_child();
      z_wr_iss/0-31853 [006] 162723.353236: funcgraph_entry:        0.330 us   |            spa_writeable();
      z_wr_iss/2-31855 [002] 162723.353236: funcgraph_exit:         1.534 us   |                }
      z_wr_iss/5-31858 [008] 162723.353236: funcgraph_entry:        0.443 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.353237: funcgraph_exit:         2.340 us   |              }
      z_wr_iss/0-31853 [006] 162723.353237: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/2-31855 [002] 162723.353237: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/5-31858 [008] 162723.353237: funcgraph_entry:        0.419 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.353237: funcgraph_entry:        0.437 us   |                spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353238: funcgraph_entry:        0.348 us   |                spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.353238: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/5-31858 [008] 162723.353238: funcgraph_entry:        0.696 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/0-31853 [006] 162723.353239: funcgraph_entry:        0.359 us   |                vdev_readable();
      z_wr_iss/2-31855 [002] 162723.353239: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.353240: funcgraph_entry:        0.553 us   |                  spa_writeable();
      z_wr_iss/0-31853 [006] 162723.353240: funcgraph_entry:        0.495 us   |                vdev_readable();
      z_wr_iss/5-31858 [008] 162723.353240: funcgraph_exit:         5.990 us   |                  }
      z_wr_iss/5-31858 [008] 162723.353240: funcgraph_exit:         7.377 us   |                }
      z_wr_iss/2-31855 [002] 162723.353241: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/0-31853 [006] 162723.353241: funcgraph_exit:         2.244 us   |              }
      z_wr_iss/5-31858 [008] 162723.353241: funcgraph_exit:         9.581 us   |              }
      z_wr_iss/2-31855 [002] 162723.353241: funcgraph_entry:        0.377 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.353242: funcgraph_entry:        0.313 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.353242: funcgraph_entry:        0.308 us   |                    vdev_queue_offset_compare();
      z_wr_iss/5-31858 [008] 162723.353243: funcgraph_exit:       + 22.544 us  |            }
      z_wr_iss/2-31855 [002] 162723.353243: funcgraph_entry:        0.631 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/5-31858 [008] 162723.353244: funcgraph_exit:       + 27.428 us  |          }
      z_wr_iss/0-31853 [006] 162723.353244: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.353244: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/5-31858 [008] 162723.353244: funcgraph_entry:        0.437 us   |          spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353245: funcgraph_exit:         4.139 us   |                  }
      z_wr_iss/0-31853 [006] 162723.353245: funcgraph_entry:        0.800 us   |                  zio_add_child();
      z_wr_iss/5-31858 [008] 162723.353245: funcgraph_entry:        0.435 us   |          spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353245: funcgraph_exit:         6.001 us   |                }
      z_wr_iss/2-31855 [002] 162723.353246: funcgraph_exit:         8.633 us   |              }
      z_wr_iss/5-31858 [008] 162723.353246: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/5-31858 [008] 162723.353246: funcgraph_entry:        0.397 us   |            zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.353246: funcgraph_exit:         2.063 us   |                }
      z_wr_iss/0-31853 [006] 162723.353247: funcgraph_exit:         2.972 us   |              }
      z_wr_iss/5-31858 [008] 162723.353247: funcgraph_exit:         1.050 us   |          }
      z_wr_iss/0-31853 [006] 162723.353247: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/5-31858 [008] 162723.353247: funcgraph_exit:       + 33.424 us  |        }
      z_wr_iss/0-31853 [006] 162723.353247: funcgraph_entry:        0.349 us   |                spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353247: funcgraph_exit:       + 25.603 us  |            }
      z_wr_iss/5-31858 [008] 162723.353248: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/0-31853 [006] 162723.353248: funcgraph_entry:        0.318 us   |                spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353248: funcgraph_exit:       + 29.592 us  |          }
      z_wr_iss/5-31858 [008] 162723.353248: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/2-31855 [002] 162723.353249: funcgraph_entry:        0.361 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353249: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/5-31858 [008] 162723.353249: funcgraph_entry:        0.939 us   |            zio_add_child();
      z_wr_iss/0-31853 [006] 162723.353249: funcgraph_entry:        0.317 us   |                  spa_writeable();
      z_wr_iss/2-31855 [002] 162723.353250: funcgraph_entry:        0.379 us   |          spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.353250: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/5-31858 [008] 162723.353250: funcgraph_exit:         2.260 us   |          }
      z_wr_iss/0-31853 [006] 162723.353250: funcgraph_entry:        0.355 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.353250: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/5-31858 [008] 162723.353251: funcgraph_exit:         3.244 us   |        }
      z_wr_iss/2-31855 [002] 162723.353251: funcgraph_entry:        0.556 us   |            zio_wait_for_children();
      z_wr_iss/0-31853 [006] 162723.353251: funcgraph_entry:        0.346 us   |                    vdev_queue_offset_compare();
      z_wr_iss/5-31858 [008] 162723.353251: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.353252: funcgraph_entry:        0.438 us   |                    vdev_queue_offset_compare();
      z_wr_iss/5-31858 [008] 162723.353252: funcgraph_entry:        0.495 us   |          spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353252: funcgraph_exit:         1.589 us   |          }
      z_wr_iss/2-31855 [002] 162723.353253: funcgraph_exit:       + 36.299 us  |        }
      z_wr_iss/0-31853 [006] 162723.353253: funcgraph_entry:        0.464 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/5-31858 [008] 162723.353253: funcgraph_entry:        0.457 us   |          spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353253: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/2-31855 [002] 162723.353254: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/0-31853 [006] 162723.353254: funcgraph_exit:         4.103 us   |                  }
      z_wr_iss/5-31858 [008] 162723.353254: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.353254: funcgraph_exit:         5.495 us   |                }
      z_wr_iss/5-31858 [008] 162723.353254: funcgraph_entry:        0.475 us   |            zio_buf_alloc();
      z_wr_iss/0-31853 [006] 162723.353255: funcgraph_exit:         7.508 us   |              }
      z_wr_iss/2-31855 [002] 162723.353255: funcgraph_entry:        0.834 us   |            zio_add_child();
      z_wr_iss/0-31853 [006] 162723.353256: funcgraph_exit:       + 18.970 us  |            }
      z_wr_iss/2-31855 [002] 162723.353256: funcgraph_exit:         2.106 us   |          }
      z_wr_iss/5-31858 [008] 162723.353256: funcgraph_entry:        0.925 us   |            zio_push_transform();
      z_wr_iss/0-31853 [006] 162723.353256: funcgraph_exit:       + 22.545 us  |          }
      z_wr_iss/0-31853 [006] 162723.353257: funcgraph_entry:        0.324 us   |          spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353257: funcgraph_exit:         3.294 us   |        }
      z_wr_iss/2-31855 [002] 162723.353257: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/0-31853 [006] 162723.353257: funcgraph_entry:        0.445 us   |          spa_is_initializing();
      z_wr_iss/5-31858 [008] 162723.353257: funcgraph_entry:        0.420 us   |            spa_writeable();
      z_wr_iss/2-31855 [002] 162723.353258: funcgraph_entry:        0.509 us   |          spa_get_dsl();
      z_wr_iss/0-31853 [006] 162723.353258: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/5-31858 [008] 162723.353258: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/0-31853 [006] 162723.353258: funcgraph_entry:        0.358 us   |            zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.353259: funcgraph_entry:        0.384 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353259: funcgraph_exit:       + 41.621 us  |      }
      z_wr_iss/0-31853 [006] 162723.353259: funcgraph_exit:         1.138 us   |          }
      z_wr_iss/2-31855 [002] 162723.353259: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/0-31853 [006] 162723.353259: funcgraph_exit:       + 27.524 us  |        }
      z_wr_iss/5-31858 [008] 162723.353260: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.353260: funcgraph_entry:        0.906 us   |      zio_push_transform();
      z_wr_iss/0-31853 [006] 162723.353260: funcgraph_exit:       + 98.446 us  |      }
      z_wr_iss/2-31855 [002] 162723.353260: funcgraph_entry:        0.622 us   |            zio_buf_alloc();
      z_wr_iss/0-31853 [006] 162723.353260: funcgraph_exit:       ! 100.243 us |    }
      z_wr_iss/0-31853 [006] 162723.353260: funcgraph_entry:        0.321 us   |    spa_get_dsl();
      z_wr_iss/5-31858 [008] 162723.353261: funcgraph_entry:        0.530 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.353261: funcgraph_exit:       + 47.671 us  |    }
      z_wr_iss/0-31853 [006] 162723.353261: funcgraph_entry:        0.308 us   |    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353261: funcgraph_entry:        0.393 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353261: funcgraph_entry:        0.596 us   |            zio_push_transform();
      z_wr_iss/5-31858 [008] 162723.353262: funcgraph_entry:        0.597 us   |                vdev_readable();
      z_wr_iss/0-31853 [006] 162723.353262: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.353262: funcgraph_entry:        0.462 us   |    spa_is_initializing();
      z_wr_iss/0-31853 [006] 162723.353262: funcgraph_entry:        0.344 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.353263: funcgraph_entry:        0.549 us   |            spa_writeable();
      z_wr_iss/0-31853 [006] 162723.353263: funcgraph_exit:         0.966 us   |    }
      z_wr_iss/5-31858 [008] 162723.353263: funcgraph_exit:         3.037 us   |              }
      z_wr_iss/6-31859 [005] 162723.353263: funcgraph_entry:                   |    zio_checksum_generate() {
      z_wr_iss/0-31853 [006] 162723.353263: funcgraph_exit:       ! 151.640 us |  }
      z_wr_iss/6-31859 [005] 162723.353263: funcgraph_entry:        1.065 us   |      zio_checksum_compute();
      z_wr_iss/2-31855 [002] 162723.353264: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/6-31859 [005] 162723.353265: funcgraph_exit:         1.791 us   |    }
      z_wr_iss/2-31855 [002] 162723.353265: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.353265: funcgraph_entry:        0.467 us   |    spa_get_dsl();
      z_wr_iss/5-31858 [008] 162723.353265: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/2-31855 [002] 162723.353265: funcgraph_entry:        0.441 us   |                vdev_readable();
      z_wr_iss/5-31858 [008] 162723.353266: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/6-31859 [005] 162723.353266: funcgraph_entry:        0.434 us   |    spa_is_initializing();
      z_wr_iss/5-31858 [008] 162723.353266: funcgraph_entry:        0.864 us   |                  zio_add_child();
      z_wr_iss/2-31855 [002] 162723.353266: funcgraph_entry:        0.576 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.353267: funcgraph_entry:                   |    zio_ready() {
      z_wr_iss/5-31858 [008] 162723.353268: funcgraph_exit:         2.070 us   |                }
      z_wr_iss/2-31855 [002] 162723.353268: funcgraph_exit:         2.992 us   |              }
      z_wr_iss/6-31859 [005] 162723.353268: funcgraph_entry:        0.590 us   |      zio_wait_for_children();
      z_wr_iss/5-31858 [008] 162723.353268: funcgraph_exit:         3.093 us   |              }
      z_wr_iss/5-31858 [008] 162723.353269: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/5-31858 [008] 162723.353269: funcgraph_entry:        0.375 us   |                spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353269: funcgraph_entry:        0.542 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.353269: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/5-31858 [008] 162723.353270: funcgraph_entry:        0.532 us   |                spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353270: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/6-31859 [005] 162723.353270: funcgraph_entry:                   |      arc_write_ready() {
      z_wr_iss/2-31855 [002] 162723.353271: funcgraph_entry:        0.748 us   |                  zio_add_child();
      z_wr_iss/6-31859 [005] 162723.353271: funcgraph_entry:                   |        dbuf_write_ready() {
      z_wr_iss/5-31858 [008] 162723.353271: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.353271: funcgraph_entry:        0.464 us   |          zrl_add();
      z_wr_iss/5-31858 [008] 162723.353271: funcgraph_entry:        0.414 us   |                  spa_writeable();
      z_wr_iss/2-31855 [002] 162723.353272: funcgraph_exit:         2.163 us   |                }
      z_wr_iss/6-31859 [005] 162723.353272: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/5-31858 [008] 162723.353272: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/6-31859 [005] 162723.353272: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.353273: funcgraph_exit:         3.169 us   |              }
      z_wr_iss/5-31858 [008] 162723.353273: funcgraph_entry:        0.514 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.353273: funcgraph_entry:        0.461 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.353273: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/2-31855 [002] 162723.353273: funcgraph_entry:        0.501 us   |                spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353274: funcgraph_exit:         1.314 us   |            }
      z_wr_iss/5-31858 [008] 162723.353274: funcgraph_entry:        0.393 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.353274: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.353274: funcgraph_entry:        0.473 us   |                spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353275: funcgraph_entry:        0.422 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353275: funcgraph_entry:        0.529 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.353275: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.353276: funcgraph_exit:         1.291 us   |            }
      z_wr_iss/5-31858 [008] 162723.353276: funcgraph_entry:        0.560 us   |                    vdev_queue_offset_compare();
      z_wr_iss/2-31855 [002] 162723.353276: funcgraph_entry:        0.548 us   |                  spa_writeable();
      z_wr_iss/6-31859 [005] 162723.353276: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.353277: funcgraph_entry:        0.530 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.353277: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/5-31858 [008] 162723.353277: funcgraph_entry:        0.678 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/6-31859 [005] 162723.353278: funcgraph_exit:         1.581 us   |            }
      z_wr_iss/6-31859 [005] 162723.353278: funcgraph_exit:         6.177 us   |          }
      z_wr_iss/5-31858 [008] 162723.353279: funcgraph_exit:         6.440 us   |                  }
      z_wr_iss/2-31855 [002] 162723.353279: funcgraph_entry:        0.482 us   |                    vdev_queue_offset_compare();
      z_wr_iss/5-31858 [008] 162723.353279: funcgraph_exit:         8.272 us   |                }
      z_wr_iss/6-31859 [005] 162723.353279: funcgraph_entry:                   |          bp_get_dsize_sync() {
      z_wr_iss/5-31858 [008] 162723.353279: funcgraph_exit:       + 10.935 us  |              }
      z_wr_iss/6-31859 [005] 162723.353279: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/2-31855 [002] 162723.353280: funcgraph_entry:        0.436 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.353280: funcgraph_entry:        0.525 us   |              vdev_lookup_top();
      z_wr_iss/2-31855 [002] 162723.353280: funcgraph_entry:        0.426 us   |                    vdev_queue_offset_compare();
      z_wr_iss/5-31858 [008] 162723.353281: funcgraph_exit:       + 22.490 us  |            }
      z_wr_iss/6-31859 [005] 162723.353281: funcgraph_exit:         1.355 us   |            }
      z_wr_iss/6-31859 [005] 162723.353281: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/5-31858 [008] 162723.353281: funcgraph_exit:       + 27.406 us  |          }
      z_wr_iss/2-31855 [002] 162723.353281: funcgraph_entry:        0.490 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.353282: funcgraph_entry:        0.366 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353282: funcgraph_entry:        0.447 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353282: funcgraph_exit:         1.276 us   |            }
      z_wr_iss/2-31855 [002] 162723.353283: funcgraph_entry:        0.680 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/5-31858 [008] 162723.353283: funcgraph_entry:        0.586 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353283: funcgraph_entry:                   |            dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.353283: funcgraph_entry:        0.411 us   |              vdev_lookup_top();
      z_wr_iss/5-31858 [008] 162723.353284: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/2-31855 [002] 162723.353284: funcgraph_exit:         6.827 us   |                  }
      z_wr_iss/6-31859 [005] 162723.353284: funcgraph_exit:         1.251 us   |            }
      z_wr_iss/5-31858 [008] 162723.353284: funcgraph_entry:        0.480 us   |            zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.353285: funcgraph_exit:         5.552 us   |          }
      z_wr_iss/2-31855 [002] 162723.353285: funcgraph_exit:         9.126 us   |                }
      z_wr_iss/6-31859 [005] 162723.353285: funcgraph_entry:                   |          dnode_diduse_space() {
      z_wr_iss/2-31855 [002] 162723.353285: funcgraph_exit:       + 12.052 us  |              }
      z_wr_iss/5-31858 [008] 162723.353285: funcgraph_exit:         1.457 us   |          }
      z_wr_iss/6-31859 [005] 162723.353285: funcgraph_entry:        0.400 us   |            spa_version();
      z_wr_iss/5-31858 [008] 162723.353286: funcgraph_exit:       + 34.345 us  |        }
      z_wr_iss/5-31858 [008] 162723.353286: funcgraph_exit:       ! 127.616 us |      }
      z_wr_iss/6-31859 [005] 162723.353286: funcgraph_exit:         1.285 us   |          }
      z_wr_iss/2-31855 [002] 162723.353286: funcgraph_exit:       + 22.672 us  |            }
      z_wr_iss/5-31858 [008] 162723.353287: funcgraph_exit:       ! 130.010 us |    }
      z_wr_iss/2-31855 [002] 162723.353287: funcgraph_exit:       + 27.474 us  |          }
      z_wr_iss/6-31859 [005] 162723.353287: funcgraph_entry:        0.433 us   |          zrl_remove();
      z_wr_iss/5-31858 [008] 162723.353287: funcgraph_entry:        0.467 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353287: funcgraph_entry:        0.563 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353288: funcgraph_exit:       + 17.051 us  |        }
      z_wr_iss/6-31859 [005] 162723.353288: funcgraph_entry:        0.437 us   |        arc_cksum_compute();
      z_wr_iss/5-31858 [008] 162723.353288: funcgraph_entry:        0.554 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353289: funcgraph_entry:        0.615 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353289: funcgraph_exit:       + 18.841 us  |      }
      z_wr_iss/6-31859 [005] 162723.353289: funcgraph_entry:        0.381 us   |      zio_walk_parents();
      z_wr_iss/5-31858 [008] 162723.353290: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/2-31855 [002] 162723.353290: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.353290: funcgraph_entry:        0.432 us   |      zio_walk_parents();
      z_wr_iss/5-31858 [008] 162723.353290: funcgraph_entry:        0.533 us   |      zio_wait_for_children();
      z_wr_iss/2-31855 [002] 162723.353290: funcgraph_entry:        0.500 us   |            zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.353291: funcgraph_exit:       + 23.828 us  |    }
      z_wr_iss/5-31858 [008] 162723.353291: funcgraph_exit:         1.693 us   |    }
      z_wr_iss/2-31855 [002] 162723.353292: funcgraph_exit:         1.707 us   |          }
      z_wr_iss/6-31859 [005] 162723.353292: funcgraph_entry:        0.506 us   |    spa_get_dsl();
      z_wr_iss/5-31858 [008] 162723.353292: funcgraph_exit:       ! 199.353 us |  }
      z_wr_iss/2-31855 [002] 162723.353292: funcgraph_exit:       + 35.076 us  |        }
      z_wr_iss/6-31859 [005] 162723.353293: funcgraph_entry:        1.930 us   |    zio_taskq_member();
      z_wr_iss/2-31855 [002] 162723.353293: funcgraph_exit:       ! 134.023 us |      }
      z_wr_iss/2-31855 [002] 162723.353293: funcgraph_exit:       ! 136.662 us |    }
      z_wr_iss/2-31855 [002] 162723.353294: funcgraph_entry:        0.396 us   |    spa_get_dsl();
      z_wr_iss/2-31855 [002] 162723.353295: funcgraph_entry:        0.417 us   |    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353295: funcgraph_entry:        0.372 us   |    spa_is_initializing();
      z_wr_iss/2-31855 [002] 162723.353296: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.353296: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/2-31855 [002] 162723.353296: funcgraph_entry:        0.435 us   |      zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.353296: funcgraph_entry:        0.574 us   |      spa_config_enter();
      z_wr_iss/2-31855 [002] 162723.353297: funcgraph_exit:         1.717 us   |    }
      z_wr_iss/6-31859 [005] 162723.353297: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/2-31855 [002] 162723.353298: funcgraph_exit:       ! 204.634 us |  }
      z_wr_iss/6-31859 [005] 162723.353298: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.353298: funcgraph_entry:        3.717 us   |          spa_get_random();
      z_wr_iss/6-31859 [005] 162723.353303: funcgraph_entry:        0.465 us   |          vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.353303: funcgraph_entry:        0.412 us   |          vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.353303: funcgraph_exit:       + 69.799 us  |        }
      z_wr_iss/1-31854 [009] 162723.353304: funcgraph_entry:        1.210 us   |        zio_push_transform();
      z_wr_iss/6-31859 [005] 162723.353304: funcgraph_entry:        0.578 us   |          vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.353306: funcgraph_exit:         7.910 us   |        }
      z_wr_iss/1-31854 [009] 162723.353306: funcgraph_exit:       + 76.891 us  |      }
      z_wr_iss/6-31859 [005] 162723.353306: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.353307: funcgraph_entry:        0.471 us   |      spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353307: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/6-31859 [005] 162723.353308: funcgraph_entry:        0.731 us   |            zio_add_child();
      z_wr_iss/1-31854 [009] 162723.353308: funcgraph_entry:        0.528 us   |      spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353309: funcgraph_exit:         2.171 us   |          }
      z_wr_iss/1-31854 [009] 162723.353309: funcgraph_entry:                   |      zio_checksum_generate() {
      z_wr_iss/6-31859 [005] 162723.353309: funcgraph_exit:         3.136 us   |        }
      z_wr_iss/1-31854 [009] 162723.353310: funcgraph_entry:        1.834 us   |        zio_checksum_compute();
      z_wr_iss/6-31859 [005] 162723.353310: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.353310: funcgraph_entry:        0.398 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353311: funcgraph_entry:        0.358 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353312: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [009] 162723.353312: funcgraph_exit:         2.792 us   |      }
      z_wr_iss/6-31859 [005] 162723.353312: funcgraph_entry:        0.615 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [009] 162723.353312: funcgraph_entry:        0.551 us   |      spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.353313: funcgraph_entry:        0.339 us   |      spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.353314: funcgraph_entry:                   |      zio_ready() {
      z_wr_iss/6-31859 [005] 162723.353314: funcgraph_entry:        0.586 us   |            zio_push_transform();
      z_wr_iss/1-31854 [009] 162723.353314: funcgraph_entry:        0.390 us   |        zio_wait_for_children();
      z_wr_iss/1-31854 [009] 162723.353315: funcgraph_entry:        0.478 us   |        zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.353315: funcgraph_entry:        0.351 us   |            spa_writeable();
      z_wr_iss/6-31859 [005] 162723.353316: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [009] 162723.353316: funcgraph_entry:                   |        arc_write_ready() {
      z_wr_iss/1-31854 [009] 162723.353317: funcgraph_entry:                   |          dbuf_write_ready() {
      z_wr_iss/1-31854 [009] 162723.353317: funcgraph_entry:        0.522 us   |            zrl_add();
      z_wr_iss/6-31859 [005] 162723.353318: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.353318: funcgraph_entry:        0.367 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.353318: funcgraph_entry:                   |            bp_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.353319: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.353319: funcgraph_entry:        0.504 us   |                vdev_readable();
      z_wr_iss/1-31854 [009] 162723.353319: funcgraph_entry:        0.463 us   |                vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.353320: funcgraph_exit:         1.229 us   |              }
      z_wr_iss/1-31854 [009] 162723.353320: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.353320: funcgraph_exit:         2.908 us   |              }
      z_wr_iss/1-31854 [009] 162723.353321: funcgraph_entry:        0.384 us   |                vdev_lookup_top();
      z_wr_iss/1-31854 [009] 162723.353322: funcgraph_exit:         1.297 us   |              }
      z_wr_iss/1-31854 [009] 162723.353322: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.353322: funcgraph_entry:        0.373 us   |                vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.353323: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.353323: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [009] 162723.353323: funcgraph_exit:         1.290 us   |              }
      z_wr_iss/1-31854 [009] 162723.353324: funcgraph_exit:         5.349 us   |            }
      z_wr_iss/6-31859 [005] 162723.353324: funcgraph_entry:        0.662 us   |                  zio_add_child();
      z_wr_iss/1-31854 [009] 162723.353324: funcgraph_entry:                   |            bp_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.353324: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/6-31859 [005] 162723.353325: funcgraph_exit:         1.698 us   |                }
      z_wr_iss/1-31854 [009] 162723.353325: funcgraph_entry:        0.400 us   |                vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.353325: funcgraph_exit:         2.514 us   |              }
      z_wr_iss/6-31859 [005] 162723.353326: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.353326: funcgraph_exit:         1.276 us   |              }
      z_wr_iss/6-31859 [005] 162723.353326: funcgraph_entry:        0.332 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [009] 162723.353326: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.353326: funcgraph_entry:        0.454 us   |                vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.353327: funcgraph_entry:        0.393 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.353327: funcgraph_exit:         1.414 us   |              }
      z_wr_iss/6-31859 [005] 162723.353327: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.353328: funcgraph_entry:        0.434 us   |                  spa_writeable();
      z_wr_iss/1-31854 [009] 162723.353328: funcgraph_entry:                   |              dva_get_dsize_sync() {
      z_wr_iss/1-31854 [009] 162723.353328: funcgraph_entry:        0.697 us   |                vdev_lookup_top();
      z_wr_iss/6-31859 [005] 162723.353329: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/6-31859 [005] 162723.353329: funcgraph_entry:        0.454 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.353330: funcgraph_exit:         1.681 us   |              }
      z_wr_iss/1-31854 [009] 162723.353330: funcgraph_exit:         5.898 us   |            }
      z_wr_iss/6-31859 [005] 162723.353330: funcgraph_entry:        0.446 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.353331: funcgraph_entry:                   |            dnode_diduse_space() {
      z_wr_iss/1-31854 [009] 162723.353331: funcgraph_entry:        0.536 us   |              spa_version();
      z_wr_iss/6-31859 [005] 162723.353331: funcgraph_entry:        0.422 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [009] 162723.353332: funcgraph_exit:         1.679 us   |            }
      z_wr_iss/6-31859 [005] 162723.353332: funcgraph_entry:        0.589 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [009] 162723.353333: funcgraph_entry:        0.556 us   |            zrl_remove();
      z_wr_iss/6-31859 [005] 162723.353333: funcgraph_exit:         4.774 us   |                  }
      z_wr_iss/6-31859 [005] 162723.353334: funcgraph_exit:         6.441 us   |                }
      z_wr_iss/1-31854 [009] 162723.353334: funcgraph_exit:       + 17.458 us  |          }
      z_wr_iss/6-31859 [005] 162723.353334: funcgraph_exit:         8.678 us   |              }
      z_wr_iss/1-31854 [009] 162723.353334: funcgraph_entry:        0.455 us   |          arc_cksum_compute();
      z_wr_iss/1-31854 [009] 162723.353335: funcgraph_exit:       + 19.370 us  |        }
      z_wr_iss/1-31854 [009] 162723.353336: funcgraph_entry:        0.448 us   |        zio_walk_parents();
      z_wr_iss/6-31859 [005] 162723.353336: funcgraph_exit:       + 20.310 us  |            }
      z_wr_iss/6-31859 [005] 162723.353337: funcgraph_exit:       + 24.871 us  |          }
      z_wr_iss/1-31854 [009] 162723.353337: funcgraph_entry:        0.452 us   |        zio_walk_parents();
      z_wr_iss/6-31859 [005] 162723.353337: funcgraph_entry:        0.367 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353338: funcgraph_entry:        0.373 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [009] 162723.353338: funcgraph_entry:        0.488 us   |        spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353339: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [009] 162723.353339: funcgraph_entry:        0.506 us   |        spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353339: funcgraph_entry:        0.399 us   |            zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.353340: funcgraph_exit:         1.142 us   |          }
      z_wr_iss/6-31859 [005] 162723.353340: funcgraph_exit:       + 30.174 us  |        }
      z_wr_iss/1-31854 [009] 162723.353340: funcgraph_entry:                   |        zio_write_bp_init() {
      z_wr_iss/6-31859 [005] 162723.353340: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [009] 162723.353340: funcgraph_entry:        0.484 us   |          zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.353341: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [009] 162723.353341: funcgraph_entry:        0.530 us   |          zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.353341: funcgraph_entry:        0.530 us   |            zio_add_child();
      z_wr_iss/6-31859 [005] 162723.353342: funcgraph_exit:         1.598 us   |          }
      z_wr_iss/1-31854 [009] 162723.353342: funcgraph_entry:        0.414 us   |          spa_sync_pass();
      z_wr_iss/6-31859 [005] 162723.353343: funcgraph_exit:         2.355 us   |        }
      z_wr_iss/6-31859 [005] 162723.353343: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/1-31854 [009] 162723.353343: funcgraph_entry:                   |          zio_buf_alloc() {
      z_wr_iss/6-31859 [005] 162723.353343: funcgraph_entry:        0.402 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353344: funcgraph_entry:        0.511 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353345: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.353346: funcgraph_entry:        0.440 us   |            zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.353347: funcgraph_entry:        0.567 us   |            zio_push_transform();
      z_wr_iss/6-31859 [005] 162723.353348: funcgraph_entry:        0.346 us   |            spa_writeable();
      z_wr_iss/6-31859 [005] 162723.353349: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/6-31859 [005] 162723.353350: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.353351: funcgraph_entry:        0.443 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.353357: funcgraph_entry:        0.567 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.353358: funcgraph_exit:         8.397 us   |              }
      z_wr_iss/6-31859 [005] 162723.353360: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.353361: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/6-31859 [005] 162723.353361: funcgraph_entry:        0.723 us   |                  zio_add_child();
      z_wr_iss/6-31859 [005] 162723.353363: funcgraph_exit:         1.938 us   |                }
      z_wr_iss/6-31859 [005] 162723.353363: funcgraph_exit:         2.778 us   |              }
      z_wr_iss/6-31859 [005] 162723.353363: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.353364: funcgraph_entry:        0.427 us   |                spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353365: funcgraph_entry:        0.432 us   |                spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353366: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.353366: funcgraph_entry:        0.457 us   |                  spa_writeable();
      z_wr_iss/6-31859 [005] 162723.353367: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/6-31859 [005] 162723.353368: funcgraph_entry:        0.402 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.353369: funcgraph_entry:        0.598 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.353370: funcgraph_entry:        0.624 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.353371: funcgraph_entry:        0.581 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.353372: funcgraph_entry:        0.482 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/6-31859 [005] 162723.353373: funcgraph_exit:         6.166 us   |                  }
      z_wr_iss/6-31859 [005] 162723.353374: funcgraph_exit:         8.264 us   |                }
      z_wr_iss/6-31859 [005] 162723.353374: funcgraph_exit:       + 10.718 us  |              }
      z_wr_iss/6-31859 [005] 162723.353375: funcgraph_exit:       + 26.419 us  |            }
      z_wr_iss/6-31859 [005] 162723.353376: funcgraph_exit:       + 30.334 us  |          }
      z_wr_iss/6-31859 [005] 162723.353376: funcgraph_entry:        0.374 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353377: funcgraph_entry:        0.349 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353378: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.353378: funcgraph_entry:        0.466 us   |            zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.353379: funcgraph_exit:         1.304 us   |          }
      z_wr_iss/6-31859 [005] 162723.353379: funcgraph_exit:       + 36.296 us  |        }
      z_wr_iss/6-31859 [005] 162723.353380: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.353380: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/6-31859 [005] 162723.353381: funcgraph_entry:        0.921 us   |            zio_add_child();
      z_wr_iss/6-31859 [005] 162723.353382: funcgraph_exit:         2.310 us   |          }
      z_wr_iss/6-31859 [005] 162723.353383: funcgraph_exit:         3.224 us   |        }
      z_wr_iss/6-31859 [005] 162723.353383: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.353384: funcgraph_entry:        0.603 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353385: funcgraph_entry:        0.429 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353386: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.353386: funcgraph_entry:        0.485 us   |            zio_buf_alloc();
      z_wr_iss/6-31859 [005] 162723.353388: funcgraph_entry:        0.753 us   |            zio_push_transform();
      z_wr_iss/6-31859 [005] 162723.353389: funcgraph_entry:        0.480 us   |            spa_writeable();
      z_wr_iss/6-31859 [005] 162723.353390: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/6-31859 [005] 162723.353391: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/6-31859 [005] 162723.353392: funcgraph_entry:        0.506 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.353393: funcgraph_entry:        0.509 us   |                vdev_readable();
      z_wr_iss/6-31859 [005] 162723.353394: funcgraph_exit:         2.901 us   |              }
      z_wr_iss/6-31859 [005] 162723.353396: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/6-31859 [005] 162723.353396: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/6-31859 [005] 162723.353397: funcgraph_entry:        0.711 us   |                  zio_add_child();
      z_wr_iss/6-31859 [005] 162723.353398: funcgraph_exit:         1.815 us   |                }
      z_wr_iss/6-31859 [005] 162723.353398: funcgraph_exit:         2.496 us   |              }
      z_wr_iss/6-31859 [005] 162723.353399: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/6-31859 [005] 162723.353399: funcgraph_entry:        0.358 us   |                spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353400: funcgraph_entry:        0.306 us   |                spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353400: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/6-31859 [005] 162723.353401: funcgraph_entry:        0.318 us   |                  spa_writeable();
      z_wr_iss/6-31859 [005] 162723.353401: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/6-31859 [005] 162723.353418: funcgraph_entry:        0.622 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.353419: funcgraph_entry:        0.457 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.353420: funcgraph_entry:        0.497 us   |                    vdev_queue_offset_compare();
      z_wr_iss/6-31859 [005] 162723.353422: funcgraph_entry:        0.580 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/6-31859 [005] 162723.353423: funcgraph_exit:       + 21.236 us  |                  }
      z_wr_iss/6-31859 [005] 162723.353423: funcgraph_exit:       + 22.693 us  |                }
      z_wr_iss/6-31859 [005] 162723.353423: funcgraph_exit:       + 24.744 us  |              }
      z_wr_iss/6-31859 [005] 162723.353425: funcgraph_exit:       + 35.027 us  |            }
      z_wr_iss/6-31859 [005] 162723.353425: funcgraph_exit:       + 39.434 us  |          }
      z_wr_iss/6-31859 [005] 162723.353426: funcgraph_entry:        0.392 us   |          spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353426: funcgraph_entry:        0.537 us   |          spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353428: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.353428: funcgraph_entry:        0.470 us   |            zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.353429: funcgraph_exit:         1.436 us   |          }
      z_wr_iss/6-31859 [005] 162723.353429: funcgraph_exit:       + 46.052 us  |        }
      z_wr_iss/6-31859 [005] 162723.353430: funcgraph_exit:       ! 132.572 us |      }
      z_wr_iss/6-31859 [005] 162723.353430: funcgraph_exit:       ! 134.467 us |    }
      z_wr_iss/6-31859 [005] 162723.353431: funcgraph_entry:        0.454 us   |    spa_get_dsl();
      z_wr_iss/6-31859 [005] 162723.353431: funcgraph_entry:        0.346 us   |    spa_is_initializing();
      z_wr_iss/6-31859 [005] 162723.353432: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/6-31859 [005] 162723.353432: funcgraph_entry:        0.374 us   |      zio_wait_for_children();
      z_wr_iss/6-31859 [005] 162723.353433: funcgraph_exit:         1.031 us   |    }
      z_wr_iss/6-31859 [005] 162723.353434: funcgraph_exit:       ! 221.649 us |  }
      z_wr_iss/1-31854 [003] 162723.355035: funcgraph_exit:       + 10.311 us  |          }
      z_wr_iss/1-31854 [003] 162723.355037: funcgraph_entry:                   |          zio_compress_data() {
      z_wr_iss/1-31854 [003] 162723.355037: funcgraph_entry:        8.014 us   |            lzjb_compress();
      z_wr_iss/1-31854 [003] 162723.355046: funcgraph_exit:         9.128 us   |          }
      z_wr_iss/1-31854 [003] 162723.355046: funcgraph_entry:        0.539 us   |          zio_push_transform();
      z_wr_iss/1-31854 [003] 162723.355047: funcgraph_exit:       + 25.776 us  |        }
      z_wr_iss/1-31854 [003] 162723.355047: funcgraph_entry:        0.462 us   |        spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355048: funcgraph_entry:        0.372 us   |        spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355049: funcgraph_entry:                   |        zio_checksum_generate() {
      z_wr_iss/1-31854 [003] 162723.355049: funcgraph_entry:        0.542 us   |          zio_checksum_compute();
      z_wr_iss/1-31854 [003] 162723.355050: funcgraph_exit:         1.288 us   |        }
      z_wr_iss/1-31854 [003] 162723.355051: funcgraph_entry:        0.353 us   |        spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355051: funcgraph_entry:        0.347 us   |        spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355052: funcgraph_entry:                   |        zio_ready() {
      z_wr_iss/1-31854 [003] 162723.355052: funcgraph_entry:        0.358 us   |          zio_wait_for_children();
      z_wr_iss/1-31854 [003] 162723.355053: funcgraph_entry:        0.330 us   |          zio_wait_for_children();
      z_wr_iss/1-31854 [003] 162723.355054: funcgraph_entry:                   |          arc_write_ready() {
      z_wr_iss/1-31854 [003] 162723.355054: funcgraph_entry:        0.382 us   |            dmu_objset_write_ready();
      z_wr_iss/1-31854 [003] 162723.355055: funcgraph_entry:        0.306 us   |            arc_cksum_compute();
      z_wr_iss/1-31854 [003] 162723.355055: funcgraph_exit:         1.792 us   |          }
      z_wr_iss/1-31854 [003] 162723.355056: funcgraph_entry:        0.306 us   |          zio_walk_parents();
      z_wr_iss/1-31854 [003] 162723.355056: funcgraph_entry:        0.304 us   |          zio_walk_parents();
      z_wr_iss/1-31854 [003] 162723.355057: funcgraph_exit:         5.245 us   |        }
      z_wr_iss/1-31854 [003] 162723.355058: funcgraph_entry:        0.357 us   |        spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355058: funcgraph_entry:        1.470 us   |        zio_taskq_member();
      z_wr_iss/1-31854 [003] 162723.355060: funcgraph_entry:        0.328 us   |        spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355061: funcgraph_entry:                   |        zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355064: funcgraph_entry:        0.591 us   |          spa_config_enter();
      z_wr_iss/1-31854 [003] 162723.355065: funcgraph_entry:                   |          vdev_mirror_io_start() {
      z_wr_iss/1-31854 [003] 162723.355065: funcgraph_entry:                   |            vdev_mirror_map_alloc() {
      z_wr_iss/1-31854 [003] 162723.355066: funcgraph_entry:        4.236 us   |              spa_get_random();
      z_wr_iss/1-31854 [003] 162723.355072: funcgraph_entry:        0.664 us   |              vdev_lookup_top();
      z_wr_iss/1-31854 [003] 162723.355073: funcgraph_entry:        0.676 us   |              vdev_lookup_top();
      z_wr_iss/1-31854 [003] 162723.355074: funcgraph_entry:        0.730 us   |              vdev_lookup_top();
      z_wr_iss/1-31854 [003] 162723.355076: funcgraph_exit:       + 10.499 us  |            }
      z_wr_iss/1-31854 [003] 162723.355077: funcgraph_entry:                   |            zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355077: funcgraph_entry:                   |              zio_create() {
      z_wr_iss/1-31854 [003] 162723.355078: funcgraph_entry:        1.020 us   |                zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355080: funcgraph_exit:         2.843 us   |              }
      z_wr_iss/1-31854 [003] 162723.355081: funcgraph_exit:         4.137 us   |            }
      z_wr_iss/1-31854 [003] 162723.355081: funcgraph_entry:                   |            zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355082: funcgraph_entry:        0.574 us   |              spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355083: funcgraph_entry:        0.803 us   |              spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355084: funcgraph_entry:                   |              zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355085: funcgraph_entry:        0.781 us   |                zio_buf_alloc();
      z_wr_iss/1-31854 [003] 162723.355087: funcgraph_entry:        0.749 us   |                zio_push_transform();
      z_wr_iss/1-31854 [003] 162723.355088: funcgraph_entry:        0.469 us   |                spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355089: funcgraph_entry:                   |                vdev_tier_io_start() {
      z_wr_iss/1-31854 [003] 162723.355092: funcgraph_entry:                   |                  vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [003] 162723.355093: funcgraph_entry:        0.442 us   |                    vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355094: funcgraph_entry:        0.273 us   |                    vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355095: funcgraph_exit:         2.693 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355097: funcgraph_entry:                   |                  zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355097: funcgraph_entry:                   |                    zio_create() {
      z_wr_iss/1-31854 [003] 162723.355101: funcgraph_entry:        0.530 us   |                      zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355102: funcgraph_exit:         4.655 us   |                    }
      z_wr_iss/1-31854 [003] 162723.355102: funcgraph_exit:         5.268 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355103: funcgraph_entry:                   |                  zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355103: funcgraph_entry:        0.264 us   |                    spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355103: funcgraph_entry:        0.306 us   |                    spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355104: funcgraph_entry:                   |                    zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355104: funcgraph_entry:        0.259 us   |                      spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355105: funcgraph_entry:                   |                      vdev_queue_io() {
      z_wr_iss/1-31854 [003] 162723.355106: funcgraph_entry:                   |                        vdev_queue_io_to_issue() {
      z_wr_iss/1-31854 [003] 162723.355106: funcgraph_entry:        0.417 us   |                          zio_buf_alloc();
      z_wr_iss/1-31854 [003] 162723.355107: funcgraph_entry:        0.291 us   |                          vdev_queue_offset_compare();
      z_wr_iss/1-31854 [003] 162723.355108: funcgraph_entry:        0.368 us   |                          zio_buf_free();
      z_wr_iss/1-31854 [003] 162723.355109: funcgraph_entry:        0.474 us   |                          vdev_queue_io_remove();
      z_wr_iss/1-31854 [003] 162723.355110: funcgraph_exit:         3.645 us   |                        }
      z_wr_iss/1-31854 [003] 162723.355110: funcgraph_exit:         4.813 us   |                      }
      z_wr_iss/1-31854 [003] 162723.355110: funcgraph_entry:        0.344 us   |                      vdev_accessible();
      z_wr_iss/1-31854 [003] 162723.355111: funcgraph_entry:                   |                      vdev_disk_io_start() {
      z_wr_iss/1-31854 [003] 162723.355111: funcgraph_entry:                   |                        __vdev_disk_physio() {
      z_wr_iss/1-31854 [003] 162723.355121: funcgraph_entry:        0.377 us   |                          vdev_disk_dio_put();
      z_wr_iss/1-31854 [003] 162723.355122: funcgraph_exit:       + 10.912 us  |                        }
      z_wr_iss/1-31854 [003] 162723.355122: funcgraph_exit:       + 11.448 us  |                      }
      z_wr_iss/1-31854 [003] 162723.355122: funcgraph_exit:       + 18.388 us  |                    }
      z_wr_iss/1-31854 [003] 162723.355123: funcgraph_exit:       + 20.016 us  |                  }
      z_wr_iss/1-31854 [003] 162723.355124: funcgraph_exit:       + 34.317 us  |                }
      z_wr_iss/1-31854 [003] 162723.355124: funcgraph_exit:       + 39.424 us  |              }
      z_wr_iss/1-31854 [003] 162723.355124: funcgraph_entry:        0.278 us   |              spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355125: funcgraph_entry:        0.305 us   |              spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355125: funcgraph_entry:                   |              zio_vdev_io_done() {
      z_wr_iss/1-31854 [003] 162723.355126: funcgraph_entry:        0.291 us   |                zio_wait_for_children();
      z_wr_iss/1-31854 [003] 162723.355126: funcgraph_exit:         0.816 us   |              }
      z_wr_iss/1-31854 [003] 162723.355126: funcgraph_exit:       + 45.145 us  |            }
      z_wr_iss/1-31854 [003] 162723.355127: funcgraph_entry:                   |            zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355127: funcgraph_entry:                   |              zio_create() {
      z_wr_iss/1-31854 [003] 162723.355127: funcgraph_entry:        0.596 us   |                zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355128: funcgraph_exit:         1.533 us   |              }
      z_wr_iss/1-31854 [003] 162723.355129: funcgraph_exit:         2.111 us   |            }
      z_wr_iss/1-31854 [003] 162723.355129: funcgraph_entry:                   |            zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355129: funcgraph_entry:        0.287 us   |              spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355130: funcgraph_entry:        0.285 us   |              spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355131: funcgraph_entry:                   |              zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355131: funcgraph_entry:        0.326 us   |                zio_buf_alloc();
      z_wr_iss/1-31854 [003] 162723.355132: funcgraph_entry:        0.407 us   |                zio_push_transform();
      z_wr_iss/1-31854 [003] 162723.355133: funcgraph_entry:        0.246 us   |                spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355133: funcgraph_entry:                   |                vdev_tier_io_start() {
      z_wr_iss/1-31854 [003] 162723.355134: funcgraph_entry:                   |                  vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [003] 162723.355134: funcgraph_entry:        0.259 us   |                    vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355135: funcgraph_entry:        0.259 us   |                    vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355136: funcgraph_exit:         1.616 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355137: funcgraph_entry:                   |                  zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355137: funcgraph_entry:                   |                    zio_create() {
      z_wr_iss/1-31854 [003] 162723.355137: funcgraph_entry:        0.527 us   |                      zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355138: funcgraph_exit:         1.307 us   |                    }
      z_wr_iss/1-31854 [003] 162723.355138: funcgraph_exit:         1.834 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355139: funcgraph_entry:                   |                  zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355139: funcgraph_entry:        0.271 us   |                    spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355140: funcgraph_entry:        0.267 us   |                    spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355140: funcgraph_entry:                   |                    zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355141: funcgraph_entry:        0.268 us   |                      spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355141: funcgraph_entry:                   |                      vdev_queue_io() {
      z_wr_iss/1-31854 [003] 162723.355142: funcgraph_entry:        0.540 us   |                        vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [003] 162723.355142: funcgraph_exit:         1.335 us   |                      }
      z_wr_iss/1-31854 [003] 162723.355143: funcgraph_exit:         2.492 us   |                    }
      z_wr_iss/1-31854 [003] 162723.355143: funcgraph_exit:         4.361 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355144: funcgraph_exit:       + 10.615 us  |                }
      z_wr_iss/1-31854 [003] 162723.355144: funcgraph_exit:       + 13.517 us  |              }
      z_wr_iss/1-31854 [003] 162723.355144: funcgraph_entry:        0.310 us   |              spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355145: funcgraph_entry:        0.240 us   |              spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355146: funcgraph_entry:                   |              zio_vdev_io_done() {
      z_wr_iss/1-31854 [003] 162723.355146: funcgraph_entry:        0.299 us   |                zio_wait_for_children();
      z_wr_iss/1-31854 [003] 162723.355146: funcgraph_exit:         0.841 us   |              }
      z_wr_iss/1-31854 [003] 162723.355147: funcgraph_exit:       + 17.473 us  |            }
      z_wr_iss/1-31854 [003] 162723.355147: funcgraph_entry:                   |            zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355147: funcgraph_entry:                   |              zio_create() {
      z_wr_iss/1-31854 [003] 162723.355148: funcgraph_entry:        0.469 us   |                zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355148: funcgraph_exit:         1.219 us   |              }
      z_wr_iss/1-31854 [003] 162723.355149: funcgraph_exit:         1.811 us   |            }
      z_wr_iss/1-31854 [003] 162723.355149: funcgraph_entry:                   |            zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355149: funcgraph_entry:        0.240 us   |              spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355150: funcgraph_entry:        0.255 us   |              spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355150: funcgraph_entry:                   |              zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355150: funcgraph_entry:        0.444 us   |                zio_buf_alloc();
      z_wr_iss/1-31854 [003] 162723.355152: funcgraph_entry:        0.299 us   |                zio_push_transform();
      z_wr_iss/1-31854 [003] 162723.355152: funcgraph_entry:        0.247 us   |                spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355153: funcgraph_entry:                   |                vdev_tier_io_start() {
      z_wr_iss/1-31854 [003] 162723.355153: funcgraph_entry:                   |                  vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [003] 162723.355154: funcgraph_entry:        0.261 us   |                    vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355155: funcgraph_entry:        0.297 us   |                    vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355155: funcgraph_exit:         1.780 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355156: funcgraph_entry:                   |                  zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355157: funcgraph_entry:                   |                    zio_create() {
      z_wr_iss/1-31854 [003] 162723.355157: funcgraph_entry:        0.518 us   |                      zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355158: funcgraph_exit:         1.430 us   |                    }
      z_wr_iss/1-31854 [003] 162723.355158: funcgraph_exit:         2.022 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355159: funcgraph_entry:                   |                  zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355159: funcgraph_entry:        0.264 us   |                    spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355159: funcgraph_entry:        0.239 us   |                    spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355160: funcgraph_entry:                   |                    zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355160: funcgraph_entry:        0.242 us   |                      spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355161: funcgraph_entry:                   |                      vdev_queue_io() {
      z_wr_iss/1-31854 [003] 162723.355161: funcgraph_entry:        0.302 us   |                        vdev_queue_offset_compare();
      z_wr_iss/1-31854 [003] 162723.355162: funcgraph_entry:        0.354 us   |                        vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [003] 162723.355162: funcgraph_exit:         1.662 us   |                      }
      z_wr_iss/1-31854 [003] 162723.355163: funcgraph_exit:         2.799 us   |                    }
      z_wr_iss/1-31854 [003] 162723.355163: funcgraph_exit:         4.310 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355164: funcgraph_exit:       + 10.931 us  |                }
      z_wr_iss/1-31854 [003] 162723.355164: funcgraph_exit:       + 13.710 us  |              }
      z_wr_iss/1-31854 [003] 162723.355164: funcgraph_entry:        0.261 us   |              spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355165: funcgraph_entry:        0.236 us   |              spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355165: funcgraph_entry:                   |              zio_vdev_io_done() {
      z_wr_iss/1-31854 [003] 162723.355165: funcgraph_entry:        0.287 us   |                zio_wait_for_children();
      z_wr_iss/1-31854 [003] 162723.355166: funcgraph_exit:         0.793 us   |              }
      z_wr_iss/1-31854 [003] 162723.355166: funcgraph_exit:       + 17.254 us  |            }
      z_wr_iss/1-31854 [003] 162723.355166: funcgraph_exit:       ! 101.771 us |          }
      z_wr_iss/1-31854 [003] 162723.355167: funcgraph_exit:       ! 105.977 us |        }
      z_wr_iss/1-31854 [003] 162723.355167: funcgraph_entry:        0.478 us   |        spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355168: funcgraph_entry:        0.318 us   |        spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355168: funcgraph_entry:                   |        zio_vdev_io_done() {
      z_wr_iss/1-31854 [003] 162723.355169: funcgraph_entry:        0.285 us   |          zio_wait_for_children();
      z_wr_iss/1-31854 [003] 162723.355169: funcgraph_exit:         0.804 us   |        }
      z_wr_iss/1-31854 [003] 162723.355169: funcgraph_exit:       ! 174.114 us |      }
      z_wr_iss/1-31854 [003] 162723.355170: funcgraph_entry:        0.343 us   |      spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355170: funcgraph_entry:        1.071 us   |      zio_taskq_member();
      z_wr_iss/1-31854 [003] 162723.355172: funcgraph_entry:        0.273 us   |      spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355172: funcgraph_entry:                   |      zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355173: funcgraph_entry:        0.363 us   |        spa_config_enter();
      z_wr_iss/1-31854 [003] 162723.355173: funcgraph_entry:                   |        vdev_mirror_io_start() {
      z_wr_iss/1-31854 [003] 162723.355174: funcgraph_entry:                   |          vdev_mirror_map_alloc() {
      z_wr_iss/1-31854 [003] 162723.355174: funcgraph_entry:        2.580 us   |            spa_get_random();
      z_wr_iss/1-31854 [003] 162723.355177: funcgraph_entry:        0.316 us   |            vdev_lookup_top();
      z_wr_iss/1-31854 [003] 162723.355178: funcgraph_entry:        0.278 us   |            vdev_lookup_top();
      z_wr_iss/1-31854 [003] 162723.355178: funcgraph_entry:        0.282 us   |            vdev_lookup_top();
      z_wr_iss/1-31854 [003] 162723.355179: funcgraph_exit:         5.186 us   |          }
      z_wr_iss/1-31854 [003] 162723.355179: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355179: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/1-31854 [003] 162723.355180: funcgraph_entry:        0.530 us   |              zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355181: funcgraph_exit:         1.441 us   |            }
      z_wr_iss/1-31854 [003] 162723.355181: funcgraph_exit:         1.978 us   |          }
      z_wr_iss/1-31854 [003] 162723.355181: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355182: funcgraph_entry:        0.263 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355182: funcgraph_entry:        0.268 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355183: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355183: funcgraph_entry:        0.278 us   |              zio_buf_alloc();
      z_wr_iss/1-31854 [003] 162723.355184: funcgraph_entry:        0.306 us   |              zio_push_transform();
      z_wr_iss/1-31854 [003] 162723.355185: funcgraph_entry:        0.256 us   |              spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355185: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/1-31854 [003] 162723.355186: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [003] 162723.355186: funcgraph_entry:        0.259 us   |                  vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355187: funcgraph_entry:        0.266 us   |                  vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355188: funcgraph_exit:         1.705 us   |                }
      z_wr_iss/1-31854 [003] 162723.355189: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355189: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/1-31854 [003] 162723.355189: funcgraph_entry:        0.627 us   |                    zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355190: funcgraph_exit:         1.361 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355191: funcgraph_exit:         1.892 us   |                }
      z_wr_iss/1-31854 [003] 162723.355191: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355191: funcgraph_entry:        0.257 us   |                  spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355192: funcgraph_entry:        0.274 us   |                  spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355192: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355192: funcgraph_entry:        0.260 us   |                    spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355193: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/1-31854 [003] 162723.355193: funcgraph_entry:        0.259 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [003] 162723.355194: funcgraph_entry:        0.372 us   |                      vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [003] 162723.355195: funcgraph_exit:         1.612 us   |                    }
      z_wr_iss/1-31854 [003] 162723.355195: funcgraph_exit:         2.710 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355195: funcgraph_exit:         4.235 us   |                }
      z_wr_iss/1-31854 [003] 162723.355196: funcgraph_exit:       + 10.509 us  |              }
      z_wr_iss/1-31854 [003] 162723.355196: funcgraph_exit:       + 13.392 us  |            }
      z_wr_iss/1-31854 [003] 162723.355196: funcgraph_entry:        0.247 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355197: funcgraph_entry:        0.247 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355197: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/1-31854 [003] 162723.355198: funcgraph_entry:        0.285 us   |              zio_wait_for_children();
      z_wr_iss/1-31854 [003] 162723.355198: funcgraph_exit:         0.786 us   |            }
      z_wr_iss/1-31854 [003] 162723.355199: funcgraph_exit:       + 17.228 us  |          }
      z_wr_iss/1-31854 [003] 162723.355199: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355199: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/1-31854 [003] 162723.355200: funcgraph_entry:        0.511 us   |              zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355200: funcgraph_exit:         1.238 us   |            }
      z_wr_iss/1-31854 [003] 162723.355201: funcgraph_exit:         1.761 us   |          }
      z_wr_iss/1-31854 [003] 162723.355201: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355201: funcgraph_entry:        0.254 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355202: funcgraph_entry:        0.267 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355202: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355203: funcgraph_entry:        0.368 us   |              zio_buf_alloc();
      z_wr_iss/1-31854 [003] 162723.355204: funcgraph_entry:        0.393 us   |              zio_push_transform();
      z_wr_iss/1-31854 [003] 162723.355204: funcgraph_entry:        0.252 us   |              spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355205: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/1-31854 [003] 162723.355206: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [003] 162723.355206: funcgraph_entry:        0.266 us   |                  vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355207: funcgraph_entry:        0.298 us   |                  vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355208: funcgraph_exit:         1.868 us   |                }
      z_wr_iss/1-31854 [003] 162723.355208: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355209: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/1-31854 [003] 162723.355209: funcgraph_entry:        0.465 us   |                    zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355210: funcgraph_exit:         1.295 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355210: funcgraph_exit:         1.827 us   |                }
      z_wr_iss/1-31854 [003] 162723.355211: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355211: funcgraph_entry:        0.249 us   |                  spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355211: funcgraph_entry:        0.266 us   |                  spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355212: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355212: funcgraph_entry:        0.262 us   |                    spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355213: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/1-31854 [003] 162723.355213: funcgraph_entry:        0.282 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [003] 162723.355214: funcgraph_entry:        0.264 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [003] 162723.355215: funcgraph_entry:        0.481 us   |                      vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [003] 162723.355215: funcgraph_exit:         2.626 us   |                    }
      z_wr_iss/1-31854 [003] 162723.355216: funcgraph_exit:         3.713 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355216: funcgraph_exit:         5.274 us   |                }
      z_wr_iss/1-31854 [003] 162723.355216: funcgraph_exit:       + 11.511 us  |              }
      z_wr_iss/1-31854 [003] 162723.355217: funcgraph_exit:       + 14.409 us  |            }
      z_wr_iss/1-31854 [003] 162723.355217: funcgraph_entry:        0.261 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355218: funcgraph_entry:        0.251 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355218: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/1-31854 [003] 162723.355218: funcgraph_entry:        0.361 us   |              zio_wait_for_children();
      z_wr_iss/1-31854 [003] 162723.355219: funcgraph_exit:         0.904 us   |            }
      z_wr_iss/1-31854 [003] 162723.355219: funcgraph_exit:       + 18.235 us  |          }
      z_wr_iss/1-31854 [003] 162723.355219: funcgraph_entry:                   |          zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355220: funcgraph_entry:                   |            zio_create() {
      z_wr_iss/1-31854 [003] 162723.355220: funcgraph_entry:        0.503 us   |              zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355221: funcgraph_exit:         1.314 us   |            }
      z_wr_iss/1-31854 [003] 162723.355221: funcgraph_exit:         1.886 us   |          }
      z_wr_iss/1-31854 [003] 162723.355222: funcgraph_entry:                   |          zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355222: funcgraph_entry:        0.261 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355222: funcgraph_entry:        0.262 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355223: funcgraph_entry:                   |            zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355223: funcgraph_entry:        0.318 us   |              zio_buf_alloc();
      z_wr_iss/1-31854 [003] 162723.355224: funcgraph_entry:        0.333 us   |              zio_push_transform();
      z_wr_iss/1-31854 [003] 162723.355225: funcgraph_entry:        0.252 us   |              spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355225: funcgraph_entry:                   |              vdev_tier_io_start() {
      z_wr_iss/1-31854 [003] 162723.355226: funcgraph_entry:                   |                vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [003] 162723.355227: funcgraph_entry:        0.286 us   |                  vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355227: funcgraph_entry:        0.274 us   |                  vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355228: funcgraph_exit:         1.875 us   |                }
      z_wr_iss/1-31854 [003] 162723.355229: funcgraph_entry:                   |                zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355229: funcgraph_entry:                   |                  zio_create() {
      z_wr_iss/1-31854 [003] 162723.355230: funcgraph_entry:        0.558 us   |                    zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355231: funcgraph_exit:         1.398 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355231: funcgraph_exit:         2.039 us   |                }
      z_wr_iss/1-31854 [003] 162723.355231: funcgraph_entry:                   |                zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355232: funcgraph_entry:        0.303 us   |                  spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355232: funcgraph_entry:        0.321 us   |                  spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355233: funcgraph_entry:                   |                  zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355233: funcgraph_entry:        0.278 us   |                    spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355234: funcgraph_entry:                   |                    vdev_queue_io() {
      z_wr_iss/1-31854 [003] 162723.355234: funcgraph_entry:        0.299 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [003] 162723.355235: funcgraph_entry:        0.329 us   |                      vdev_queue_offset_compare();
      z_wr_iss/1-31854 [003] 162723.355236: funcgraph_entry:        0.421 us   |                      vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [003] 162723.355236: funcgraph_exit:         2.567 us   |                    }
      z_wr_iss/1-31854 [003] 162723.355237: funcgraph_exit:         3.833 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355237: funcgraph_exit:         5.622 us   |                }
      z_wr_iss/1-31854 [003] 162723.355238: funcgraph_exit:       + 12.180 us  |              }
      z_wr_iss/1-31854 [003] 162723.355238: funcgraph_exit:       + 14.984 us  |            }
      z_wr_iss/1-31854 [003] 162723.355238: funcgraph_entry:        0.301 us   |            spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355239: funcgraph_entry:        0.346 us   |            spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355239: funcgraph_entry:                   |            zio_vdev_io_done() {
      z_wr_iss/1-31854 [003] 162723.355240: funcgraph_entry:        0.305 us   |              zio_wait_for_children();
      z_wr_iss/1-31854 [003] 162723.355240: funcgraph_exit:         0.869 us   |            }
      z_wr_iss/1-31854 [003] 162723.355241: funcgraph_exit:       + 18.989 us  |          }
      z_wr_iss/1-31854 [003] 162723.355241: funcgraph_exit:       + 67.616 us  |        }
      z_wr_iss/1-31854 [003] 162723.355241: funcgraph_exit:       + 68.834 us  |      }
      z_wr_iss/1-31854 [003] 162723.355242: funcgraph_entry:        0.308 us   |      spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355242: funcgraph_entry:        0.406 us   |      spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355243: funcgraph_entry:                   |      zio_vdev_io_done() {
      z_wr_iss/1-31854 [003] 162723.355243: funcgraph_entry:        0.327 us   |        zio_wait_for_children();
      z_wr_iss/1-31854 [003] 162723.355244: funcgraph_exit:         0.968 us   |      }
      z_wr_iss/1-31854 [003] 162723.355244: funcgraph_exit:       ! 358.078 us |    }
      z_wr_iss/1-31854 [003] 162723.355244: funcgraph_entry:        0.285 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355245: funcgraph_entry:        0.862 us   |    zio_taskq_member();
      z_wr_iss/1-31854 [003] 162723.355246: funcgraph_entry:        0.321 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355247: funcgraph_entry:                   |    zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355247: funcgraph_entry:        0.382 us   |      spa_config_enter();
      z_wr_iss/1-31854 [003] 162723.355248: funcgraph_entry:                   |      vdev_mirror_io_start() {
      z_wr_iss/1-31854 [003] 162723.355248: funcgraph_entry:                   |        vdev_mirror_map_alloc() {
      z_wr_iss/1-31854 [003] 162723.355249: funcgraph_entry:        2.195 us   |          spa_get_random();
      z_wr_iss/1-31854 [003] 162723.355251: funcgraph_entry:        0.443 us   |          vdev_lookup_top();
      z_wr_iss/1-31854 [003] 162723.355252: funcgraph_entry:        0.332 us   |          vdev_lookup_top();
      z_wr_iss/1-31854 [003] 162723.355253: funcgraph_entry:        0.353 us   |          vdev_lookup_top();
      z_wr_iss/1-31854 [003] 162723.355253: funcgraph_exit:         5.228 us   |        }
      z_wr_iss/1-31854 [003] 162723.355254: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355254: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [003] 162723.355255: funcgraph_entry:        0.664 us   |            zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355256: funcgraph_exit:         1.604 us   |          }
      z_wr_iss/1-31854 [003] 162723.355256: funcgraph_exit:         2.248 us   |        }
      z_wr_iss/1-31854 [003] 162723.355256: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355257: funcgraph_entry:        0.297 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355257: funcgraph_entry:        0.282 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355258: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355258: funcgraph_entry:        0.373 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [003] 162723.355259: funcgraph_entry:        0.417 us   |            zio_push_transform();
      z_wr_iss/1-31854 [003] 162723.355260: funcgraph_entry:        0.663 us   |            spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355261: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [003] 162723.355262: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [003] 162723.355262: funcgraph_entry:        0.376 us   |                vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355263: funcgraph_entry:        0.315 us   |                vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355264: funcgraph_exit:         1.978 us   |              }
      z_wr_iss/1-31854 [003] 162723.355265: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355265: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [003] 162723.355266: funcgraph_entry:        0.551 us   |                  zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355267: funcgraph_exit:         1.502 us   |                }
      z_wr_iss/1-31854 [003] 162723.355267: funcgraph_exit:         2.197 us   |              }
      z_wr_iss/1-31854 [003] 162723.355267: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355276: funcgraph_entry:        0.389 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355276: funcgraph_entry:        0.302 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355277: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355277: funcgraph_entry:        0.333 us   |                  spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355278: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [003] 162723.355284: funcgraph_entry:        0.369 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [003] 162723.355285: funcgraph_entry:        0.492 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [003] 162723.355286: funcgraph_entry:        0.488 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [003] 162723.355287: funcgraph_exit:         5.497 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355287: funcgraph_exit:         6.943 us   |                }
      z_wr_iss/1-31854 [003] 162723.355287: funcgraph_exit:       + 16.963 us  |              }
      z_wr_iss/1-31854 [003] 162723.355288: funcgraph_exit:       + 24.158 us  |            }
      z_wr_iss/1-31854 [003] 162723.355289: funcgraph_exit:       + 27.776 us  |          }
      z_wr_iss/1-31854 [003] 162723.355289: funcgraph_entry:        0.322 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355290: funcgraph_entry:        0.292 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355290: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [003] 162723.355290: funcgraph_entry:        0.342 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [003] 162723.355291: funcgraph_exit:         0.939 us   |          }
      z_wr_iss/1-31854 [003] 162723.355291: funcgraph_exit:       + 32.076 us  |        }
      z_wr_iss/1-31854 [003] 162723.355292: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355292: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [003] 162723.355293: funcgraph_entry:        0.553 us   |            zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355294: funcgraph_exit:         1.491 us   |          }
      z_wr_iss/1-31854 [003] 162723.355294: funcgraph_exit:         2.229 us   |        }
      z_wr_iss/1-31854 [003] 162723.355294: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355295: funcgraph_entry:        0.302 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355295: funcgraph_entry:        0.327 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355296: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355296: funcgraph_entry:        0.337 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [003] 162723.355297: funcgraph_entry:        0.511 us   |            zio_push_transform();
      z_wr_iss/1-31854 [003] 162723.355298: funcgraph_entry:        0.358 us   |            spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355299: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [003] 162723.355300: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [003] 162723.355300: funcgraph_entry:        0.358 us   |                vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355301: funcgraph_entry:        0.353 us   |                vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355302: funcgraph_exit:         2.032 us   |              }
      z_wr_iss/1-31854 [003] 162723.355303: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355303: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [003] 162723.355304: funcgraph_entry:        0.582 us   |                  zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355305: funcgraph_exit:         1.580 us   |                }
      z_wr_iss/1-31854 [003] 162723.355305: funcgraph_exit:         2.201 us   |              }
      z_wr_iss/1-31854 [003] 162723.355305: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355306: funcgraph_entry:        0.303 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355306: funcgraph_entry:        0.294 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355307: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355307: funcgraph_entry:        0.308 us   |                  spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355308: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [003] 162723.355308: funcgraph_entry:        0.315 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [003] 162723.355309: funcgraph_entry:        0.489 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [003] 162723.355310: funcgraph_entry:        0.374 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [003] 162723.355310: funcgraph_entry:        0.389 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [003] 162723.355311: funcgraph_exit:         3.557 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355312: funcgraph_exit:         4.820 us   |                }
      z_wr_iss/1-31854 [003] 162723.355312: funcgraph_exit:         6.643 us   |              }
      z_wr_iss/1-31854 [003] 162723.355313: funcgraph_exit:       + 13.834 us  |            }
      z_wr_iss/1-31854 [003] 162723.355313: funcgraph_exit:       + 17.237 us  |          }
      z_wr_iss/1-31854 [003] 162723.355313: funcgraph_entry:        0.301 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355314: funcgraph_entry:        0.304 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355315: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [003] 162723.355315: funcgraph_entry:        0.320 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [003] 162723.355316: funcgraph_exit:         0.909 us   |          }
      z_wr_iss/1-31854 [003] 162723.355316: funcgraph_exit:       + 21.563 us  |        }
      z_wr_iss/1-31854 [003] 162723.355316: funcgraph_entry:                   |        zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355316: funcgraph_entry:                   |          zio_create() {
      z_wr_iss/1-31854 [003] 162723.355317: funcgraph_entry:        0.562 us   |            zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355318: funcgraph_exit:         1.544 us   |          }
      z_wr_iss/1-31854 [003] 162723.355318: funcgraph_exit:         2.209 us   |        }
      z_wr_iss/1-31854 [003] 162723.355319: funcgraph_entry:                   |        zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355319: funcgraph_entry:        0.318 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355320: funcgraph_entry:        0.299 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355320: funcgraph_entry:                   |          zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355320: funcgraph_entry:        0.454 us   |            zio_buf_alloc();
      z_wr_iss/1-31854 [003] 162723.355322: funcgraph_entry:        0.413 us   |            zio_push_transform();
      z_wr_iss/1-31854 [003] 162723.355322: funcgraph_entry:        0.306 us   |            spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355323: funcgraph_entry:                   |            vdev_tier_io_start() {
      z_wr_iss/1-31854 [003] 162723.355324: funcgraph_entry:                   |              vdev_tier_map_alloc() {
      z_wr_iss/1-31854 [003] 162723.355324: funcgraph_entry:        0.325 us   |                vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355325: funcgraph_entry:        0.325 us   |                vdev_readable();
      z_wr_iss/1-31854 [003] 162723.355326: funcgraph_exit:         1.905 us   |              }
      z_wr_iss/1-31854 [003] 162723.355327: funcgraph_entry:                   |              zio_vdev_child_io() {
      z_wr_iss/1-31854 [003] 162723.355327: funcgraph_entry:                   |                zio_create() {
      z_wr_iss/1-31854 [003] 162723.355328: funcgraph_entry:        0.530 us   |                  zio_add_child();
      z_wr_iss/1-31854 [003] 162723.355328: funcgraph_exit:         1.391 us   |                }
      z_wr_iss/1-31854 [003] 162723.355329: funcgraph_exit:         2.039 us   |              }
      z_wr_iss/1-31854 [003] 162723.355329: funcgraph_entry:                   |              zio_nowait() {
      z_wr_iss/1-31854 [003] 162723.355329: funcgraph_entry:        0.339 us   |                spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355330: funcgraph_entry:        0.306 us   |                spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355331: funcgraph_entry:                   |                zio_vdev_io_start() {
      z_wr_iss/1-31854 [003] 162723.355331: funcgraph_entry:        0.285 us   |                  spa_writeable();
      z_wr_iss/1-31854 [003] 162723.355332: funcgraph_entry:                   |                  vdev_queue_io() {
      z_wr_iss/1-31854 [003] 162723.355332: funcgraph_entry:        0.314 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [003] 162723.355333: funcgraph_entry:        0.333 us   |                    vdev_queue_offset_compare();
      z_wr_iss/1-31854 [003] 162723.355333: funcgraph_entry:        0.415 us   |                    vdev_queue_io_to_issue();
      z_wr_iss/1-31854 [003] 162723.355334: funcgraph_exit:         2.529 us   |                  }
      z_wr_iss/1-31854 [003] 162723.355334: funcgraph_exit:         3.788 us   |                }
      z_wr_iss/1-31854 [003] 162723.355335: funcgraph_exit:         5.657 us   |              }
      z_wr_iss/1-31854 [003] 162723.355336: funcgraph_exit:       + 12.535 us  |            }
      z_wr_iss/1-31854 [003] 162723.355336: funcgraph_exit:       + 15.709 us  |          }
      z_wr_iss/1-31854 [003] 162723.355336: funcgraph_entry:        0.311 us   |          spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355337: funcgraph_entry:        0.315 us   |          spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355337: funcgraph_entry:                   |          zio_vdev_io_done() {
      z_wr_iss/1-31854 [003] 162723.355338: funcgraph_entry:        0.332 us   |            zio_wait_for_children();
      z_wr_iss/1-31854 [003] 162723.355338: funcgraph_exit:         0.954 us   |          }
      z_wr_iss/1-31854 [003] 162723.355339: funcgraph_exit:       + 19.982 us  |        }
      z_wr_iss/1-31854 [003] 162723.355339: funcgraph_exit:       + 87.929 us  |      }
      z_wr_iss/1-31854 [003] 162723.355339: funcgraph_exit:       + 89.201 us  |    }
      z_wr_iss/1-31854 [003] 162723.355339: funcgraph_entry:        0.287 us   |    spa_get_dsl();
      z_wr_iss/1-31854 [003] 162723.355340: funcgraph_entry:        0.261 us   |    spa_is_initializing();
      z_wr_iss/1-31854 [003] 162723.355341: funcgraph_entry:                   |    zio_vdev_io_done() {
      z_wr_iss/1-31854 [003] 162723.355341: funcgraph_entry:        0.291 us   |      zio_wait_for_children();
      z_wr_iss/1-31854 [003] 162723.355342: funcgraph_exit:         0.793 us   |    }
      z_wr_iss/1-31854 [003] 162723.355342: funcgraph_exit:       ! 503.165 us |  }
