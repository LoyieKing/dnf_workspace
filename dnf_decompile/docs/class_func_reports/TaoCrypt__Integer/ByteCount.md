# ByteCount

`_ZNK8TaoCrypt7Integer9ByteCountEv`

`TaoCrypt::Integer::ByteCount() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875ec30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875ec30  _ZNK8TaoCrypt7Integer9ByteCountEv
#           TaoCrypt::Integer::ByteCount() const
# range [0x0875ec30, 0x0875ec7e]
0875ec30 +0x00:  push   %ebp
0875ec31 +0x01:  mov    %esp,%ebp
0875ec33 +0x03:  sub    $0x28,%esp
0875ec36 +0x06:  mov    %ebx,-0xc(%ebp)
0875ec39 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875ec3e +0x0e:  add    $0xc0df5a,%ebx
0875ec44 +0x14:  mov    %edi,-0x4(%ebp)
0875ec47 +0x17:  mov    0x8(%ebp),%edi
0875ec4a +0x1a:  mov    %esi,-0x8(%ebp)
0875ec4d +0x1d:  mov    %edi,(%esp)
0875ec50 +0x20:  call   0875d130 <_ZNK8TaoCrypt7Integer9WordCountEv>  ; TaoCrypt::Integer::WordCount() const
0875ec55 +0x25:  mov    %eax,%esi
0875ec57 +0x27:  xor    %eax,%eax
0875ec59 +0x29:  test   %esi,%esi
0875ec5b +0x2b:  je     0875ec70 <+0x40>
0875ec5d +0x2d:  mov    0x4(%edi),%eax
0875ec60 +0x30:  mov    -0x4(%eax,%esi,4),%eax
0875ec64 +0x34:  mov    %eax,(%esp)
0875ec67 +0x37:  call   08767500 <_ZN8TaoCrypt13BytePrecisionEj>  ; TaoCrypt::BytePrecision(unsigned int)
0875ec6c +0x3c:  lea    -0x4(%eax,%esi,4),%eax
0875ec70 +0x40:  mov    -0xc(%ebp),%ebx
0875ec73 +0x43:  mov    -0x8(%ebp),%esi
0875ec76 +0x46:  mov    -0x4(%ebp),%edi
0875ec79 +0x49:  mov    %ebp,%esp
0875ec7b +0x4b:  pop    %ebp
0875ec7c +0x4c:  ret
0875ec7d +0x4d:  nop
0875ec7e +0x4e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::Integer::ByteCount @ 0x875ec30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::ByteCount() const */

int __thiscall TaoCrypt::Integer::ByteCount(Integer *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = WordCount(this);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = BytePrecision(*(uint *)(*(int *)(this + 4) + -4 + iVar1 * 4));
    iVar2 = iVar2 + -4 + iVar1 * 4;
  }
  return iVar2;
}
```
