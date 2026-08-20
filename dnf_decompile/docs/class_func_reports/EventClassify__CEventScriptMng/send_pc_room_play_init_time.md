# send_pc_room_play_init_time

`_ZN13EventClassify15CEventScriptMng27send_pc_room_play_init_timeEP5CUser`

`EventClassify::CEventScriptMng::send_pc_room_play_init_time(CUser*)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c3a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c3a4  _ZN13EventClassify15CEventScriptMng27send_pc_room_play_init_timeEP5CUser
#           EventClassify::CEventScriptMng::send_pc_room_play_init_time(CUser*)
# range [0x0810c3a4, 0x0810c40d]
0810c3a4 +0x00:  push   %ebp
0810c3a5 +0x01:  mov    %esp,%ebp
0810c3a7 +0x03:  sub    $0x28,%esp
0810c3aa +0x06:  movl   $0x5c,0x4(%esp)
0810c3b2 +0x0e:  mov    0x8(%ebp),%eax
0810c3b5 +0x11:  mov    %eax,(%esp)
0810c3b8 +0x14:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
0810c3bd +0x19:  xor    $0x1,%eax
0810c3c0 +0x1c:  test   %al,%al
0810c3c2 +0x1e:  jne    0810c408 <+0x64>
0810c3c4 +0x20:  movl   $0x5c,0x4(%esp)
0810c3cc +0x28:  mov    0x8(%ebp),%eax
0810c3cf +0x2b:  mov    %eax,(%esp)
0810c3d2 +0x2e:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0810c3d7 +0x33:  mov    %eax,-0xc(%ebp)
0810c3da +0x36:  cmpl   $0x0,-0xc(%ebp)
0810c3de +0x3a:  je     0810c40b <+0x67>
0810c3e0 +0x3c:  mov    0xc(%ebp),%eax
0810c3e3 +0x3f:  mov    %eax,0x4(%esp)
0810c3e7 +0x43:  mov    -0xc(%ebp),%eax
0810c3ea +0x46:  mov    %eax,(%esp)
0810c3ed +0x49:  call   08110a38 <_ZN13EventClassify15CPcRoomPlayTime25verifyUserPcRoomPlayEventEP5CUser>  ; EventClassify::CPcRoomPlayTime::verifyUserPcRoomPlayEvent(CUser*)
0810c3f2 +0x4e:  test   %eax,%eax
0810c3f4 +0x50:  sete   %al
0810c3f7 +0x53:  test   %al,%al
0810c3f9 +0x55:  je     0810c40c <+0x68>
0810c3fb +0x57:  mov    0xc(%ebp),%eax
0810c3fe +0x5a:  mov    %eax,(%esp)
0810c401 +0x5d:  call   0868f83c <_ZN5CUser22sendNotiPcRoomPlayTimeEv>  ; CUser::sendNotiPcRoomPlayTime()
0810c406 +0x62:  jmp    0810c40c <+0x68>
0810c408 +0x64:  nop
0810c409 +0x65:  jmp    0810c40c <+0x68>
0810c40b +0x67:  nop
0810c40c +0x68:  leave
0810c40d +0x69:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::send_pc_room_play_init_time @ 0x810c3a4

/* EventClassify::CEventScriptMng::send_pc_room_play_init_time(CUser*) */

void __thiscall
EventClassify::CEventScriptMng::send_pc_room_play_init_time(CEventScriptMng *this,CUser *param_1)

{
  char cVar1;
  CPcRoomPlayTime *this_00;
  int iVar2;
  
  cVar1 = is_eventing(this,0x5c);
  if (((cVar1 == '\x01') &&
      (this_00 = (CPcRoomPlayTime *)get_event_entity((int)this), this_00 != (CPcRoomPlayTime *)0x0))
     && (iVar2 = CPcRoomPlayTime::verifyUserPcRoomPlayEvent(this_00,param_1), iVar2 == 0)) {
    CUser::sendNotiPcRoomPlayTime(param_1);
  }
  return;
}
```
