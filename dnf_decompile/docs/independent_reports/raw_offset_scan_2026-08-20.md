# 裸偏移访问全源码扫描与分类证据

## 扫描范围与命令

扫描范围为 `source/` 下全部 `.cpp`、`.h`；扫描器排除 `build/`、`Library3rd/`、`docs/`，并去除行尾注释后匹配对象级裸偏移表达式。

```sh
python3 source/toolchain/scan_raw_offsets.py source
```

复核结果：`裸偏移候选: 78 条`。此前记录的 82 条与当前源码不一致，以本次可复现实测为准。

补充统计仍是分类可重叠，不能相加；本次输出中协议/缓冲区字段访问、布局适配访问和包头初始化访问均保留在候选集合内。

## 分类结论与证据

### A. 协议线格式/序列化访问：保留

`DBManager.cpp`、`DNFPacketTranslater.cpp`、`DNFServerHandler.cpp`、`TcpNetSystem.cpp` 及 `shared/packet/include/` 中的 `(char*)packet + i * stride + field_offset`、`memcpy`、`std::string` 和 `strncpy` 主要表达线上包格式或变长数组元素，不是可命名的 C++ 对象成员。无独立字段报告支持时不改。

### B. 已有布局/包字段报告支持：已修两项

此前已处理 `Packet_Community_Login.h`：`+0xa/+0xe/+0x3e/+0x42` 分别语义化为 `m_id`、`gameUserInfo`、`buddyCount`、`buddies`，并以 `sizeof` 表达数组清零。

本次处理 `Packet_Monitor_UDP_Reply_UserInfo.h` 构造函数。该类型有完整字段声明、逐字段偏移注释及 `TEST_CLASS_SIZE(..., 0x16e6)` 约束：

- `+0xa` → `m_count`
- `+0xb` → `m_channel`
- `+0xc`、长度 `0x16da` → `m_items`，改用 `sizeof(m_items)`

### C. 对象布局/逆向适配访问：暂缓

`ChannelService.cpp:1007,1012` 的 `this + 0xb`、`CSecu_ProtectionField.cpp:53` 的超大成员偏移、`FrameLagCollector.cpp:328,619-672` 的结构数组访问、`Village.cpp:311` 的对象转换，以及其余未有完整字段报告支持的访问暂不修改，避免错误改变成员布局或 ABI 语义。

## TU check

```sh
./source/toolchain/check_tu_game.sh source/shared/packet/include/Packet_Monitor_UDP_Reply_UserInfo.h
```

头文件不能直接作为独立 TU 检查；因此使用实际包含它的游戏实现 TU：

```sh
./source/toolchain/check_tu_game.sh source/DNFServer/GameServer/Game/CGameManager.cpp
```

结果记录见执行输出；同时用静态布局断言确认 `Packet_Monitor_UDP_Reply_UserInfo` 仍为 `0x16e6`。

## 收口

本次复核将当前候选数校正为 78 条，完成剩余候选的分类，并仅处理一项具有完整字段/布局报告支持的候选。协议序列化和缺少 ORIG/字段证据的对象布局访问继续保留待后续审计。
