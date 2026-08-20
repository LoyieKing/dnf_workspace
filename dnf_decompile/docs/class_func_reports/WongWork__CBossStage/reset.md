# reset

`_ZN8WongWork10CBossStage5resetEv`

`WongWork::CBossStage::reset()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814bea2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814bea2  _ZN8WongWork10CBossStage5resetEv
#           WongWork::CBossStage::reset()
# range [0x0814bea2, 0x0814bef3]
0814bea2 +0x00:  push   %ebp
0814bea3 +0x01:  mov    %esp,%ebp
0814bea5 +0x03:  sub    $0x18,%esp
0814bea8 +0x06:  mov    0x8(%ebp),%eax
0814beab +0x09:  movl   $0x0,0x9e8(%eax)
0814beb5 +0x13:  mov    0x8(%ebp),%eax
0814beb8 +0x16:  movl   $0x0,0x9ec(%eax)
0814bec2 +0x20:  mov    0x8(%ebp),%eax
0814bec5 +0x23:  add    $0x9f4,%eax
0814beca +0x28:  mov    %eax,(%esp)
0814becd +0x2b:  call   081514ae <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xde3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xde3
0814bed2 +0x30:  mov    0x8(%ebp),%eax
0814bed5 +0x33:  add    $0x9c8,%eax
0814beda +0x38:  movl   $0x10,0x8(%esp)
0814bee2 +0x40:  movl   $0x0,0x4(%esp)
0814beea +0x48:  mov    %eax,(%esp)
0814beed +0x4b:  call   0807dcc0 <_init+0x5b8>
0814bef2 +0x50:  leave
0814bef3 +0x51:  ret
```

## 反编译 C

```c
// WongWork::CBossStage::reset @ 0x814bea2

/* WongWork::CBossStage::reset() */

void __thiscall WongWork::CBossStage::reset(CBossStage *this)

{
  *(undefined4 *)(this + 0x9e8) = 0;
  *(undefined4 *)(this + 0x9ec) = 0;
  MapInfo::Clear((MapInfo *)(this + 0x9f4));
  memset(this + 0x9c8,0,0x10);
  return;
}
```
