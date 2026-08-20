# Fill

`_ZNK5yaSSL10RandomPool4FillEPhj`

`yaSSL::RandomPool::Fill(unsigned char*, unsigned int) const`

| 类 | 地址 |
|---|---|
| `yaSSL::RandomPool` | `0x08798fc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08798fc0  _ZNK5yaSSL10RandomPool4FillEPhj
#           yaSSL::RandomPool::Fill(unsigned char*, unsigned int) const
# range [0x08798fc0, 0x08798ffa]
08798fc0 +0x00:  push   %ebp
08798fc1 +0x01:  mov    %esp,%ebp
08798fc3 +0x03:  push   %ebx
08798fc4 +0x04:  sub    $0x14,%esp
08798fc7 +0x07:  mov    0x10(%ebp),%eax
08798fca +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08798fcf +0x0f:  add    $0xbd3bc9,%ebx
08798fd5 +0x15:  mov    %eax,0x8(%esp)
08798fd9 +0x19:  mov    0xc(%ebp),%eax
08798fdc +0x1c:  mov    %eax,0x4(%esp)
08798fe0 +0x20:  mov    0x8(%ebp),%eax
08798fe3 +0x23:  mov    (%eax),%eax
08798fe5 +0x25:  mov    %eax,(%esp)
08798fe8 +0x28:  call   087678e0 <_ZN8TaoCrypt21RandomNumberGenerator13GenerateBlockEPhj>  ; TaoCrypt::RandomNumberGenerator::GenerateBlock(unsigned char*, unsigned int)
08798fed +0x2d:  add    $0x14,%esp
08798ff0 +0x30:  pop    %ebx
08798ff1 +0x31:  pop    %ebp
08798ff2 +0x32:  ret
08798ff3 +0x33:  nop
08798ff4 +0x34:  lea    0x0(%esi),%esi
08798ffa +0x3a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::RandomPool::Fill @ 0x8798fc0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::RandomPool::Fill(unsigned char*, unsigned int) const */

void __thiscall yaSSL::RandomPool::Fill(RandomPool *this,uchar *param_1,uint param_2)

{
  TaoCrypt::RandomNumberGenerator::GenerateBlock(*(RandomNumberGenerator **)this,param_1,param_2);
  return;
}
```
