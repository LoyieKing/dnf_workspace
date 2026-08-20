# send_bring_up_item_fatigue

`_ZN13EventClassify15CEventScriptMng26send_bring_up_item_fatigueEP5CUseri`

`EventClassify::CEventScriptMng::send_bring_up_item_fatigue(CUser*, int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c33a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c33a  _ZN13EventClassify15CEventScriptMng26send_bring_up_item_fatigueEP5CUseri
#           EventClassify::CEventScriptMng::send_bring_up_item_fatigue(CUser*, int)
# range [0x0810c33a, 0x0810c3a3]
0810c33a +0x00:  push   %ebp
0810c33b +0x01:  mov    %esp,%ebp
0810c33d +0x03:  sub    $0x28,%esp
0810c340 +0x06:  movl   $0x19b,0x4(%esp)
0810c348 +0x0e:  mov    0x8(%ebp),%eax
0810c34b +0x11:  mov    %eax,(%esp)
0810c34e +0x14:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
0810c353 +0x19:  xor    $0x1,%eax
0810c356 +0x1c:  test   %al,%al
0810c358 +0x1e:  je     0810c361 <+0x27>
0810c35a +0x20:  mov    $0x0,%eax
0810c35f +0x25:  jmp    0810c3a2 <+0x68>
0810c361 +0x27:  movl   $0x19b,0x4(%esp)
0810c369 +0x2f:  mov    0x8(%ebp),%eax
0810c36c +0x32:  mov    %eax,(%esp)
0810c36f +0x35:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
0810c374 +0x3a:  mov    %eax,-0xc(%ebp)
0810c377 +0x3d:  cmpl   $0x0,-0xc(%ebp)
0810c37b +0x41:  jne    0810c384 <+0x4a>
0810c37d +0x43:  mov    $0x0,%eax
0810c382 +0x48:  jmp    0810c3a2 <+0x68>
0810c384 +0x4a:  mov    0x10(%ebp),%eax
0810c387 +0x4d:  mov    %eax,0x8(%esp)
0810c38b +0x51:  mov    0xc(%ebp),%eax
0810c38e +0x54:  mov    %eax,0x4(%esp)
0810c392 +0x58:  mov    -0xc(%ebp),%eax
0810c395 +0x5b:  mov    %eax,(%esp)
0810c398 +0x5e:  call   08110386 <_ZN13EventClassify14CObjectBringUp24sendEventItemFromFatigueEP5CUserj>  ; EventClassify::CObjectBringUp::sendEventItemFromFatigue(CUser*, unsigned int)
0810c39d +0x63:  mov    $0x1,%eax
0810c3a2 +0x68:  leave
0810c3a3 +0x69:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::send_bring_up_item_fatigue @ 0x810c33a

/* EventClassify::CEventScriptMng::send_bring_up_item_fatigue(CUser*, int) */

undefined4 __thiscall
EventClassify::CEventScriptMng::send_bring_up_item_fatigue
          (CEventScriptMng *this,CUser *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  CObjectBringUp *this_00;
  
  cVar1 = is_eventing(this,0x19b);
  if (cVar1 == '\x01') {
    this_00 = (CObjectBringUp *)get_event_entity((int)this);
    if (this_00 == (CObjectBringUp *)0x0) {
      uVar2 = 0;
    }
    else {
      CObjectBringUp::sendEventItemFromFatigue(this_00,param_1,param_2);
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
