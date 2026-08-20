# OnDestroyRoom

`_ZN18online_preliminary18COnlinePreliminary13OnDestroyRoomEP5CUser`

`online_preliminary::COnlinePreliminary::OnDestroyRoom(CUser*)`

| 类 | 地址 |
|---|---|
| `online_preliminary::COnlinePreliminary` | `0x08560b8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08560b8a  _ZN18online_preliminary18COnlinePreliminary13OnDestroyRoomEP5CUser
#           online_preliminary::COnlinePreliminary::OnDestroyRoom(CUser*)
# range [0x08560b8a, 0x08560bb9]
08560b8a +0x00:  push   %ebp
08560b8b +0x01:  mov    %esp,%ebp
08560b8d +0x03:  sub    $0x18,%esp
08560b90 +0x06:  mov    0x8(%ebp),%eax
08560b93 +0x09:  movl   $0x0,0x4(%eax)
08560b9a +0x10:  mov    &_ZN18online_preliminary18COnlinePreliminary17pWaitingRoomList_E,%eax
08560b9f +0x15:  mov    (%eax),%eax
08560ba1 +0x17:  add    $0x4,%eax
08560ba4 +0x1a:  mov    (%eax),%ecx
08560ba6 +0x1c:  mov    0x8(%ebp),%edx
08560ba9 +0x1f:  mov    &_ZN18online_preliminary18COnlinePreliminary17pWaitingRoomList_E,%eax
08560bae +0x24:  mov    %edx,0x4(%esp)
08560bb2 +0x28:  mov    %eax,(%esp)
08560bb5 +0x2b:  call   *%ecx
08560bb7 +0x2d:  leave
08560bb8 +0x2e:  ret
08560bb9 +0x2f:  nop
```

## 反编译 C

```c
// online_preliminary::COnlinePreliminary::OnDestroyRoom @ 0x8560b8a

/* online_preliminary::COnlinePreliminary::OnDestroyRoom(CUser*) */

void online_preliminary::COnlinePreliminary::OnDestroyRoom(CUser *param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  (**(code **)(*pWaitingRoomList_ + 4))(pWaitingRoomList_,param_1);
  return;
}
```
