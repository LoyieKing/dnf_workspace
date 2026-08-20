# MakeChecksumFromMemory

`_ZN16CNChecksumSha25622MakeChecksumFromMemoryEPKhiPhi`

`CNChecksumSha256::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int)`

| 类 | 地址 |
|---|---|
| `CNChecksumSha256` | `0x080987c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080987c2  _ZN16CNChecksumSha25622MakeChecksumFromMemoryEPKhiPhi
#           CNChecksumSha256::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int)
# range [0x080987c2, 0x0809884f]
080987c2 +0x00:  push   %ebp
080987c3 +0x01:  mov    %esp,%ebp
080987c5 +0x03:  sub    $0x18,%esp
080987c8 +0x06:  mov    0x8(%ebp),%eax
080987cb +0x09:  mov    0x8(%eax),%eax
080987ce +0x0c:  test   %eax,%eax
080987d0 +0x0e:  jne    080987d9 <+0x17>
080987d2 +0x10:  mov    $0x70000000,%eax
080987d7 +0x15:  jmp    0809884d <+0x8b>
080987d9 +0x17:  mov    0x8(%ebp),%eax
080987dc +0x1a:  mov    (%eax),%eax
080987de +0x1c:  add    $0x20,%eax
080987e1 +0x1f:  mov    (%eax),%edx
080987e3 +0x21:  mov    0x8(%ebp),%eax
080987e6 +0x24:  mov    %eax,(%esp)
080987e9 +0x27:  call   *%edx
080987eb +0x29:  cmp    0x18(%ebp),%eax
080987ee +0x2c:  setg   %al
080987f1 +0x2f:  test   %al,%al
080987f3 +0x31:  je     080987fc <+0x3a>
080987f5 +0x33:  mov    $0x70000001,%eax
080987fa +0x38:  jmp    0809884d <+0x8b>
080987fc +0x3a:  cmpl   $0x0,0x10(%ebp)
08098800 +0x3e:  jg     08098809 <+0x47>
08098802 +0x40:  mov    $0x70000005,%eax
08098807 +0x45:  jmp    0809884d <+0x8b>
08098809 +0x47:  mov    0x8(%ebp),%eax
0809880c +0x4a:  mov    0x8(%eax),%eax
0809880f +0x4d:  mov    %eax,(%esp)
08098812 +0x50:  call   080be020 <_Z11SHA256_InitP15SHA256_ALG_INFO>  ; SHA256_Init(SHA256_ALG_INFO*)
08098817 +0x55:  mov    0x10(%ebp),%edx
0809881a +0x58:  mov    0x8(%ebp),%eax
0809881d +0x5b:  mov    0x8(%eax),%eax
08098820 +0x5e:  mov    %edx,0x8(%esp)
08098824 +0x62:  mov    0xc(%ebp),%edx
08098827 +0x65:  mov    %edx,0x4(%esp)
0809882b +0x69:  mov    %eax,(%esp)
0809882e +0x6c:  call   080be08a <_Z13SHA256_UpdateP15SHA256_ALG_INFOPhm>  ; SHA256_Update(SHA256_ALG_INFO*, unsigned char*, unsigned long)
08098833 +0x71:  mov    0x8(%ebp),%eax
08098836 +0x74:  mov    0x8(%eax),%eax
08098839 +0x77:  mov    0x14(%ebp),%edx
0809883c +0x7a:  mov    %edx,0x4(%esp)
08098840 +0x7e:  mov    %eax,(%esp)
08098843 +0x81:  call   080be1d1 <_Z12SHA256_FinalP15SHA256_ALG_INFOPh>  ; SHA256_Final(SHA256_ALG_INFO*, unsigned char*)
08098848 +0x86:  mov    $0x6fffffff,%eax
0809884d +0x8b:  leave
0809884e +0x8c:  ret
0809884f +0x8d:  nop
```

## 反编译 C

```c
// CNChecksumSha256::MakeChecksumFromMemory @ 0x80987c2

/* CNChecksumSha256::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha256::MakeChecksumFromMemory
          (CNChecksumSha256 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
      SHA256_Init(*(SHA256_ALG_INFO **)(this + 8));
      SHA256_Update(*(SHA256_ALG_INFO **)(this + 8),param_1,param_2);
      SHA256_Final(*(SHA256_ALG_INFO **)(this + 8),param_3);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}
```
