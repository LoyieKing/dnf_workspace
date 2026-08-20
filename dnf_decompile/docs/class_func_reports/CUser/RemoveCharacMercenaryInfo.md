# RemoveCharacMercenaryInfo

`_ZN5CUser25RemoveCharacMercenaryInfoEj`

`CUser::RemoveCharacMercenaryInfo(unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868e672` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868e672  _ZN5CUser25RemoveCharacMercenaryInfoEj
#           CUser::RemoveCharacMercenaryInfo(unsigned int)
# range [0x0868e672, 0x0868e691]
0868e672 +0x00:  push   %ebp
0868e673 +0x01:  mov    %esp,%ebp
0868e675 +0x03:  sub    $0x18,%esp
0868e678 +0x06:  mov    0x8(%ebp),%eax
0868e67b +0x09:  lea    0x6ef6c(%eax),%edx
0868e681 +0x0f:  mov    0xc(%ebp),%eax
0868e684 +0x12:  mov    %eax,0x4(%esp)
0868e688 +0x16:  mov    %edx,(%esp)
0868e68b +0x19:  call   081b441a <_ZN20UserMercenaryInfoMgr12RemoveCharacEj>  ; UserMercenaryInfoMgr::RemoveCharac(unsigned int)
0868e690 +0x1e:  leave
0868e691 +0x1f:  ret
```

## 反编译 C

```c
// CUser::RemoveCharacMercenaryInfo @ 0x868e672

/* CUser::RemoveCharacMercenaryInfo(unsigned int) */

void __thiscall CUser::RemoveCharacMercenaryInfo(CUser *this,uint param_1)

{
  UserMercenaryInfoMgr::RemoveCharac((UserMercenaryInfoMgr *)(this + 0x6ef6c),param_1);
  return;
}
```
