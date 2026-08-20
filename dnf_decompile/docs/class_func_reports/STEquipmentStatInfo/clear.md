# clear

`_ZN19STEquipmentStatInfo5clearEv`

`STEquipmentStatInfo::clear()`

| 类 | 地址 |
|---|---|
| `STEquipmentStatInfo` | `0x0898d272` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0898d272  _ZN19STEquipmentStatInfo5clearEv
#           STEquipmentStatInfo::clear()
# range [0x0898d272, 0x0898d37b]
0898d272 +0x000:  push   %ebp
0898d273 +0x001:  mov    %esp,%ebp
0898d275 +0x003:  sub    $0x10,%esp
0898d278 +0x006:  mov    0x8(%ebp),%eax
0898d27b +0x009:  movl   $0x0,(%eax)
0898d281 +0x00f:  mov    0x8(%ebp),%eax
0898d284 +0x012:  movl   $0x0,0x4(%eax)
0898d28b +0x019:  mov    0x8(%ebp),%eax
0898d28e +0x01c:  movl   $0x0,0x8(%eax)
0898d295 +0x023:  mov    0x8(%ebp),%eax
0898d298 +0x026:  movl   $0x0,0xc(%eax)
0898d29f +0x02d:  mov    0x8(%ebp),%eax
0898d2a2 +0x030:  movl   $0x0,0x10(%eax)
0898d2a9 +0x037:  mov    0x8(%ebp),%eax
0898d2ac +0x03a:  movl   $0x0,0x14(%eax)
0898d2b3 +0x041:  mov    0x8(%ebp),%eax
0898d2b6 +0x044:  movl   $0x0,0x18(%eax)
0898d2bd +0x04b:  mov    0x8(%ebp),%eax
0898d2c0 +0x04e:  movl   $0x0,0x1c(%eax)
0898d2c7 +0x055:  mov    0x8(%ebp),%eax
0898d2ca +0x058:  movl   $0x0,0x20(%eax)
0898d2d1 +0x05f:  mov    0x8(%ebp),%eax
0898d2d4 +0x062:  movl   $0x0,0x24(%eax)
0898d2db +0x069:  movl   $0x0,-0xc(%ebp)
0898d2e2 +0x070:  jmp    0898d2f9 <+0x87>
0898d2e4 +0x072:  mov    -0xc(%ebp),%edx
0898d2e7 +0x075:  mov    0x8(%ebp),%eax
0898d2ea +0x078:  add    $0x8,%edx
0898d2ed +0x07b:  movl   $0x0,0x8(%eax,%edx,4)
0898d2f5 +0x083:  addl   $0x1,-0xc(%ebp)
0898d2f9 +0x087:  cmpl   $0x3,-0xc(%ebp)
0898d2fd +0x08b:  setle  %al
0898d300 +0x08e:  test   %al,%al
0898d302 +0x090:  jne    0898d2e4 <+0x72>
0898d304 +0x092:  mov    0x8(%ebp),%eax
0898d307 +0x095:  movl   $0x0,0x38(%eax)
0898d30e +0x09c:  movl   $0x0,-0x8(%ebp)
0898d315 +0x0a3:  jmp    0898d32c <+0xba>
0898d317 +0x0a5:  mov    -0x8(%ebp),%edx
0898d31a +0x0a8:  mov    0x8(%ebp),%eax
0898d31d +0x0ab:  add    $0xc,%edx
0898d320 +0x0ae:  movl   $0x0,0xc(%eax,%edx,4)
0898d328 +0x0b6:  addl   $0x1,-0x8(%ebp)
0898d32c +0x0ba:  cmpl   $0x10,-0x8(%ebp)
0898d330 +0x0be:  setle  %al
0898d333 +0x0c1:  test   %al,%al
0898d335 +0x0c3:  jne    0898d317 <+0xa5>
0898d337 +0x0c5:  mov    0x8(%ebp),%eax
0898d33a +0x0c8:  movl   $0x0,0x80(%eax)
0898d344 +0x0d2:  mov    0x8(%ebp),%eax
0898d347 +0x0d5:  movl   $0x0,0x84(%eax)
0898d351 +0x0df:  movl   $0x0,-0x4(%ebp)
0898d358 +0x0e6:  jmp    0898d36f <+0xfd>
0898d35a +0x0e8:  mov    -0x4(%ebp),%edx
0898d35d +0x0eb:  mov    0x8(%ebp),%eax
0898d360 +0x0ee:  add    $0x20,%edx
0898d363 +0x0f1:  movl   $0x0,0x8(%eax,%edx,4)
0898d36b +0x0f9:  addl   $0x1,-0x4(%ebp)
0898d36f +0x0fd:  cmpl   $0x3,-0x4(%ebp)
0898d373 +0x101:  setle  %al
0898d376 +0x104:  test   %al,%al
0898d378 +0x106:  jne    0898d35a <+0xe8>
0898d37a +0x108:  leave
0898d37b +0x109:  ret
```

## 反编译 C

```c
// STEquipmentStatInfo::clear @ 0x898d272

/* STEquipmentStatInfo::clear() */

void __thiscall STEquipmentStatInfo::clear(STEquipmentStatInfo *this)

{
  int local_10;
  int local_c;
  int local_8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 8) * 4 + 8) = 0;
  }
  *(undefined4 *)(this + 0x38) = 0;
  for (local_c = 0; local_c < 0x11; local_c = local_c + 1) {
    *(undefined4 *)(this + (local_c + 0xc) * 4 + 0xc) = 0;
  }
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  for (local_8 = 0; local_8 < 4; local_8 = local_8 + 1) {
    *(undefined4 *)(this + (local_8 + 0x20) * 4 + 8) = 0;
  }
  return;
}
```
