# reset

`_ZN8WongWork9CBossPlay5resetEv`

`WongWork::CBossPlay::reset()`

| 类 | 地址 |
|---|---|
| `WongWork::CBossPlay` | `0x08149120` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08149120  _ZN8WongWork9CBossPlay5resetEv
#           WongWork::CBossPlay::reset()
# range [0x08149120, 0x0814926d]
08149120 +0x000:  push   %ebp
08149121 +0x001:  mov    %esp,%ebp
08149123 +0x003:  sub    $0x28,%esp
08149126 +0x006:  mov    0x8(%ebp),%eax
08149129 +0x009:  movl   $0x0,0x4(%eax)
08149130 +0x010:  mov    0x8(%ebp),%eax
08149133 +0x013:  movl   $0x0,0x8(%eax)
0814913a +0x01a:  mov    0x8(%ebp),%eax
0814913d +0x01d:  movb   $0x0,0xc(%eax)
08149141 +0x021:  mov    0x8(%ebp),%eax
08149144 +0x024:  add    $0xd,%eax
08149147 +0x027:  movl   $0x4,0x8(%esp)
0814914f +0x02f:  movl   $0x0,0x4(%esp)
08149157 +0x037:  mov    %eax,(%esp)
0814915a +0x03a:  call   0807dcc0 <_init+0x5b8>
0814915f +0x03f:  mov    0x8(%ebp),%eax
08149162 +0x042:  add    $0x11,%eax
08149165 +0x045:  movl   $0x4,0x8(%esp)
0814916d +0x04d:  movl   $0x0,0x4(%esp)
08149175 +0x055:  mov    %eax,(%esp)
08149178 +0x058:  call   0807dcc0 <_init+0x5b8>
0814917d +0x05d:  mov    0x8(%ebp),%eax
08149180 +0x060:  add    $0x18,%eax
08149183 +0x063:  movl   $0x10,0x8(%esp)
0814918b +0x06b:  movl   $0x0,0x4(%esp)
08149193 +0x073:  mov    %eax,(%esp)
08149196 +0x076:  call   0807dcc0 <_init+0x5b8>
0814919b +0x07b:  movl   $0x0,-0x10(%ebp)
081491a2 +0x082:  jmp    0814921c <+0xfc>
081491a4 +0x084:  movl   $0x0,-0xc(%ebp)
081491ab +0x08b:  jmp    0814920d <+0xed>
081491ad +0x08d:  mov    -0x10(%ebp),%eax
081491b0 +0x090:  mov    0x8(%ebp),%edx
081491b3 +0x093:  imul   $0x268,%eax,%eax
081491b9 +0x099:  lea    (%edx,%eax,1),%eax
081491bc +0x09c:  add    $0x28,%eax
081491bf +0x09f:  movl   $0x0,(%eax)
081491c5 +0x0a5:  mov    -0x10(%ebp),%eax
081491c8 +0x0a8:  mov    -0xc(%ebp),%edx
081491cb +0x0ab:  imul   $0x3d,%edx,%edx
081491ce +0x0ae:  imul   $0x268,%eax,%eax
081491d4 +0x0b4:  lea    (%edx,%eax,1),%eax
081491d7 +0x0b7:  add    $0x20,%eax
081491da +0x0ba:  add    0x8(%ebp),%eax
081491dd +0x0bd:  add    $0xc,%eax
081491e0 +0x0c0:  mov    %eax,(%esp)
081491e3 +0x0c3:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
081491e8 +0x0c8:  mov    -0x10(%ebp),%edx
081491eb +0x0cb:  mov    -0xc(%ebp),%ecx
081491ee +0x0ce:  mov    0x8(%ebp),%eax
081491f1 +0x0d1:  imul   $0x3d,%ecx,%ecx
081491f4 +0x0d4:  imul   $0x268,%edx,%edx
081491fa +0x0da:  lea    (%ecx,%edx,1),%edx
081491fd +0x0dd:  add    %edx,%eax
081491ff +0x0df:  add    $0x20,%eax
08149202 +0x0e2:  movl   $0xffffffff,0xe(%eax)
08149209 +0x0e9:  addl   $0x1,-0xc(%ebp)
0814920d +0x0ed:  cmpl   $0x9,-0xc(%ebp)
08149211 +0x0f1:  setle  %al
08149214 +0x0f4:  test   %al,%al
08149216 +0x0f6:  jne    081491ad <+0x8d>
08149218 +0x0f8:  addl   $0x1,-0x10(%ebp)
0814921c +0x0fc:  cmpl   $0x3,-0x10(%ebp)
08149220 +0x100:  setle  %al
08149223 +0x103:  test   %al,%al
08149225 +0x105:  jne    081491a4 <+0x84>
0814922b +0x10b:  mov    0x8(%ebp),%eax
0814922e +0x10e:  add    $0x9c8,%eax
08149233 +0x113:  movl   $0x10,0x8(%esp)
0814923b +0x11b:  movl   $0x0,0x4(%esp)
08149243 +0x123:  mov    %eax,(%esp)
08149246 +0x126:  call   0807dcc0 <_init+0x5b8>
0814924b +0x12b:  mov    0x8(%ebp),%eax
0814924e +0x12e:  add    $0x9d8,%eax
08149253 +0x133:  movl   $0x10,0x8(%esp)
0814925b +0x13b:  movl   $0x0,0x4(%esp)
08149263 +0x143:  mov    %eax,(%esp)
08149266 +0x146:  call   0807dcc0 <_init+0x5b8>
0814926b +0x14b:  leave
0814926c +0x14c:  ret
0814926d +0x14d:  nop
```

## 反编译 C

```c
// WongWork::CBossPlay::reset @ 0x8149120

/* WongWork::CBossPlay::reset() */

void __thiscall WongWork::CBossPlay::reset(CBossPlay *this)

{
  int local_14;
  int local_10;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (CBossPlay)0x0;
  memset(this + 0xd,0,4);
  memset(this + 0x11,0,4);
  memset(this + 0x18,0,0x10);
  for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
    for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
      *(undefined4 *)(this + local_14 * 0x268 + 0x28) = 0;
      Inven_Item::reset((Inven_Item *)(this + local_10 * 0x3d + local_14 * 0x268 + 0x2c));
      *(undefined4 *)(this + local_10 * 0x3d + local_14 * 0x268 + 0x2e) = 0xffffffff;
    }
  }
  memset(this + 0x9c8,0,0x10);
  memset(this + 0x9d8,0,0x10);
  return;
}
```
