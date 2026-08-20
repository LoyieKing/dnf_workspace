# school_info

`_ZZN18DB_UpdatePvPResult8dispatchEiiP6StreamEN11school_infoC1Ev`

`DB_UpdatePvPResult::dispatch(int, int, Stream*)::school_info::school_info()`

| 类 | 地址 |
|---|---|
| `DB_UpdatePvPResult::dispatch(int, int, Stream*)::school_info` | `0x0843091e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843091e  _ZZN18DB_UpdatePvPResult8dispatchEiiP6StreamEN11school_infoC1Ev
#           DB_UpdatePvPResult::dispatch(int, int, Stream*)::school_info::school_info()
# range [0x0843091e, 0x0843097d]
0843091e +0x00:  push   %ebp
0843091f +0x01:  mov    %esp,%ebp
08430921 +0x03:  mov    0x8(%ebp),%eax
08430924 +0x06:  movl   $0x0,(%eax)
0843092a +0x0c:  mov    0x8(%ebp),%eax
0843092d +0x0f:  movl   $0x0,0x4(%eax)
08430934 +0x16:  mov    0x8(%ebp),%eax
08430937 +0x19:  movl   $0x0,0x8(%eax)
0843093e +0x20:  mov    0x8(%ebp),%eax
08430941 +0x23:  movl   $0x0,0xc(%eax)
08430948 +0x2a:  mov    0x8(%ebp),%eax
0843094b +0x2d:  movl   $0x0,0x10(%eax)
08430952 +0x34:  mov    0x8(%ebp),%eax
08430955 +0x37:  movl   $0x0,0x14(%eax)
0843095c +0x3e:  mov    0x8(%ebp),%eax
0843095f +0x41:  movl   $0x0,0x18(%eax)
08430966 +0x48:  mov    0x8(%ebp),%eax
08430969 +0x4b:  mov    $0x0,%edx
0843096e +0x50:  mov    %edx,0x1c(%eax)
08430971 +0x53:  mov    0x8(%ebp),%eax
08430974 +0x56:  mov    $0x0,%edx
08430979 +0x5b:  mov    %edx,0x20(%eax)
0843097c +0x5e:  pop    %ebp
0843097d +0x5f:  ret
```

## 反编译 C

```c
// DB_UpdatePvPResult::dispatch @ 0x843091e

/* school_info() */

void __thiscall
DB_UpdatePvPResult::dispatch(int,int,Stream*)::school_info::school_info(school_info *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  return;
}
```
