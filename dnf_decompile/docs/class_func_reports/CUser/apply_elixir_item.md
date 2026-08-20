# apply_elixir_item

`_ZN5CUser17apply_elixir_itemER15_Additioal_infoRSt4pairIiiE`

`CUser::apply_elixir_item(_Additioal_info&, std::pair<int, int>&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08665274` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08665274  _ZN5CUser17apply_elixir_itemER15_Additioal_infoRSt4pairIiiE
#           CUser::apply_elixir_item(_Additioal_info&, std::pair<int, int>&)
# range [0x08665274, 0x086653ff]
08665274 +0x000:  push   %ebp
08665275 +0x001:  mov    %esp,%ebp
08665277 +0x003:  push   %ebx
08665278 +0x004:  sub    $0x10,%esp
0866527b +0x007:  mov    0x10(%ebp),%eax
0866527e +0x00a:  mov    (%eax),%eax
08665280 +0x00c:  sub    $0x40f,%eax
08665285 +0x011:  cmp    $0x7,%eax
08665288 +0x014:  ja     086653fa <+0x186>
0866528e +0x01a:  mov    &data#2da2606a(.rodata)(,%eax,4),%eax
08665295 +0x021:  jmp    *%eax
08665297 +0x023:  mov    0xc(%ebp),%eax
0866529a +0x026:  movzwl 0x8(%eax),%ecx
0866529e +0x02a:  mov    0x10(%ebp),%eax
086652a1 +0x02d:  mov    0x4(%eax),%eax
086652a4 +0x030:  mov    %eax,%edx
086652a6 +0x032:  mov    %edx,%eax
086652a8 +0x034:  shl    $0x2,%eax
086652ab +0x037:  add    %edx,%eax
086652ad +0x039:  lea    0x0(,%eax,4),%edx
086652b4 +0x040:  add    %edx,%eax
086652b6 +0x042:  add    %eax,%eax
086652b8 +0x044:  lea    (%ecx,%eax,1),%edx
086652bb +0x047:  mov    0xc(%ebp),%eax
086652be +0x04a:  mov    %dx,0x8(%eax)
086652c2 +0x04e:  jmp    086653fa <+0x186>
086652c7 +0x053:  mov    0xc(%ebp),%eax
086652ca +0x056:  movzwl 0xc(%eax),%ecx
086652ce +0x05a:  mov    0x10(%ebp),%eax
086652d1 +0x05d:  mov    0x4(%eax),%eax
086652d4 +0x060:  mov    %eax,%edx
086652d6 +0x062:  mov    %edx,%eax
086652d8 +0x064:  shl    $0x2,%eax
086652db +0x067:  add    %edx,%eax
086652dd +0x069:  lea    0x0(,%eax,4),%edx
086652e4 +0x070:  add    %edx,%eax
086652e6 +0x072:  add    %eax,%eax
086652e8 +0x074:  lea    (%ecx,%eax,1),%edx
086652eb +0x077:  mov    0xc(%ebp),%eax
086652ee +0x07a:  mov    %dx,0xc(%eax)
086652f2 +0x07e:  jmp    086653fa <+0x186>
086652f7 +0x083:  mov    0xc(%ebp),%eax
086652fa +0x086:  movzwl 0xa(%eax),%ecx
086652fe +0x08a:  mov    0x10(%ebp),%eax
08665301 +0x08d:  mov    0x4(%eax),%eax
08665304 +0x090:  mov    %eax,%edx
08665306 +0x092:  mov    %edx,%eax
08665308 +0x094:  shl    $0x2,%eax
0866530b +0x097:  add    %edx,%eax
0866530d +0x099:  lea    0x0(,%eax,4),%edx
08665314 +0x0a0:  add    %edx,%eax
08665316 +0x0a2:  add    %eax,%eax
08665318 +0x0a4:  lea    (%ecx,%eax,1),%edx
0866531b +0x0a7:  mov    0xc(%ebp),%eax
0866531e +0x0aa:  mov    %dx,0xa(%eax)
08665322 +0x0ae:  jmp    086653fa <+0x186>
08665327 +0x0b3:  mov    0xc(%ebp),%eax
0866532a +0x0b6:  movzwl 0xe(%eax),%ecx
0866532e +0x0ba:  mov    0x10(%ebp),%eax
08665331 +0x0bd:  mov    0x4(%eax),%eax
08665334 +0x0c0:  mov    %eax,%edx
08665336 +0x0c2:  mov    %edx,%eax
08665338 +0x0c4:  shl    $0x2,%eax
0866533b +0x0c7:  add    %edx,%eax
0866533d +0x0c9:  lea    0x0(,%eax,4),%edx
08665344 +0x0d0:  add    %edx,%eax
08665346 +0x0d2:  add    %eax,%eax
08665348 +0x0d4:  lea    (%ecx,%eax,1),%edx
0866534b +0x0d7:  mov    0xc(%ebp),%eax
0866534e +0x0da:  mov    %dx,0xe(%eax)
08665352 +0x0de:  jmp    086653fa <+0x186>
08665357 +0x0e3:  mov    0xc(%ebp),%eax
0866535a +0x0e6:  mov    (%eax),%edx
0866535c +0x0e8:  mov    0x10(%ebp),%eax
0866535f +0x0eb:  mov    0x4(%eax),%eax
08665362 +0x0ee:  imul   $0xfa,%eax,%eax
08665368 +0x0f4:  add    %eax,%edx
0866536a +0x0f6:  mov    0xc(%ebp),%eax
0866536d +0x0f9:  mov    %edx,(%eax)
0866536f +0x0fb:  jmp    086653fa <+0x186>
08665374 +0x100:  mov    0xc(%ebp),%eax
08665377 +0x103:  mov    0x4(%eax),%edx
0866537a +0x106:  mov    0x10(%ebp),%eax
0866537d +0x109:  mov    0x4(%eax),%eax
08665380 +0x10c:  imul   $0xfa,%eax,%eax
08665386 +0x112:  add    %eax,%edx
08665388 +0x114:  mov    0xc(%ebp),%eax
0866538b +0x117:  mov    %edx,0x4(%eax)
0866538e +0x11a:  jmp    086653fa <+0x186>
08665390 +0x11c:  mov    0xc(%ebp),%eax
08665393 +0x11f:  mov    0x42(%eax),%ecx
08665396 +0x122:  mov    0x10(%ebp),%eax
08665399 +0x125:  mov    0x4(%eax),%edx
0866539c +0x128:  mov    %edx,%eax
0866539e +0x12a:  shl    $0x2,%eax
086653a1 +0x12d:  add    %edx,%eax
086653a3 +0x12f:  add    %eax,%eax
086653a5 +0x131:  lea    (%ecx,%eax,1),%edx
086653a8 +0x134:  mov    0xc(%ebp),%eax
086653ab +0x137:  mov    %edx,0x42(%eax)
086653ae +0x13a:  jmp    086653fa <+0x186>
086653b0 +0x13c:  movl   $0x0,-0x8(%ebp)
086653b7 +0x143:  jmp    086653ef <+0x17b>
086653b9 +0x145:  mov    -0x8(%ebp),%ecx
086653bc +0x148:  mov    -0x8(%ebp),%edx
086653bf +0x14b:  mov    0xc(%ebp),%eax
086653c2 +0x14e:  add    $0x8,%edx
086653c5 +0x151:  movzwl (%eax,%edx,2),%eax
086653c9 +0x155:  mov    %eax,%ebx
086653cb +0x157:  mov    0x10(%ebp),%eax
086653ce +0x15a:  mov    0x4(%eax),%eax
086653d1 +0x15d:  mov    %eax,%edx
086653d3 +0x15f:  mov    %edx,%eax
086653d5 +0x161:  shl    $0x2,%eax
086653d8 +0x164:  add    %edx,%eax
086653da +0x166:  add    %eax,%eax
086653dc +0x168:  lea    (%ebx,%eax,1),%eax
086653df +0x16b:  mov    %eax,%edx
086653e1 +0x16d:  mov    0xc(%ebp),%eax
086653e4 +0x170:  add    $0x8,%ecx
086653e7 +0x173:  mov    %dx,(%eax,%ecx,2)
086653eb +0x177:  addl   $0x1,-0x8(%ebp)
086653ef +0x17b:  cmpl   $0x3,-0x8(%ebp)
086653f3 +0x17f:  setle  %al
086653f6 +0x182:  test   %al,%al
086653f8 +0x184:  jne    086653b9 <+0x145>
086653fa +0x186:  add    $0x10,%esp
086653fd +0x189:  pop    %ebx
086653fe +0x18a:  pop    %ebp
086653ff +0x18b:  ret
```

## 反编译 C

```c
// CUser::apply_elixir_item @ 0x8665274

/* CUser::apply_elixir_item(_Additioal_info&, std::pair<int, int>&) */

void __thiscall CUser::apply_elixir_item(CUser *this,_Additioal_info *param_1,pair *param_2)

{
  int local_c;
  
  switch(*(undefined4 *)param_2) {
  case 0x40f:
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + (short)*(undefined4 *)(param_2 + 4) * 0x32;
    break;
  case 0x410:
    *(short *)(param_1 + 0xc) =
         *(short *)(param_1 + 0xc) + (short)*(undefined4 *)(param_2 + 4) * 0x32;
    break;
  case 0x411:
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + (short)*(undefined4 *)(param_2 + 4) * 0x32
    ;
    break;
  case 0x412:
    *(short *)(param_1 + 0xe) =
         *(short *)(param_1 + 0xe) + (short)*(undefined4 *)(param_2 + 4) * 0x32;
    break;
  case 0x413:
    *(int *)param_1 = *(int *)param_1 + *(int *)(param_2 + 4) * 0xfa;
    break;
  case 0x414:
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + *(int *)(param_2 + 4) * 0xfa;
    break;
  case 0x415:
    *(int *)(param_1 + 0x42) = *(int *)(param_1 + 0x42) + *(int *)(param_2 + 4) * 10;
    break;
  case 0x416:
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      *(short *)(param_1 + (local_c + 8) * 2) =
           *(short *)(param_1 + (local_c + 8) * 2) + (short)*(undefined4 *)(param_2 + 4) * 10;
    }
  }
  return;
}
```
