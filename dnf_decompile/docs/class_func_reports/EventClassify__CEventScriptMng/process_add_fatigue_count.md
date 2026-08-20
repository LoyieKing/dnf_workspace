# process_add_fatigue_count

`_ZN13EventClassify15CEventScriptMng25process_add_fatigue_countEP5CUseri`

`EventClassify::CEventScriptMng::process_add_fatigue_count(CUser*, int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c110` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c110  _ZN13EventClassify15CEventScriptMng25process_add_fatigue_countEP5CUseri
#           EventClassify::CEventScriptMng::process_add_fatigue_count(CUser*, int)
# range [0x0810c110, 0x0810c151]
0810c110 +0x00:  push   %ebp
0810c111 +0x01:  mov    %esp,%ebp
0810c113 +0x03:  sub    $0x18,%esp
0810c116 +0x06:  cmpl   $0x0,0xc(%ebp)
0810c11a +0x0a:  je     0810c14b <+0x3b>
0810c11c +0x0c:  movl   $0x56,0x4(%esp)
0810c124 +0x14:  mov    0x8(%ebp),%eax
0810c127 +0x17:  mov    %eax,(%esp)
0810c12a +0x1a:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
0810c12f +0x1f:  xor    $0x1,%eax
0810c132 +0x22:  test   %al,%al
0810c134 +0x24:  jne    0810c14e <+0x3e>
0810c136 +0x26:  mov    0x10(%ebp),%eax
0810c139 +0x29:  cwtl
0810c13a +0x2a:  mov    %eax,0x4(%esp)
0810c13e +0x2e:  mov    0xc(%ebp),%eax
0810c141 +0x31:  mov    %eax,(%esp)
0810c144 +0x34:  call   0868d32a <_ZN5CUser24set_server_fatigue_countEs>  ; CUser::set_server_fatigue_count(short)
0810c149 +0x39:  jmp    0810c14f <+0x3f>
0810c14b +0x3b:  nop
0810c14c +0x3c:  jmp    0810c14f <+0x3f>
0810c14e +0x3e:  nop
0810c14f +0x3f:  leave
0810c150 +0x40:  ret
0810c151 +0x41:  nop
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::process_add_fatigue_count @ 0x810c110

/* EventClassify::CEventScriptMng::process_add_fatigue_count(CUser*, int) */

void __thiscall
EventClassify::CEventScriptMng::process_add_fatigue_count
          (CEventScriptMng *this,CUser *param_1,int param_2)

{
  char cVar1;
  
  if ((param_1 != (CUser *)0x0) && (cVar1 = is_eventing(this,0x56), cVar1 == '\x01')) {
    CUser::set_server_fatigue_count(param_1,(short)param_2);
  }
  return;
}
```
