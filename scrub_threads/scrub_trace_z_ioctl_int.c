   z_ioctl_int/0-31925 [010] 162723.365232: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-31925 [010] 162723.365233: funcgraph_entry:        0.283 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.365234: funcgraph_entry:        0.260 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.365235: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-31925 [010] 162723.365235: funcgraph_entry:        0.323 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.365236: funcgraph_exit:         1.002 us   |    }
   z_ioctl_int/0-31925 [010] 162723.365236: funcgraph_entry:        0.273 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.365236: funcgraph_entry:        0.252 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.365237: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-31925 [010] 162723.365237: funcgraph_entry:        0.239 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.365238: funcgraph_entry:        0.239 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.365239: funcgraph_entry:        0.333 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.365239: funcgraph_entry:        0.297 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.365240: funcgraph_entry:        0.238 us   |      zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.365240: funcgraph_entry:        0.346 us   |      vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.365241: funcgraph_entry:        0.212 us   |      zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.365241: funcgraph_entry:        0.318 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.365242: funcgraph_entry:        0.245 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.365243: funcgraph_entry:        0.739 us   |      zio_remove_child();
   z_ioctl_int/0-31925 [010] 162723.365244: funcgraph_exit:         6.707 us   |    }
   z_ioctl_int/0-31925 [010] 162723.365244: funcgraph_exit:       + 12.114 us  |  }
   z_ioctl_int/0-31925 [010] 162723.368266: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-31925 [010] 162723.368266: funcgraph_entry:        0.299 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.368267: funcgraph_entry:        0.276 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.368267: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-31925 [010] 162723.368268: funcgraph_entry:        0.308 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.368268: funcgraph_exit:         0.937 us   |    }
   z_ioctl_int/0-31925 [010] 162723.368268: funcgraph_entry:        0.263 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.368269: funcgraph_entry:        0.301 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.368270: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-31925 [010] 162723.368270: funcgraph_entry:        0.238 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.368270: funcgraph_entry:        0.240 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.368271: funcgraph_entry:        0.237 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.368271: funcgraph_entry:        0.240 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.368272: funcgraph_entry:        0.218 us   |      zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.368272: funcgraph_entry:        0.304 us   |      vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.368273: funcgraph_entry:        0.216 us   |      zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.368273: funcgraph_entry:        0.266 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.368274: funcgraph_entry:        0.238 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.368274: funcgraph_entry:        0.442 us   |      zio_remove_child();
   z_ioctl_int/0-31925 [010] 162723.368275: funcgraph_entry:        0.229 us   |      spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.368275: funcgraph_entry:        0.234 us   |      spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.368276: funcgraph_entry:                   |      zio_done() {
   z_ioctl_int/0-31925 [010] 162723.368276: funcgraph_entry:        0.269 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.368277: funcgraph_entry:        0.233 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.368277: funcgraph_entry:        0.236 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.368278: funcgraph_entry:        0.237 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.368278: funcgraph_entry:        0.213 us   |        zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.368279: funcgraph_entry:        0.254 us   |        vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.368279: funcgraph_entry:        0.217 us   |        zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.368280: funcgraph_entry:        0.233 us   |        zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.368280: funcgraph_entry:        0.250 us   |        zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.368280: funcgraph_entry:        0.548 us   |        zio_remove_child();
   z_ioctl_int/0-31925 [010] 162723.368282: funcgraph_entry:        0.252 us   |        spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.368282: funcgraph_entry:        0.256 us   |        spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.368283: funcgraph_entry:                   |        zio_done() {
   z_ioctl_int/0-31925 [010] 162723.368283: funcgraph_entry:        0.243 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.368283: funcgraph_entry:        0.231 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.368284: funcgraph_entry:        0.241 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.368284: funcgraph_entry:        0.229 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.368285: funcgraph_entry:        0.214 us   |          zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.368285: funcgraph_entry:        0.229 us   |          vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.368286: funcgraph_entry:        0.217 us   |          zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.368286: funcgraph_entry:        0.243 us   |          zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.368288: funcgraph_exit:         5.385 us   |        }
   z_ioctl_int/0-31925 [010] 162723.368288: funcgraph_exit:       + 12.352 us  |      }
   z_ioctl_int/0-31925 [010] 162723.368289: funcgraph_exit:       + 19.179 us  |    }
   z_ioctl_int/0-31925 [010] 162723.368289: funcgraph_exit:       + 23.276 us  |  }
   z_ioctl_int/0-31925 [010] 162723.381141: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-31925 [010] 162723.381142: funcgraph_entry:        0.270 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.381142: funcgraph_entry:        0.250 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.381143: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-31925 [010] 162723.381143: funcgraph_entry:        0.387 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.381144: funcgraph_exit:         1.116 us   |    }
   z_ioctl_int/0-31925 [010] 162723.381144: funcgraph_entry:        0.238 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.381145: funcgraph_entry:        0.248 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.381146: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-31925 [010] 162723.381146: funcgraph_entry:        0.283 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.381147: funcgraph_entry:        0.249 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.381147: funcgraph_entry:        0.252 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.381148: funcgraph_entry:        0.250 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.381148: funcgraph_entry:        0.241 us   |      zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.381149: funcgraph_entry:        0.342 us   |      vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.381149: funcgraph_entry:        0.253 us   |      zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.381150: funcgraph_entry:        0.322 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.381150: funcgraph_entry:        0.248 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.381151: funcgraph_entry:        0.683 us   |      zio_remove_child();
   z_ioctl_int/0-31925 [010] 162723.381152: funcgraph_exit:         6.598 us   |    }
   z_ioctl_int/0-31925 [010] 162723.381152: funcgraph_exit:       + 11.987 us  |  }
   z_ioctl_int/0-31925 [010] 162723.410371: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-31925 [010] 162723.410372: funcgraph_entry:        0.273 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.410373: funcgraph_entry:        0.264 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.410373: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-31925 [010] 162723.410374: funcgraph_entry:        0.422 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.410375: funcgraph_exit:         1.255 us   |    }
   z_ioctl_int/0-31925 [010] 162723.410375: funcgraph_entry:        0.245 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.410375: funcgraph_entry:        0.248 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.410376: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-31925 [010] 162723.410376: funcgraph_entry:        0.244 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.410377: funcgraph_entry:        0.242 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.410377: funcgraph_entry:        0.318 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.410378: funcgraph_entry:        0.240 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.410378: funcgraph_entry:        0.287 us   |      zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.410379: funcgraph_entry:        0.417 us   |      vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.410380: funcgraph_entry:        0.228 us   |      zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.410380: funcgraph_entry:        0.292 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.410381: funcgraph_entry:        0.287 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.410381: funcgraph_entry:        0.632 us   |      zio_remove_child();
   z_ioctl_int/0-31925 [010] 162723.410382: funcgraph_entry:        0.231 us   |      spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.410383: funcgraph_entry:        0.252 us   |      spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.410383: funcgraph_entry:                   |      zio_done() {
   z_ioctl_int/0-31925 [010] 162723.410384: funcgraph_entry:        0.245 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.410384: funcgraph_entry:        0.231 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.410385: funcgraph_entry:        0.254 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.410385: funcgraph_entry:        0.233 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.410386: funcgraph_entry:        0.225 us   |        zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.410386: funcgraph_entry:        0.252 us   |        vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.410387: funcgraph_entry:        0.221 us   |        zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.410387: funcgraph_entry:        0.275 us   |        zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.410388: funcgraph_entry:        0.257 us   |        zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.410388: funcgraph_entry:        0.671 us   |        zio_remove_child();
   z_ioctl_int/0-31925 [010] 162723.410389: funcgraph_entry:        0.238 us   |        spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.410390: funcgraph_entry:        0.278 us   |        spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.410390: funcgraph_entry:                   |        zio_done() {
   z_ioctl_int/0-31925 [010] 162723.410391: funcgraph_entry:        0.264 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.410391: funcgraph_entry:        0.230 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.410392: funcgraph_entry:        0.229 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.410392: funcgraph_entry:        0.229 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.410393: funcgraph_entry:        0.217 us   |          zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.410393: funcgraph_entry:        0.234 us   |          vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.410393: funcgraph_entry:        0.218 us   |          zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.410394: funcgraph_entry:        0.264 us   |          zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.410396: funcgraph_exit:         5.438 us   |        }
   z_ioctl_int/0-31925 [010] 162723.410396: funcgraph_exit:       + 12.917 us  |      }
   z_ioctl_int/0-31925 [010] 162723.410397: funcgraph_exit:       + 20.576 us  |    }
   z_ioctl_int/0-31925 [010] 162723.410397: funcgraph_exit:       + 25.701 us  |  }
   z_ioctl_int/0-31925 [010] 162723.413663: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-31925 [010] 162723.413664: funcgraph_entry:        0.289 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.413664: funcgraph_entry:        0.251 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.413665: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-31925 [010] 162723.413665: funcgraph_entry:        0.390 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.413666: funcgraph_exit:         1.215 us   |    }
   z_ioctl_int/0-31925 [010] 162723.413666: funcgraph_entry:        0.240 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.413667: funcgraph_entry:        0.262 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.413668: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-31925 [010] 162723.413668: funcgraph_entry:        0.252 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.413668: funcgraph_entry:        0.245 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.413669: funcgraph_entry:        0.285 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.413669: funcgraph_entry:        0.256 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.413670: funcgraph_entry:        0.289 us   |      zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.413671: funcgraph_entry:        0.354 us   |      vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.413671: funcgraph_entry:        0.237 us   |      zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.413672: funcgraph_entry:        0.307 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.413672: funcgraph_entry:        0.236 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.413673: funcgraph_entry:        0.694 us   |      zio_remove_child();
   z_ioctl_int/0-31925 [010] 162723.413674: funcgraph_exit:         6.334 us   |    }
   z_ioctl_int/0-31925 [010] 162723.413674: funcgraph_exit:       + 12.029 us  |  }
   z_ioctl_int/0-31925 [010] 162723.454519: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-31925 [010] 162723.454520: funcgraph_entry:        0.261 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.454520: funcgraph_entry:        0.276 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.454521: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-31925 [010] 162723.454521: funcgraph_entry:        0.380 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.454522: funcgraph_exit:         1.205 us   |    }
   z_ioctl_int/0-31925 [010] 162723.454523: funcgraph_entry:        0.252 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.454523: funcgraph_entry:        0.259 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.454524: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-31925 [010] 162723.454524: funcgraph_entry:        0.242 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.454524: funcgraph_entry:        0.262 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.454525: funcgraph_entry:        0.231 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.454525: funcgraph_entry:        0.235 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.454526: funcgraph_entry:        0.236 us   |      zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.454526: funcgraph_entry:        0.407 us   |      vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.454527: funcgraph_entry:        0.224 us   |      zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.454528: funcgraph_entry:        0.285 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.454528: funcgraph_entry:        0.234 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.454529: funcgraph_entry:        0.546 us   |      zio_remove_child();
   z_ioctl_int/0-31925 [010] 162723.454529: funcgraph_entry:        0.234 us   |      spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.454530: funcgraph_entry:        0.250 us   |      spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.454531: funcgraph_entry:                   |      zio_done() {
   z_ioctl_int/0-31925 [010] 162723.454531: funcgraph_entry:        0.249 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.454531: funcgraph_entry:        0.237 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.454532: funcgraph_entry:        0.231 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.454532: funcgraph_entry:        0.235 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.454533: funcgraph_entry:        0.227 us   |        zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.454533: funcgraph_entry:        0.256 us   |        vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.454534: funcgraph_entry:        0.219 us   |        zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.454534: funcgraph_entry:        0.284 us   |        zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.454535: funcgraph_entry:        0.260 us   |        zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.454535: funcgraph_entry:        0.697 us   |        zio_remove_child();
   z_ioctl_int/0-31925 [010] 162723.454536: funcgraph_entry:        0.234 us   |        spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.454537: funcgraph_entry:        0.294 us   |        spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.454537: funcgraph_entry:                   |        zio_done() {
   z_ioctl_int/0-31925 [010] 162723.454537: funcgraph_entry:        0.243 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.454538: funcgraph_entry:        0.231 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.454538: funcgraph_entry:        0.231 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.454539: funcgraph_entry:        0.232 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.454539: funcgraph_entry:        0.216 us   |          zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.454540: funcgraph_entry:        0.231 us   |          vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.454540: funcgraph_entry:        0.215 us   |          zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.454541: funcgraph_entry:        0.269 us   |          zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.454543: funcgraph_exit:         5.529 us   |        }
   z_ioctl_int/0-31925 [010] 162723.454543: funcgraph_exit:       + 12.695 us  |      }
   z_ioctl_int/0-31925 [010] 162723.454544: funcgraph_exit:       + 19.966 us  |    }
   z_ioctl_int/0-31925 [010] 162723.454544: funcgraph_exit:       + 24.883 us  |  }
   z_ioctl_int/0-31925 [000] 162723.467224: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-31925 [000] 162723.467225: funcgraph_entry:        0.284 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [000] 162723.467225: funcgraph_entry:        0.269 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [000] 162723.467226: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-31925 [000] 162723.467226: funcgraph_entry:        0.365 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [000] 162723.467227: funcgraph_exit:         1.204 us   |    }
   z_ioctl_int/0-31925 [000] 162723.467227: funcgraph_entry:        0.339 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [000] 162723.467228: funcgraph_entry:        0.299 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [000] 162723.467229: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-31925 [000] 162723.467229: funcgraph_entry:        0.292 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [000] 162723.467230: funcgraph_entry:        0.296 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [000] 162723.467230: funcgraph_entry:        0.302 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [000] 162723.467231: funcgraph_entry:        0.294 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [000] 162723.467231: funcgraph_entry:        0.256 us   |      zio_pop_transforms();
   z_ioctl_int/0-31925 [000] 162723.467232: funcgraph_entry:        0.365 us   |      vdev_stat_update();
   z_ioctl_int/0-31925 [000] 162723.467233: funcgraph_entry:        0.254 us   |      zio_gang_tree_free();
   z_ioctl_int/0-31925 [000] 162723.467233: funcgraph_entry:        0.314 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [000] 162723.467234: funcgraph_entry:        0.294 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [000] 162723.467234: funcgraph_entry:        0.944 us   |      zio_remove_child();
   z_ioctl_int/0-31925 [000] 162723.467236: funcgraph_exit:         7.211 us   |    }
   z_ioctl_int/0-31925 [000] 162723.467236: funcgraph_exit:       + 11.881 us  |  }
   z_ioctl_int/0-31925 [010] 162723.503540: funcgraph_entry:                   |  zio_execute() {
   z_ioctl_int/0-31925 [010] 162723.503541: funcgraph_entry:        0.456 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.503541: funcgraph_entry:        0.430 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.503543: funcgraph_entry:                   |    zio_vdev_io_assess() {
   z_ioctl_int/0-31925 [010] 162723.503543: funcgraph_entry:        0.606 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.503544: funcgraph_exit:         1.799 us   |    }
   z_ioctl_int/0-31925 [010] 162723.503545: funcgraph_entry:        0.472 us   |    spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.503546: funcgraph_entry:        0.433 us   |    spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.503547: funcgraph_entry:                   |    zio_done() {
   z_ioctl_int/0-31925 [010] 162723.503547: funcgraph_entry:        0.456 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.503548: funcgraph_entry:        0.434 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.503549: funcgraph_entry:        0.483 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.503550: funcgraph_entry:        0.440 us   |      zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.503551: funcgraph_entry:        0.416 us   |      zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.503552: funcgraph_entry:        0.594 us   |      vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.503553: funcgraph_entry:        0.409 us   |      zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.503554: funcgraph_entry:        0.520 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.503555: funcgraph_entry:        1.006 us   |      zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.503556: funcgraph_entry:        0.953 us   |      zio_remove_child();
   z_ioctl_int/0-31925 [010] 162723.503558: funcgraph_entry:        0.440 us   |      spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.503559: funcgraph_entry:        0.493 us   |      spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.503560: funcgraph_entry:                   |      zio_done() {
   z_ioctl_int/0-31925 [010] 162723.503560: funcgraph_entry:        0.553 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.503561: funcgraph_entry:        0.453 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.503562: funcgraph_entry:        0.447 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.503563: funcgraph_entry:        0.446 us   |        zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.503564: funcgraph_entry:        0.433 us   |        zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.503565: funcgraph_entry:        0.476 us   |        vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.503566: funcgraph_entry:        0.423 us   |        zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.503567: funcgraph_entry:        0.440 us   |        zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.503568: funcgraph_entry:        0.456 us   |        zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.503568: funcgraph_entry:        1.060 us   |        zio_remove_child();
   z_ioctl_int/0-31925 [010] 162723.503570: funcgraph_entry:        0.446 us   |        spa_get_dsl();
   z_ioctl_int/0-31925 [010] 162723.503571: funcgraph_entry:        0.504 us   |        spa_is_initializing();
   z_ioctl_int/0-31925 [010] 162723.503572: funcgraph_entry:                   |        zio_done() {
   z_ioctl_int/0-31925 [010] 162723.503572: funcgraph_entry:        0.460 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.503573: funcgraph_entry:        0.440 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.503574: funcgraph_entry:        0.436 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.503575: funcgraph_entry:        0.440 us   |          zio_wait_for_children();
   z_ioctl_int/0-31925 [010] 162723.503576: funcgraph_entry:        0.424 us   |          zio_pop_transforms();
   z_ioctl_int/0-31925 [010] 162723.503577: funcgraph_entry:        0.430 us   |          vdev_stat_update();
   z_ioctl_int/0-31925 [010] 162723.503578: funcgraph_entry:        0.413 us   |          zio_gang_tree_free();
   z_ioctl_int/0-31925 [010] 162723.503579: funcgraph_entry:        0.500 us   |          zio_walk_parents();
   z_ioctl_int/0-31925 [010] 162723.503582: funcgraph_exit:         9.680 us   |        }
   z_ioctl_int/0-31925 [010] 162723.503583: funcgraph_exit:       + 22.626 us  |      }
   z_ioctl_int/0-31925 [010] 162723.503583: funcgraph_exit:       + 36.219 us  |    }
   z_ioctl_int/0-31925 [010] 162723.503584: funcgraph_exit:       + 43.766 us  |  }
