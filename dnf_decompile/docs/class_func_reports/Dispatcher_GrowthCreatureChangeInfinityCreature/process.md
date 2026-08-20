# process

`_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GrowthCreatureChangeInfinityCreature::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GrowthCreatureChangeInfinityCreature` | `0x081e85ac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e85ac  _ZN47Dispatcher_GrowthCreatureChangeInfinityCreature7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GrowthCreatureChangeInfinityCreature::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081e85ac, 0x081e8639]
081e85ac +0x00:  push   %ebp
081e85ad +0x01:  mov    %esp,%ebp
081e85af +0x03:  sub    $0x28,%esp
081e85b2 +0x06:  mov    0x14(%ebp),%eax
081e85b5 +0x09:  mov    %eax,-0xc(%ebp)
081e85b8 +0x0c:  mov    0x10(%ebp),%eax
081e85bb +0x0f:  mov    %eax,0x8(%esp)
081e85bf +0x13:  mov    0xc(%ebp),%eax
081e85c2 +0x16:  mov    %eax,0x4(%esp)
081e85c6 +0x1a:  mov    0x8(%ebp),%eax
081e85c9 +0x1d:  mov    %eax,(%esp)
081e85cc +0x20:  call   081e86a6 <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_GrowthCreatureChangeInfinityCreature::check_error(CUser*, MSG_BASE&)
081e85d1 +0x25:  mov    -0xc(%ebp),%edx
081e85d4 +0x28:  mov    %eax,0x4(%edx)
081e85d7 +0x2b:  mov    -0xc(%ebp),%eax
081e85da +0x2e:  mov    0x4(%eax),%eax
081e85dd +0x31:  test   %eax,%eax
081e85df +0x33:  jle    081e85e8 <+0x3c>
081e85e1 +0x35:  mov    $0x0,%eax
081e85e6 +0x3a:  jmp    081e8637 <+0x8b>
081e85e8 +0x3c:  mov    -0xc(%ebp),%eax
081e85eb +0x3f:  mov    0x4(%eax),%eax
081e85ee +0x42:  test   %eax,%eax
081e85f0 +0x44:  jns    081e861a <+0x6e>
081e85f2 +0x46:  mov    -0xc(%ebp),%eax
081e85f5 +0x49:  mov    0x4(%eax),%eax
081e85f8 +0x4c:  movl   $0x0,0xc(%esp)
081e8600 +0x54:  mov    %eax,0x8(%esp)
081e8604 +0x58:  movl   $&_ZZN47Dispatcher_GrowthCreatureChangeInfinityCreature7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081e860c +0x60:  movl   $0x64e2,(%esp)
081e8613 +0x67:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081e8618 +0x6c:  jmp    081e8637 <+0x8b>
081e861a +0x6e:  mov    0xc(%ebp),%eax
081e861d +0x71:  mov    %eax,0x4(%esp)
081e8621 +0x75:  mov    0x8(%ebp),%eax
081e8624 +0x78:  mov    %eax,(%esp)
081e8627 +0x7b:  call   081e863a <_ZN47Dispatcher_GrowthCreatureChangeInfinityCreature13process_eventEP5CUser>  ; Dispatcher_GrowthCreatureChangeInfinityCreature::process_event(CUser*)
081e862c +0x80:  mov    -0xc(%ebp),%edx
081e862f +0x83:  mov    %eax,0x4(%edx)
081e8632 +0x86:  mov    $0x0,%eax
081e8637 +0x8b:  leave
081e8638 +0x8c:  ret
081e8639 +0x8d:  nop
```

## 反编译 C

```c
// Dispatcher_GrowthCreatureChangeInfinityCreature::process @ 0x81e85ac

/* Dispatcher_GrowthCreatureChangeInfinityCreature::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GrowthCreatureChangeInfinityCreature::process
          (Dispatcher_GrowthCreatureChangeInfinityCreature *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x64e2,
                       "virtual int Dispatcher_GrowthCreatureChangeInfinityCreature::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      uVar1 = process_event(this,param_1);
      *(undefined4 *)(param_3 + 4) = uVar1;
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
