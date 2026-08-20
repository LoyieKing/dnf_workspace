# process

`_ZN32Dispatcher_Mercenary_Competition7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_Mercenary_Competition::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Mercenary_Competition` | `0x081ddd00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ddd00  _ZN32Dispatcher_Mercenary_Competition7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_Mercenary_Competition::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081ddd00, 0x081dde1f]
081ddd00 +0x000:  push   %ebp
081ddd01 +0x001:  mov    %esp,%ebp
081ddd03 +0x003:  push   %ebx
081ddd04 +0x004:  sub    $0x24,%esp
081ddd07 +0x007:  cmpl   $0x0,0xc(%ebp)
081ddd0b +0x00b:  jne    081ddd17 <+0x17>
081ddd0d +0x00d:  mov    $0xffffffff,%eax
081ddd12 +0x012:  jmp    081dde1a <+0x11a>
081ddd17 +0x017:  mov    0xc(%ebp),%eax
081ddd1a +0x01a:  mov    %eax,(%esp)
081ddd1d +0x01d:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081ddd22 +0x022:  cmp    $0x3,%eax
081ddd25 +0x025:  setne  %al
081ddd28 +0x028:  test   %al,%al
081ddd2a +0x02a:  je     081ddd36 <+0x36>
081ddd2c +0x02c:  mov    $0xffffffff,%eax
081ddd31 +0x031:  jmp    081dde1a <+0x11a>
081ddd36 +0x036:  mov    0x10(%ebp),%eax
081ddd39 +0x039:  mov    %eax,-0x10(%ebp)
081ddd3c +0x03c:  mov    0x14(%ebp),%eax
081ddd3f +0x03f:  mov    %eax,-0xc(%ebp)
081ddd42 +0x042:  mov    0xc(%ebp),%eax
081ddd45 +0x045:  mov    %eax,(%esp)
081ddd48 +0x048:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081ddd4d +0x04d:  test   %eax,%eax
081ddd4f +0x04f:  setne  %al
081ddd52 +0x052:  test   %al,%al
081ddd54 +0x054:  je     081ddd81 <+0x81>
081ddd56 +0x056:  mov    0xc(%ebp),%eax
081ddd59 +0x059:  mov    %eax,(%esp)
081ddd5c +0x05c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081ddd61 +0x061:  mov    -0x10(%ebp),%edx
081ddd64 +0x064:  mov    0x10(%edx),%edx
081ddd67 +0x067:  cmp    %edx,%eax
081ddd69 +0x069:  sete   %al
081ddd6c +0x06c:  test   %al,%al
081ddd6e +0x06e:  je     081ddd81 <+0x81>
081ddd70 +0x070:  mov    -0xc(%ebp),%eax
081ddd73 +0x073:  movb   $0x0,0x4(%eax)
081ddd77 +0x077:  mov    $0xffffffff,%eax
081ddd7c +0x07c:  jmp    081dde1a <+0x11a>
081ddd81 +0x081:  mov    -0x10(%ebp),%eax
081ddd84 +0x084:  movzbl 0x14(%eax),%eax
081ddd88 +0x088:  movsbl %al,%ecx
081ddd8b +0x08b:  mov    -0x10(%ebp),%eax
081ddd8e +0x08e:  movzbl 0x15(%eax),%eax
081ddd92 +0x092:  movsbl %al,%edx
081ddd95 +0x095:  mov    -0x10(%ebp),%eax
081ddd98 +0x098:  mov    0x10(%eax),%eax
081ddd9b +0x09b:  mov    %ecx,0xc(%esp)
081ddd9f +0x09f:  mov    %edx,0x8(%esp)
081ddda3 +0x0a3:  mov    %eax,0x4(%esp)
081ddda7 +0x0a7:  mov    0xc(%ebp),%eax
081dddaa +0x0aa:  mov    %eax,(%esp)
081dddad +0x0ad:  call   0868e6c0 <_ZN5CUser28Competition_Mercenary_CharacEjcc>  ; CUser::Competition_Mercenary_Charac(unsigned int, char, char)
081dddb2 +0x0b2:  mov    -0xc(%ebp),%edx
081dddb5 +0x0b5:  mov    %al,0x4(%edx)
081dddb8 +0x0b8:  mov    -0x10(%ebp),%eax
081dddbb +0x0bb:  mov    0x10(%eax),%edx
081dddbe +0x0be:  mov    -0xc(%ebp),%eax
081dddc1 +0x0c1:  mov    %edx,0x8(%eax)
081dddc4 +0x0c4:  mov    -0x10(%ebp),%eax
081dddc7 +0x0c7:  movzbl 0x15(%eax),%edx
081dddcb +0x0cb:  mov    -0xc(%ebp),%eax
081dddce +0x0ce:  mov    %dl,0xc(%eax)
081dddd1 +0x0d1:  mov    -0x10(%ebp),%eax
081dddd4 +0x0d4:  movzbl 0x14(%eax),%edx
081dddd8 +0x0d8:  mov    -0xc(%ebp),%eax
081ddddb +0x0db:  mov    %dl,0xd(%eax)
081dddde +0x0de:  mov    -0x10(%ebp),%eax
081ddde1 +0x0e1:  movzbl 0x14(%eax),%eax
081ddde5 +0x0e5:  movsbl %al,%ecx
081ddde8 +0x0e8:  mov    -0x10(%ebp),%eax
081dddeb +0x0eb:  movzbl 0x15(%eax),%eax
081dddef +0x0ef:  movsbl %al,%edx
081dddf2 +0x0f2:  mov    -0x10(%ebp),%eax
081dddf5 +0x0f5:  mov    0x10(%eax),%eax
081dddf8 +0x0f8:  mov    0xc(%ebp),%ebx
081dddfb +0x0fb:  add    $0x79700,%ebx
081dde01 +0x101:  mov    %ecx,0xc(%esp)
081dde05 +0x105:  mov    %edx,0x8(%esp)
081dde09 +0x109:  mov    %eax,0x4(%esp)
081dde0d +0x10d:  mov    %ebx,(%esp)
081dde10 +0x110:  call   08686aca <_ZN15cUserHistoryLog20MercenaryCompetitionEjcc>  ; cUserHistoryLog::MercenaryCompetition(unsigned int, char, char)
081dde15 +0x115:  mov    $0x0,%eax
081dde1a +0x11a:  add    $0x24,%esp
081dde1d +0x11d:  pop    %ebx
081dde1e +0x11e:  pop    %ebp
081dde1f +0x11f:  ret
```

## 反编译 C

```c
// Dispatcher_Mercenary_Competition::process @ 0x81ddd00

/* Dispatcher_Mercenary_Competition::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Mercenary_Competition::process
          (Dispatcher_Mercenary_Competition *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  ParamBase PVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 == 3) {
      iVar3 = CUser::GetParty(param_1);
      if ((iVar3 != 0) &&
         (iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1),
         iVar3 == *(int *)(param_2 + 0x10))) {
        param_3[4] = (ParamBase)0x0;
        return 0xffffffff;
      }
      PVar1 = (ParamBase)
              CUser::Competition_Mercenary_Charac
                        (param_1,*(uint *)(param_2 + 0x10),(char)param_2[0x15],(char)param_2[0x14]);
      param_3[4] = PVar1;
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x10);
      *(MSG_BASE *)(param_3 + 0xc) = param_2[0x15];
      *(MSG_BASE *)(param_3 + 0xd) = param_2[0x14];
      cUserHistoryLog::MercenaryCompetition
                ((cUserHistoryLog *)(param_1 + 0x79700),*(uint *)(param_2 + 0x10),
                 (char)param_2[0x15],(char)param_2[0x14]);
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
```
