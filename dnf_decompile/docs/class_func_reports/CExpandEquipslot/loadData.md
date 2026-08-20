# loadData

`_ZN16CExpandEquipslot8loadDataEP5CUserPc`

`CExpandEquipslot::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x0849a2ca` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849a2ca  _ZN16CExpandEquipslot8loadDataEP5CUserPc
#           CExpandEquipslot::loadData(CUser*, char*)
# range [0x0849a2ca, 0x0849a435]
0849a2ca +0x000:  push   %ebp
0849a2cb +0x001:  mov    %esp,%ebp
0849a2cd +0x003:  push   %ebx
0849a2ce +0x004:  sub    $0x34,%esp
0849a2d1 +0x007:  mov    0x8(%ebp),%eax
0849a2d4 +0x00a:  mov    (%eax),%eax
0849a2d6 +0x00c:  add    $0x1c,%eax
0849a2d9 +0x00f:  mov    (%eax),%edx
0849a2db +0x011:  mov    0x8(%ebp),%eax
0849a2de +0x014:  mov    %eax,(%esp)
0849a2e1 +0x017:  call   *%edx
0849a2e3 +0x019:  mov    0x10(%ebp),%eax
0849a2e6 +0x01c:  mov    %eax,-0x1c(%ebp)
0849a2e9 +0x01f:  movl   $0x1,-0x18(%ebp)
0849a2f0 +0x026:  movl   $0xc,-0x14(%ebp)
0849a2f7 +0x02d:  movl   $0x24,-0x10(%ebp)
0849a2fe +0x034:  movl   $0x0,-0xc(%ebp)
0849a305 +0x03b:  jmp    0849a411 <+0x147>
0849a30a +0x040:  cmpl   $0x0,-0xc(%ebp)
0849a30e +0x044:  je     0849a34c <+0x82>
0849a310 +0x046:  mov    -0xc(%ebp),%ecx
0849a313 +0x049:  mov    $0xaaaaaaab,%edx
0849a318 +0x04e:  mov    %ecx,%eax
0849a31a +0x050:  mul    %edx
0849a31c +0x052:  shr    $0x3,%edx
0849a31f +0x055:  mov    %edx,%eax
0849a321 +0x057:  add    %eax,%eax
0849a323 +0x059:  add    %edx,%eax
0849a325 +0x05b:  shl    $0x2,%eax
0849a328 +0x05e:  mov    %ecx,%edx
0849a32a +0x060:  sub    %eax,%edx
0849a32c +0x062:  test   %edx,%edx
0849a32e +0x064:  jne    0849a34c <+0x82>
0849a330 +0x066:  cmpl   $0xc,-0xc(%ebp)
0849a334 +0x06a:  jne    0849a33f <+0x75>
0849a336 +0x06c:  movl   $0x2,-0x18(%ebp)
0849a33d +0x073:  jmp    0849a34c <+0x82>
0849a33f +0x075:  cmpl   $0xc,-0xc(%ebp)
0849a343 +0x079:  jbe    0849a34c <+0x82>
0849a345 +0x07b:  movl   $0x3,-0x18(%ebp)
0849a34c +0x082:  cmpl   $0x1,-0x18(%ebp)
0849a350 +0x086:  jne    0849a37b <+0xb1>
0849a352 +0x088:  mov    -0xc(%ebp),%eax
0849a355 +0x08b:  imul   $0x3d,%eax,%eax
0849a358 +0x08e:  add    -0x1c(%ebp),%eax
0849a35b +0x091:  lea    0x4(%eax),%edx
0849a35e +0x094:  mov    -0xc(%ebp),%eax
0849a361 +0x097:  imul   $0x3d,%eax,%eax
0849a364 +0x09a:  add    0x8(%ebp),%eax
0849a367 +0x09d:  add    $0x5,%eax
0849a36a +0x0a0:  mov    %edx,0x4(%esp)
0849a36e +0x0a4:  mov    %eax,(%esp)
0849a371 +0x0a7:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0849a376 +0x0ac:  jmp    0849a40d <+0x143>
0849a37b +0x0b1:  cmpl   $0x2,-0x18(%ebp)
0849a37f +0x0b5:  jne    0849a3c5 <+0xfb>
0849a381 +0x0b7:  mov    -0xc(%ebp),%eax
0849a384 +0x0ba:  imul   $0x3d,%eax,%eax
0849a387 +0x0bd:  add    -0x1c(%ebp),%eax
0849a38a +0x0c0:  lea    0x4(%eax),%ebx
0849a38d +0x0c3:  mov    -0xc(%ebp),%ecx
0849a390 +0x0c6:  mov    $0xaaaaaaab,%edx
0849a395 +0x0cb:  mov    %ecx,%eax
0849a397 +0x0cd:  mul    %edx
0849a399 +0x0cf:  shr    $0x3,%edx
0849a39c +0x0d2:  mov    %edx,%eax
0849a39e +0x0d4:  add    %eax,%eax
0849a3a0 +0x0d6:  add    %edx,%eax
0849a3a2 +0x0d8:  shl    $0x2,%eax
0849a3a5 +0x0db:  mov    %ecx,%edx
0849a3a7 +0x0dd:  sub    %eax,%edx
0849a3a9 +0x0df:  imul   $0x3d,%edx,%eax
0849a3ac +0x0e2:  add    $0x2e0,%eax
0849a3b1 +0x0e7:  add    0x8(%ebp),%eax
0849a3b4 +0x0ea:  add    $0x1,%eax
0849a3b7 +0x0ed:  mov    %ebx,0x4(%esp)
0849a3bb +0x0f1:  mov    %eax,(%esp)
0849a3be +0x0f4:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0849a3c3 +0x0f9:  jmp    0849a40d <+0x143>
0849a3c5 +0x0fb:  cmpl   $0x3,-0x18(%ebp)
0849a3c9 +0x0ff:  jne    0849a40d <+0x143>
0849a3cb +0x101:  mov    -0xc(%ebp),%eax
0849a3ce +0x104:  imul   $0x3d,%eax,%eax
0849a3d1 +0x107:  add    -0x1c(%ebp),%eax
0849a3d4 +0x10a:  lea    0x4(%eax),%ebx
0849a3d7 +0x10d:  mov    -0xc(%ebp),%ecx
0849a3da +0x110:  mov    $0xaaaaaaab,%edx
0849a3df +0x115:  mov    %ecx,%eax
0849a3e1 +0x117:  mul    %edx
0849a3e3 +0x119:  shr    $0x3,%edx
0849a3e6 +0x11c:  mov    %edx,%eax
0849a3e8 +0x11e:  add    %eax,%eax
0849a3ea +0x120:  add    %edx,%eax
0849a3ec +0x122:  shl    $0x2,%eax
0849a3ef +0x125:  mov    %ecx,%edx
0849a3f1 +0x127:  sub    %eax,%edx
0849a3f3 +0x129:  imul   $0x3d,%edx,%eax
0849a3f6 +0x12c:  add    $0x5b0,%eax
0849a3fb +0x131:  add    0x8(%ebp),%eax
0849a3fe +0x134:  add    $0xd,%eax
0849a401 +0x137:  mov    %ebx,0x4(%esp)
0849a405 +0x13b:  mov    %eax,(%esp)
0849a408 +0x13e:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0849a40d +0x143:  addl   $0x1,-0xc(%ebp)
0849a411 +0x147:  cmpl   $0x23,-0xc(%ebp)
0849a415 +0x14b:  setbe  %al
0849a418 +0x14e:  test   %al,%al
0849a41a +0x150:  jne    0849a30a <+0x40>
0849a420 +0x156:  mov    0x8(%ebp),%eax
0849a423 +0x159:  mov    %eax,(%esp)
0849a426 +0x15c:  call   080c8bc4 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x1c>  ; global constructors keyed to BestClearTime::BestClearTime()+0x1c
0849a42b +0x161:  mov    $0x1,%eax
0849a430 +0x166:  add    $0x34,%esp
0849a433 +0x169:  pop    %ebx
0849a434 +0x16a:  pop    %ebp
0849a435 +0x16b:  ret
```

## 反编译 C

```c
// CExpandEquipslot::loadData @ 0x849a2ca

/* CExpandEquipslot::loadData(CUser*, char*) */

undefined4 __thiscall
CExpandEquipslot::loadData(CExpandEquipslot *this,CUser *param_1,char *param_2)

{
  int local_1c;
  uint local_10;
  
  (**(code **)(*(int *)this + 0x1c))(this);
  local_1c = 1;
  for (local_10 = 0; local_10 < 0x24; local_10 = local_10 + 1) {
    if ((local_10 != 0) && (local_10 == (local_10 / 0xc) * 0xc)) {
      if (local_10 == 0xc) {
        local_1c = 2;
      }
      else if (0xc < local_10) {
        local_1c = 3;
      }
    }
    if (local_1c == 1) {
      Inven_Item::setCopy((Inven_Item *)(this + local_10 * 0x3d + 5),
                          (Inven_Item *)(param_2 + local_10 * 0x3d + 4));
    }
    else if (local_1c == 2) {
      Inven_Item::setCopy((Inven_Item *)(this + (local_10 % 0xc) * 0x3d + 0x2e1),
                          (Inven_Item *)(param_2 + local_10 * 0x3d + 4));
    }
    else if (local_1c == 3) {
      Inven_Item::setCopy((Inven_Item *)(this + (local_10 % 0xc) * 0x3d + 0x5bd),
                          (Inven_Item *)(param_2 + local_10 * 0x3d + 4));
    }
  }
  charac_expand::CData::alter((CData *)this);
  return 1;
}
```
