# process

`_ZN25Dispatcher_ItemDictionary7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ItemDictionary::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ItemDictionary` | `0x081dd7fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dd7fe  _ZN25Dispatcher_ItemDictionary7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ItemDictionary::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081dd7fe, 0x081dd879]
081dd7fe +0x00:  push   %ebp
081dd7ff +0x01:  mov    %esp,%ebp
081dd801 +0x03:  sub    $0x28,%esp
081dd804 +0x06:  mov    0x14(%ebp),%eax
081dd807 +0x09:  mov    %eax,-0x10(%ebp)
081dd80a +0x0c:  mov    0x10(%ebp),%eax
081dd80d +0x0f:  mov    %eax,0x8(%esp)
081dd811 +0x13:  mov    0xc(%ebp),%eax
081dd814 +0x16:  mov    %eax,0x4(%esp)
081dd818 +0x1a:  mov    0x8(%ebp),%eax
081dd81b +0x1d:  mov    %eax,(%esp)
081dd81e +0x20:  call   081dd87a <_ZN25Dispatcher_ItemDictionary11check_errorEP5CUserR8MSG_BASE>  ; Dispatcher_ItemDictionary::check_error(CUser*, MSG_BASE&)
081dd823 +0x25:  mov    -0x10(%ebp),%edx
081dd826 +0x28:  mov    %eax,0x4(%edx)
081dd829 +0x2b:  mov    -0x10(%ebp),%eax
081dd82c +0x2e:  mov    0x4(%eax),%eax
081dd82f +0x31:  test   %eax,%eax
081dd831 +0x33:  jle    081dd83a <+0x3c>
081dd833 +0x35:  mov    $0x0,%eax
081dd838 +0x3a:  jmp    081dd877 <+0x79>
081dd83a +0x3c:  mov    -0x10(%ebp),%eax
081dd83d +0x3f:  mov    0x4(%eax),%eax
081dd840 +0x42:  test   %eax,%eax
081dd842 +0x44:  jns    081dd86c <+0x6e>
081dd844 +0x46:  mov    -0x10(%ebp),%eax
081dd847 +0x49:  mov    0x4(%eax),%eax
081dd84a +0x4c:  movl   $0x0,0xc(%esp)
081dd852 +0x54:  mov    %eax,0x8(%esp)
081dd856 +0x58:  movl   $&_ZZN25Dispatcher_ItemDictionary7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081dd85e +0x60:  movl   $0x4e52,(%esp)
081dd865 +0x67:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081dd86a +0x6c:  jmp    081dd877 <+0x79>
081dd86c +0x6e:  mov    0x10(%ebp),%eax
081dd86f +0x71:  mov    %eax,-0xc(%ebp)
081dd872 +0x74:  mov    $0x0,%eax
081dd877 +0x79:  leave
081dd878 +0x7a:  ret
081dd879 +0x7b:  nop
```

## 反编译 C

```c
// Dispatcher_ItemDictionary::process @ 0x81dd7fe

/* Dispatcher_ItemDictionary::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_ItemDictionary::process
          (Dispatcher_ItemDictionary *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x4e52,
                       "virtual int Dispatcher_ItemDictionary::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
