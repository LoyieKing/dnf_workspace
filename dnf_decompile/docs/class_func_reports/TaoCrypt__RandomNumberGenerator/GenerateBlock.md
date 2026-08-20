# GenerateBlock

`_ZN8TaoCrypt21RandomNumberGenerator13GenerateBlockEPhj`

`TaoCrypt::RandomNumberGenerator::GenerateBlock(unsigned char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::RandomNumberGenerator` | `0x087678e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087678e0  _ZN8TaoCrypt21RandomNumberGenerator13GenerateBlockEPhj
#           TaoCrypt::RandomNumberGenerator::GenerateBlock(unsigned char*, unsigned int)
# range [0x087678e0, 0x0876793c]
087678e0 +0x00:  push   %ebp
087678e1 +0x01:  mov    %esp,%ebp
087678e3 +0x03:  sub    $0x28,%esp
087678e6 +0x06:  mov    %ebx,-0xc(%ebp)
087678e9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087678ee +0x0e:  add    $0xc052aa,%ebx
087678f4 +0x14:  mov    %esi,-0x8(%ebp)
087678f7 +0x17:  mov    0xc(%ebp),%esi
087678fa +0x1a:  mov    %edi,-0x4(%ebp)
087678fd +0x1d:  mov    0x10(%ebp),%edi
08767900 +0x20:  movl   $0x0,0x4(%esp)
08767908 +0x28:  mov    %esi,(%esp)
0876790b +0x2b:  mov    %edi,0x8(%esp)
0876790f +0x2f:  call   0807dcc0 <_init+0x5b8>
08767914 +0x34:  mov    0x8(%ebp),%eax
08767917 +0x37:  mov    %edi,0xc(%esp)
0876791b +0x3b:  mov    %esi,0x8(%esp)
0876791f +0x3f:  mov    %esi,0x4(%esp)
08767923 +0x43:  add    $0x8,%eax
08767926 +0x46:  mov    %eax,(%esp)
08767929 +0x49:  call   087a5a20 <_ZN8TaoCrypt4ARC47ProcessEPhPKhj>  ; TaoCrypt::ARC4::Process(unsigned char*, unsigned char const*, unsigned int)
0876792e +0x4e:  mov    -0xc(%ebp),%ebx
08767931 +0x51:  mov    -0x8(%ebp),%esi
08767934 +0x54:  mov    -0x4(%ebp),%edi
08767937 +0x57:  mov    %ebp,%esp
08767939 +0x59:  pop    %ebp
0876793a +0x5a:  ret
0876793b +0x5b:  nop
0876793c +0x5c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// TaoCrypt::RandomNumberGenerator::GenerateBlock @ 0x87678e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RandomNumberGenerator::GenerateBlock(unsigned char*, unsigned int) */

void __thiscall
TaoCrypt::RandomNumberGenerator::GenerateBlock
          (RandomNumberGenerator *this,uchar *param_1,uint param_2)

{
  memset(param_1,0,param_2);
  ARC4::Process((ARC4 *)(this + 8),param_1,param_1,param_2);
  return;
}
```
