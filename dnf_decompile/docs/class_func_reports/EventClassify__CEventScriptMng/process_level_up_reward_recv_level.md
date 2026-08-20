# process_level_up_reward_recv_level

`_ZN13EventClassify15CEventScriptMng34process_level_up_reward_recv_levelEP5CUserii`

`EventClassify::CEventScriptMng::process_level_up_reward_recv_level(CUser*, int, int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c0a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c0a6  _ZN13EventClassify15CEventScriptMng34process_level_up_reward_recv_levelEP5CUserii
#           EventClassify::CEventScriptMng::process_level_up_reward_recv_level(CUser*, int, int)
# range [0x0810c0a6, 0x0810c10f]
0810c0a6 +0x00:  push   %ebp
0810c0a7 +0x01:  mov    %esp,%ebp
0810c0a9 +0x03:  sub    $0x28,%esp
0810c0ac +0x06:  cmpl   $0x0,0xc(%ebp)
0810c0b0 +0x0a:  je     0810c10a <+0x64>
0810c0b2 +0x0c:  movl   $0x194,0x4(%esp)
0810c0ba +0x14:  mov    0x8(%ebp),%eax
0810c0bd +0x17:  mov    %eax,(%esp)
0810c0c0 +0x1a:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
0810c0c5 +0x1f:  xor    $0x1,%eax
0810c0c8 +0x22:  test   %al,%al
0810c0ca +0x24:  jne    0810c10d <+0x67>
0810c0cc +0x26:  movl   $0x194,0x4(%esp)
0810c0d4 +0x2e:  mov    0x8(%ebp),%eax
0810c0d7 +0x31:  mov    %eax,(%esp)
0810c0da +0x34:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0810c0df +0x39:  mov    %eax,-0xc(%ebp)
0810c0e2 +0x3c:  cmpl   $0x0,-0xc(%ebp)
0810c0e6 +0x40:  je     0810c10e <+0x68>
0810c0e8 +0x42:  mov    0x14(%ebp),%eax
0810c0eb +0x45:  mov    %eax,0xc(%esp)
0810c0ef +0x49:  mov    0x10(%ebp),%eax
0810c0f2 +0x4c:  mov    %eax,0x8(%esp)
0810c0f6 +0x50:  mov    0xc(%ebp),%eax
0810c0f9 +0x53:  mov    %eax,0x4(%esp)
0810c0fd +0x57:  mov    -0xc(%ebp),%eax
0810c100 +0x5a:  mov    %eax,(%esp)
0810c103 +0x5d:  call   0810e51a <_ZN13EventClassify14CLevelUpReward27send_reward_from_recv_levelEP5CUserii>  ; EventClassify::CLevelUpReward::send_reward_from_recv_level(CUser*, int, int)
0810c108 +0x62:  jmp    0810c10e <+0x68>
0810c10a +0x64:  nop
0810c10b +0x65:  jmp    0810c10e <+0x68>
0810c10d +0x67:  nop
0810c10e +0x68:  leave
0810c10f +0x69:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::process_level_up_reward_recv_level @ 0x810c0a6

/* EventClassify::CEventScriptMng::process_level_up_reward_recv_level(CUser*, int, int) */

void __thiscall
EventClassify::CEventScriptMng::process_level_up_reward_recv_level
          (CEventScriptMng *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  CLevelUpReward *this_00;
  
  if (((param_1 != (CUser *)0x0) && (cVar1 = is_eventing(this,0x194), cVar1 == '\x01')) &&
     (this_00 = (CLevelUpReward *)get_event_entity((int)this), this_00 != (CLevelUpReward *)0x0)) {
    CLevelUpReward::send_reward_from_recv_level(this_00,param_1,param_2,param_3);
  }
  return;
}
```
