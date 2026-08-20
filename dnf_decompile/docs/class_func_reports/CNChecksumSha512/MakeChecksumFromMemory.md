# MakeChecksumFromMemory

`_ZN16CNChecksumSha51222MakeChecksumFromMemoryEPKhiPhi`

`CNChecksumSha512::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha512` | `0x08098f8a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08098f8a  _ZN16CNChecksumSha51222MakeChecksumFromMemoryEPKhiPhi
#           CNChecksumSha512::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int)
# range [0x08098f8a, 0x08099017]
08098f8a +0x00:  push   %ebp
08098f8b +0x01:  mov    %esp,%ebp
08098f8d +0x03:  sub    $0x18,%esp
08098f90 +0x06:  mov    0x8(%ebp),%eax
08098f93 +0x09:  mov    0x8(%eax),%eax
08098f96 +0x0c:  test   %eax,%eax
08098f98 +0x0e:  jne    08098fa1 <+0x17>
08098f9a +0x10:  mov    $0x70000000,%eax
08098f9f +0x15:  jmp    08099015 <+0x8b>
08098fa1 +0x17:  mov    0x8(%ebp),%eax
08098fa4 +0x1a:  mov    (%eax),%eax
08098fa6 +0x1c:  add    $0x20,%eax
08098fa9 +0x1f:  mov    (%eax),%edx
08098fab +0x21:  mov    0x8(%ebp),%eax
08098fae +0x24:  mov    %eax,(%esp)
08098fb1 +0x27:  call   *%edx
08098fb3 +0x29:  cmp    0x18(%ebp),%eax
08098fb6 +0x2c:  setg   %al
08098fb9 +0x2f:  test   %al,%al
08098fbb +0x31:  je     08098fc4 <+0x3a>
08098fbd +0x33:  mov    $0x70000001,%eax
08098fc2 +0x38:  jmp    08099015 <+0x8b>
08098fc4 +0x3a:  cmpl   $0x0,0x10(%ebp)
08098fc8 +0x3e:  jg     08098fd1 <+0x47>
08098fca +0x40:  mov    $0x70000005,%eax
08098fcf +0x45:  jmp    08099015 <+0x8b>
08098fd1 +0x47:  mov    0x8(%ebp),%eax
08098fd4 +0x4a:  mov    0x8(%eax),%eax
08098fd7 +0x4d:  mov    %eax,(%esp)
08098fda +0x50:  call   080c27f1 <_Z11SHA512_InitP15SHA512_ALG_INFO>  ; SHA512_Init(SHA512_ALG_INFO*)
08098fdf +0x55:  mov    0x10(%ebp),%edx
08098fe2 +0x58:  mov    0x8(%ebp),%eax
08098fe5 +0x5b:  mov    0x8(%eax),%eax
08098fe8 +0x5e:  mov    %edx,0x8(%esp)
08098fec +0x62:  mov    0xc(%ebp),%edx
08098fef +0x65:  mov    %edx,0x4(%esp)
08098ff3 +0x69:  mov    %eax,(%esp)
08098ff6 +0x6c:  call   080c28b9 <_Z13SHA512_UpdateP15SHA512_ALG_INFOPhm>  ; SHA512_Update(SHA512_ALG_INFO*, unsigned char*, unsigned long)
08098ffb +0x71:  mov    0x8(%ebp),%eax
08098ffe +0x74:  mov    0x8(%eax),%eax
08099001 +0x77:  mov    0x14(%ebp),%edx
08099004 +0x7a:  mov    %edx,0x4(%esp)
08099008 +0x7e:  mov    %eax,(%esp)
0809900b +0x81:  call   080c2a7e <_Z12SHA512_FinalP15SHA512_ALG_INFOPh>  ; SHA512_Final(SHA512_ALG_INFO*, unsigned char*)
08099010 +0x86:  mov    $0x6fffffff,%eax
08099015 +0x8b:  leave
08099016 +0x8c:  ret
08099017 +0x8d:  nop
```

## 反编译 C

```c
// CNChecksumSha512::MakeChecksumFromMemory @ 0x8098f8a

/* CNChecksumSha512::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha512::MakeChecksumFromMemory
          (CNChecksumSha512 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_4 < iVar2) {
      uVar1 = 0x70000001;
    }
    else if (param_2 < 1) {
      uVar1 = 0x70000005;
    }
    else {
      SHA512_Init(*(SHA512_ALG_INFO **)(this + 8));
      SHA512_Update(*(SHA512_ALG_INFO **)(this + 8),param_1,param_2);
      SHA512_Final(*(SHA512_ALG_INFO **)(this + 8),param_3);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}
```
