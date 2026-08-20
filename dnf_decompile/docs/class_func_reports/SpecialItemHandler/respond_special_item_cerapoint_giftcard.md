# respond_special_item_cerapoint_giftcard

`_ZN18SpecialItemHandler39respond_special_item_cerapoint_giftcardEiRK19STSpecailItem_ParamR20STSpecailItem_Result`

`SpecialItemHandler::respond_special_item_cerapoint_giftcard(int, STSpecailItem_Param const&, STSpecailItem_Result&)`

| 类 | 地址 |
|---|---|
| `SpecialItemHandler` | `0x0827de4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827de4e  _ZN18SpecialItemHandler39respond_special_item_cerapoint_giftcardEiRK19STSpecailItem_ParamR20STSpecailItem_Result
#           SpecialItemHandler::respond_special_item_cerapoint_giftcard(int, STSpecailItem_Param const&, STSpecailItem_Result&)
# range [0x0827de4e, 0x0827de9d]
0827de4e +0x00:  push   %ebp
0827de4f +0x01:  mov    %esp,%ebp
0827de51 +0x03:  push   %ebx
0827de52 +0x04:  sub    $0x24,%esp
0827de55 +0x07:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
0827de5a +0x0c:  mov    (%eax),%eax
0827de5c +0x0e:  add    $0xc,%eax
0827de5f +0x11:  mov    (%eax),%ebx
0827de61 +0x13:  mov    0x10(%ebp),%eax
0827de64 +0x16:  mov    0x8(%eax),%eax
0827de67 +0x19:  mov    %eax,%ecx
0827de69 +0x1b:  mov    0x10(%ebp),%eax
0827de6c +0x1e:  mov    (%eax),%edx
0827de6e +0x20:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
0827de73 +0x25:  movl   $0x0,0x14(%esp)
0827de7b +0x2d:  movl   $0x0,0x10(%esp)
0827de83 +0x35:  movl   $0x2,0xc(%esp)
0827de8b +0x3d:  mov    %ecx,0x8(%esp)
0827de8f +0x41:  mov    %edx,0x4(%esp)
0827de93 +0x45:  mov    %eax,(%esp)
0827de96 +0x48:  call   *%ebx
0827de98 +0x4a:  add    $0x24,%esp
0827de9b +0x4d:  pop    %ebx
0827de9c +0x4e:  pop    %ebp
0827de9d +0x4f:  ret
```

## 反编译 C

```c
// SpecialItemHandler::respond_special_item_cerapoint_giftcard @ 0x827de4e

/* SpecialItemHandler::respond_special_item_cerapoint_giftcard(int, STSpecailItem_Param const&,
   STSpecailItem_Result&) */

void SpecialItemHandler::respond_special_item_cerapoint_giftcard
               (int param_1,STSpecailItem_Param *param_2,STSpecailItem_Result *param_3)

{
  (**(code **)(*GlobalData::s_pIPGHelper + 0xc))
            (GlobalData::s_pIPGHelper,*(undefined4 *)param_3,*(undefined4 *)(param_3 + 8),2,0,0);
  return;
}
```
