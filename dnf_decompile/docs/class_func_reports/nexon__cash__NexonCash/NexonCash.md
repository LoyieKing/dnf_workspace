# NexonCash

`_ZN5nexon4cash9NexonCashC1EPKcscss`

`nexon::cash::NexonCash::NexonCash(char const*, short, char, short, short)`

| 类 | 地址 |
|---|---|
| `nexon::cash::NexonCash` | `0x081ae1b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081ae1b0  _ZN5nexon4cash9NexonCashC1EPKcscss
#           nexon::cash::NexonCash::NexonCash(char const*, short, char, short, short)
# range [0x081ae1b0, 0x081ae241]
081ae1b0 +0x00:  push   %ebp
081ae1b1 +0x01:  mov    %esp,%ebp
081ae1b3 +0x03:  push   %edi
081ae1b4 +0x04:  push   %esi
081ae1b5 +0x05:  push   %ebx
081ae1b6 +0x06:  sub    $0x3c,%esp
081ae1b9 +0x09:  mov    0x10(%ebp),%ebx
081ae1bc +0x0c:  mov    0x14(%ebp),%ecx
081ae1bf +0x0f:  mov    0x18(%ebp),%edx
081ae1c2 +0x12:  mov    0x1c(%ebp),%eax
081ae1c5 +0x15:  mov    %bx,-0x1c(%ebp)
081ae1c9 +0x19:  mov    %cl,-0x20(%ebp)
081ae1cc +0x1c:  mov    %dx,-0x24(%ebp)
081ae1d0 +0x20:  mov    %ax,-0x28(%ebp)
081ae1d4 +0x24:  movl   $0x450,(%esp)
081ae1db +0x2b:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081ae1e0 +0x30:  mov    %eax,%ebx
081ae1e2 +0x32:  movswl -0x28(%ebp),%edi
081ae1e6 +0x36:  movzwl -0x24(%ebp),%eax
081ae1ea +0x3a:  movzwl %ax,%esi
081ae1ed +0x3d:  movzbl -0x20(%ebp),%eax
081ae1f1 +0x41:  movzbl %al,%ecx
081ae1f4 +0x44:  movswl -0x1c(%ebp),%edx
081ae1f8 +0x48:  mov    %ebx,%eax
081ae1fa +0x4a:  mov    %edi,0x14(%esp)
081ae1fe +0x4e:  mov    %esi,0x10(%esp)
081ae202 +0x52:  mov    %ecx,0xc(%esp)
081ae206 +0x56:  mov    %edx,0x8(%esp)
081ae20a +0x5a:  mov    0xc(%ebp),%edx
081ae20d +0x5d:  mov    %edx,0x4(%esp)
081ae211 +0x61:  mov    %eax,(%esp)
081ae214 +0x64:  call   081acfdc <_ZN5nexon4cash9NCashImplC1EPKcshts>  ; nexon::cash::NCashImpl::NCashImpl(char const*, short, unsigned char, unsigned short, short)
081ae219 +0x69:  jmp    081ae233 <+0x83>
081ae21b +0x6b:  mov    %edx,%esi
081ae21d +0x6d:  mov    %eax,%edi
081ae21f +0x6f:  mov    %ebx,(%esp)
081ae222 +0x72:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081ae227 +0x77:  mov    %edi,%eax
081ae229 +0x79:  mov    %esi,%edx
081ae22b +0x7b:  mov    %eax,(%esp)
081ae22e +0x7e:  call   08ae3750 <_Unwind_Resume>
081ae233 +0x83:  mov    %ebx,%edx
081ae235 +0x85:  mov    0x8(%ebp),%eax
081ae238 +0x88:  mov    %edx,(%eax)
081ae23a +0x8a:  add    $0x3c,%esp
081ae23d +0x8d:  pop    %ebx
081ae23e +0x8e:  pop    %esi
081ae23f +0x8f:  pop    %edi
081ae240 +0x90:  pop    %ebp
081ae241 +0x91:  ret
```

## 反编译 C

```c
// nexon::cash::NexonCash::NexonCash @ 0x81ae1b0

/* nexon::cash::NexonCash::NexonCash(char const*, short, char, short, short) */

void __thiscall
nexon::cash::NexonCash::NexonCash
          (NexonCash *this,char *param_1,short param_2,char param_3,short param_4,short param_5)

{
  NCashImpl *this_00;
  
  this_00 = operator_new(0x450);
                    /* try { // try from 081ae214 to 081ae218 has its CatchHandler @ 081ae21b */
  NCashImpl::NCashImpl(this_00,param_1,param_2,param_3,param_4,param_5);
  *(NCashImpl **)this = this_00;
  return;
}
```
