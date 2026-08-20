# RandomNumberGenerator

`_ZN8TaoCrypt21RandomNumberGeneratorC1Ev`

`TaoCrypt::RandomNumberGenerator::RandomNumberGenerator()`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RandomNumberGenerator` | `0x08767980` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08767980  _ZN8TaoCrypt21RandomNumberGeneratorC1Ev
#           TaoCrypt::RandomNumberGenerator::RandomNumberGenerator()
# range [0x08767980, 0x087679ff]
08767980 +0x00:  push   %ebp
08767981 +0x01:  mov    %esp,%ebp
08767983 +0x03:  sub    $0x148,%esp
08767989 +0x09:  mov    %ebx,-0xc(%ebp)
0876798c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08767991 +0x11:  add    $0xc05207,%ebx
08767997 +0x17:  mov    %esi,-0x8(%ebp)
0876799a +0x1a:  mov    0x8(%ebp),%esi
0876799d +0x1d:  mov    %edi,-0x4(%ebp)
087679a0 +0x20:  lea    -0x38(%ebp),%edi
087679a3 +0x23:  mov    %esi,(%esp)
087679a6 +0x26:  call   08767870 <_ZN8TaoCrypt7OS_SeedC1Ev>  ; TaoCrypt::OS_Seed::OS_Seed()
087679ab +0x2b:  mov    %edi,0x4(%esp)
087679af +0x2f:  mov    %esi,(%esp)
087679b2 +0x32:  movl   $0x20,0x8(%esp)
087679ba +0x3a:  call   087677d0 <_ZN8TaoCrypt7OS_Seed12GenerateSeedEPhj>  ; TaoCrypt::OS_Seed::GenerateSeed(unsigned char*, unsigned int)
087679bf +0x3f:  lea    0x8(%esi),%eax
087679c2 +0x42:  mov    %edi,0x4(%esp)
087679c6 +0x46:  mov    %eax,(%esp)
087679c9 +0x49:  movl   $0x20,0x8(%esp)
087679d1 +0x51:  call   087a5900 <_ZN8TaoCrypt4ARC46SetKeyEPKhj>  ; TaoCrypt::ARC4::SetKey(unsigned char const*, unsigned int)
087679d6 +0x56:  lea    -0x138(%ebp),%eax
087679dc +0x5c:  mov    %esi,(%esp)
087679df +0x5f:  movl   $0x100,0x8(%esp)
087679e7 +0x67:  mov    %eax,0x4(%esp)
087679eb +0x6b:  call   087678e0 <_ZN8TaoCrypt21RandomNumberGenerator13GenerateBlockEPhj>  ; TaoCrypt::RandomNumberGenerator::GenerateBlock(unsigned char*, unsigned int)
087679f0 +0x70:  mov    -0xc(%ebp),%ebx
087679f3 +0x73:  mov    -0x8(%ebp),%esi
087679f6 +0x76:  mov    -0x4(%ebp),%edi
087679f9 +0x79:  mov    %ebp,%esp
087679fb +0x7b:  pop    %ebp
087679fc +0x7c:  ret
087679fd +0x7d:  nop
087679fe +0x7e:  nop
087679ff +0x7f:  nop
```

## 反编译 C

```c
// TaoCrypt::RandomNumberGenerator::RandomNumberGenerator @ 0x8767980

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RandomNumberGenerator::RandomNumberGenerator() */

void __thiscall TaoCrypt::RandomNumberGenerator::RandomNumberGenerator(RandomNumberGenerator *this)

{
  uchar local_13c [256];
  uchar local_3c [44];
  
  OS_Seed::OS_Seed((OS_Seed *)this);
  OS_Seed::GenerateSeed((OS_Seed *)this,local_3c,0x20);
  ARC4::SetKey((ARC4 *)(this + 8),local_3c,0x20);
  GenerateBlock(this,local_13c,0x100);
  return;
}
```
