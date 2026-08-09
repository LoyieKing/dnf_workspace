# src/commsvr/gunnersvr/ —— gunnersvr 专属代码

- 9 CU：gunner_app / gunner_main / gunner_channel_mgr / gunner_file_scanner /
  gunner_predefine / gunner_reporter / gunner_statinfo_fetcher / gunner_timer_handler /
  gunner_tool
- 职责：对外接入 + 文件扫描（TSS 平台安全服务入口）
- 启动：`./gunnersvr -t30 -i1`（-t 超时 / -i 间隔，来自 main 参数解析）
