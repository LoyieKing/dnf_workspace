# getSex

`_ZN5CUser6getSexEv`

`CUser::getSex()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867ec12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867ec12  _ZN5CUser6getSexEv
#           CUser::getSex()
# range [0x0867ec12, 0x0867ec65]
0867ec12 +0x00:  push   %ebp
0867ec13 +0x01:  mov    %esp,%ebp
0867ec15 +0x03:  sub    $0x28,%esp
0867ec18 +0x06:  mov    0x8(%ebp),%eax
0867ec1b +0x09:  mov    %eax,(%esp)
0867ec1e +0x0c:  call   08101056 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x78>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x78
0867ec23 +0x11:  mov    %eax,-0xc(%ebp)
0867ec26 +0x14:  mov    -0xc(%ebp),%eax
0867ec29 +0x17:  mov    %eax,(%esp)
0867ec2c +0x1a:  call   0807e3b0 <_init+0xca8>
0867ec31 +0x1f:  cmp    $0xc,%eax
0867ec34 +0x22:  ja     0867ec3d <+0x2b>
0867ec36 +0x24:  mov    $0xffffffff,%eax
0867ec3b +0x29:  jmp    0867ec63 <+0x51>
0867ec3d +0x2b:  mov    -0xc(%ebp),%eax
0867ec40 +0x2e:  add    $0x6,%eax
0867ec43 +0x31:  movzbl (%eax),%eax
0867ec46 +0x34:  cmp    $0x32,%al
0867ec48 +0x36:  je     0867ec57 <+0x45>
0867ec4a +0x38:  mov    -0xc(%ebp),%eax
0867ec4d +0x3b:  add    $0x6,%eax
0867ec50 +0x3e:  movzbl (%eax),%eax
0867ec53 +0x41:  cmp    $0x34,%al
0867ec55 +0x43:  jne    0867ec5e <+0x4c>
0867ec57 +0x45:  mov    $0x0,%eax
0867ec5c +0x4a:  jmp    0867ec63 <+0x51>
0867ec5e +0x4c:  mov    $0x1,%eax
0867ec63 +0x51:  leave
0867ec64 +0x52:  ret
0867ec65 +0x53:  nop
```

## 反编译 C

```c
// CUser::getSex @ 0x867ec12

/* CUser::getSex() */

undefined4 __thiscall CUser::getSex(CUser *this)

{
  char *__s;
  size_t sVar1;
  undefined4 uVar2;
  
  __s = (char *)GetSsnString(this);
  sVar1 = strlen(__s);
  if (sVar1 < 0xd) {
    uVar2 = 0xffffffff;
  }
  else if ((__s[6] == '2') || (__s[6] == '4')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
