# IsPcRoomUser

`_ZN7pc_room12IsPcRoomUserER5CUser`

`pc_room::IsPcRoomUser(CUser&)`

| 类 | 地址 |
|---|---|
| `pc_room` | `0x08270fea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08270fea  _ZN7pc_room12IsPcRoomUserER5CUser
#           pc_room::IsPcRoomUser(CUser&)
# range [0x08270fea, 0x08271001]
08270fea +0x00:  push   %ebp
08270feb +0x01:  mov    %esp,%ebp
08270fed +0x03:  sub    $0x18,%esp
08270ff0 +0x06:  mov    0x8(%ebp),%eax
08270ff3 +0x09:  mov    %eax,(%esp)
08270ff6 +0x0c:  call   08110dc2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x2d4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x2d4
08270ffb +0x11:  test   %eax,%eax
08270ffd +0x13:  setne  %al
08271000 +0x16:  leave
08271001 +0x17:  ret
```

## 反编译 C

```c
// pc_room::IsPcRoomUser @ 0x8270fea

/* pc_room::IsPcRoomUser(CUser&) */

bool pc_room::IsPcRoomUser(CUser *param_1)

{
  int iVar1;
  
  iVar1 = CUser::GetPCRoomNo(param_1);
  return iVar1 != 0;
}
```
