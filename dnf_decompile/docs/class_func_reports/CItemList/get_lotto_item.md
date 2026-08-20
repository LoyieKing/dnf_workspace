# get_lotto_item

`_ZN9CItemList14get_lotto_itemEiPc`

`CItemList::get_lotto_item(int, char*)`

| 类 | 地址 |
|---|---|
| `CItemList` | `0x08512230` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08512230  _ZN9CItemList14get_lotto_itemEiPc
#           CItemList::get_lotto_item(int, char*)
# range [0x08512230, 0x08512357]
08512230 +0x000:  push   %ebp
08512231 +0x001:  mov    %esp,%ebp
08512233 +0x003:  sub    $0x28,%esp
08512236 +0x006:  mov    0x10(%ebp),%eax
08512239 +0x009:  mov    %eax,-0x10(%ebp)
0851223c +0x00c:  mov    0xc(%ebp),%eax
0851223f +0x00f:  mov    %eax,0x4(%esp)
08512243 +0x013:  mov    0x8(%ebp),%eax
08512246 +0x016:  mov    %eax,(%esp)
08512249 +0x019:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
0851224e +0x01e:  mov    %eax,-0xc(%ebp)
08512251 +0x021:  cmpl   $0x0,-0xc(%ebp)
08512255 +0x025:  jne    08512294 <+0x64>
08512257 +0x027:  mov    -0x10(%ebp),%eax
0851225a +0x02a:  movl   $0x0,0x2(%eax)
08512261 +0x031:  movl   $0x0,0x4(%esp)
08512269 +0x039:  mov    -0x10(%ebp),%eax
0851226c +0x03c:  mov    %eax,(%esp)
0851226f +0x03f:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08512274 +0x044:  mov    -0x10(%ebp),%eax
08512277 +0x047:  movw   $0x0,0xb(%eax)
0851227d +0x04d:  mov    -0x10(%ebp),%eax
08512280 +0x050:  movb   $0x0,0x1(%eax)
08512284 +0x054:  mov    -0x10(%ebp),%eax
08512287 +0x057:  mov    %eax,(%esp)
0851228a +0x05a:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
0851228f +0x05f:  jmp    08512356 <+0x126>
08512294 +0x064:  mov    -0xc(%ebp),%eax
08512297 +0x067:  mov    %eax,(%esp)
0851229a +0x06a:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0851229f +0x06f:  xor    $0x1,%eax
085122a2 +0x072:  test   %al,%al
085122a4 +0x074:  je     085122e0 <+0xb0>
085122a6 +0x076:  mov    -0x10(%ebp),%eax
085122a9 +0x079:  movl   $0x0,0x2(%eax)
085122b0 +0x080:  movl   $0x0,0x4(%esp)
085122b8 +0x088:  mov    -0x10(%ebp),%eax
085122bb +0x08b:  mov    %eax,(%esp)
085122be +0x08e:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
085122c3 +0x093:  mov    -0x10(%ebp),%eax
085122c6 +0x096:  movw   $0x0,0xb(%eax)
085122cc +0x09c:  mov    -0x10(%ebp),%eax
085122cf +0x09f:  movb   $0x1,0x1(%eax)
085122d3 +0x0a3:  mov    -0x10(%ebp),%eax
085122d6 +0x0a6:  mov    %eax,(%esp)
085122d9 +0x0a9:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
085122de +0x0ae:  jmp    08512356 <+0x126>
085122e0 +0x0b0:  mov    -0xc(%ebp),%eax
085122e3 +0x0b3:  mov    0x2b0(%eax),%eax
085122e9 +0x0b9:  cmp    $0x6,%eax
085122ec +0x0bc:  je     08512344 <+0x114>
085122ee +0x0be:  mov    -0xc(%ebp),%eax
085122f1 +0x0c1:  mov    0x2b0(%eax),%eax
085122f7 +0x0c7:  cmp    $0x7,%eax
085122fa +0x0ca:  je     08512344 <+0x114>
085122fc +0x0cc:  mov    -0xc(%ebp),%eax
085122ff +0x0cf:  mov    0x2b0(%eax),%eax
08512305 +0x0d5:  cmp    $0xd,%eax
08512308 +0x0d8:  je     08512344 <+0x114>
0851230a +0x0da:  mov    -0x10(%ebp),%eax
0851230d +0x0dd:  movl   $0x0,0x2(%eax)
08512314 +0x0e4:  movl   $0x0,0x4(%esp)
0851231c +0x0ec:  mov    -0x10(%ebp),%eax
0851231f +0x0ef:  mov    %eax,(%esp)
08512322 +0x0f2:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08512327 +0x0f7:  mov    -0x10(%ebp),%eax
0851232a +0x0fa:  movw   $0x0,0xb(%eax)
08512330 +0x100:  mov    -0x10(%ebp),%eax
08512333 +0x103:  movb   $0x2,0x1(%eax)
08512337 +0x107:  mov    -0x10(%ebp),%eax
0851233a +0x10a:  mov    %eax,(%esp)
0851233d +0x10d:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
08512342 +0x112:  jmp    08512356 <+0x126>
08512344 +0x114:  mov    -0xc(%ebp),%eax
08512347 +0x117:  mov    0x10(%ebp),%edx
0851234a +0x11a:  mov    %edx,0x4(%esp)
0851234e +0x11e:  mov    %eax,(%esp)
08512351 +0x121:  call   0850ebfc <_ZN14CStackableItem14get_lotto_itemEPc>  ; CStackableItem::get_lotto_item(char*)
08512356 +0x126:  leave
08512357 +0x127:  ret
```

## 反编译 C

```c
// CItemList::get_lotto_item @ 0x8512230

/* CItemList::get_lotto_item(int, char*) */

void __thiscall CItemList::get_lotto_item(CItemList *this,int param_1,char *param_2)

{
  char cVar1;
  CItem *this_00;
  
  this_00 = (CItem *)find_item(this,param_1);
  if (this_00 == (CItem *)0x0) {
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    Inven_Item::set_add_info((Inven_Item *)param_2,0);
    param_2[0xb] = '\0';
    param_2[0xc] = '\0';
    param_2[1] = '\0';
    Inven_Item::ResetItemAttr((Inven_Item *)param_2);
  }
  else {
    cVar1 = CItem::is_stackable(this_00);
    if (cVar1 == '\x01') {
      if (((*(int *)(this_00 + 0x2b0) == 6) || (*(int *)(this_00 + 0x2b0) == 7)) ||
         (*(int *)(this_00 + 0x2b0) == 0xd)) {
        CStackableItem::get_lotto_item((CStackableItem *)this_00,param_2);
      }
      else {
        param_2[2] = '\0';
        param_2[3] = '\0';
        param_2[4] = '\0';
        param_2[5] = '\0';
        Inven_Item::set_add_info((Inven_Item *)param_2,0);
        param_2[0xb] = '\0';
        param_2[0xc] = '\0';
        param_2[1] = '\x02';
        Inven_Item::ResetItemAttr((Inven_Item *)param_2);
      }
    }
    else {
      param_2[2] = '\0';
      param_2[3] = '\0';
      param_2[4] = '\0';
      param_2[5] = '\0';
      Inven_Item::set_add_info((Inven_Item *)param_2,0);
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[1] = '\x01';
      Inven_Item::ResetItemAttr((Inven_Item *)param_2);
    }
  }
  return;
}
```
