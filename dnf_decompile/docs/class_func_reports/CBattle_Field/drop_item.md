# drop_item

`_ZN13CBattle_Field9drop_itemE8map_item`

`CBattle_Field::drop_item(map_item)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x0830db84` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0830db84  _ZN13CBattle_Field9drop_itemE8map_item
#           CBattle_Field::drop_item(map_item)
# range [0x0830db84, 0x0830dbdd]
0830db84 +0x00:  push   %ebp
0830db85 +0x01:  mov    %esp,%ebp
0830db87 +0x03:  push   %edi
0830db88 +0x04:  push   %esi
0830db89 +0x05:  push   %ebx
0830db8a +0x06:  sub    $0x7c,%esp
0830db8d +0x09:  mov    0x8(%ebp),%eax
0830db90 +0x0c:  mov    %eax,(%esp)
0830db93 +0x0f:  call   0822cbcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2276>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2276
0830db98 +0x14:  mov    %eax,-0x20(%ebp)
0830db9b +0x17:  mov    -0x20(%ebp),%eax
0830db9e +0x1a:  mov    0x40(%eax),%eax
0830dba1 +0x1d:  mov    %eax,-0x1c(%ebp)
0830dba4 +0x20:  lea    0x1(%eax),%edx
0830dba7 +0x23:  mov    -0x20(%ebp),%eax
0830dbaa +0x26:  mov    %edx,0x40(%eax)
0830dbad +0x29:  mov    -0x1c(%ebp),%eax
0830dbb0 +0x2c:  mov    %eax,0x10(%ebp)
0830dbb3 +0x2f:  lea    0x4(%esp),%edx
0830dbb7 +0x33:  lea    0xc(%ebp),%ebx
0830dbba +0x36:  mov    $0x15,%eax
0830dbbf +0x3b:  mov    %edx,%edi
0830dbc1 +0x3d:  mov    %ebx,%esi
0830dbc3 +0x3f:  mov    %eax,%ecx
0830dbc5 +0x41:  rep movsl %ds:(%esi),%es:(%edi)
0830dbc7 +0x43:  mov    -0x20(%ebp),%eax
0830dbca +0x46:  mov    %eax,(%esp)
0830dbcd +0x49:  call   081517e0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1115>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1115
0830dbd2 +0x4e:  mov    -0x1c(%ebp),%eax
0830dbd5 +0x51:  add    $0x7c,%esp
0830dbd8 +0x54:  pop    %ebx
0830dbd9 +0x55:  pop    %esi
0830dbda +0x56:  pop    %edi
0830dbdb +0x57:  pop    %ebp
0830dbdc +0x58:  ret
0830dbdd +0x59:  nop
```

## 反编译 C

```c
// CBattle_Field::drop_item @ 0x830db84

/* CBattle_Field::drop_item(map_item) */

int CBattle_Field::drop_item(CBattle_Field *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 local_88 [25];
  int local_24;
  int local_20;
  
  bVar4 = 0;
  local_24 = GetCurrentMapInfo(param_1);
  local_20 = *(int *)(local_24 + 0x40);
  *(int *)(local_24 + 0x40) = local_20 + 1;
  param_3 = local_20;
  puVar2 = &param_2;
  puVar3 = local_88;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  MapInfo::Add_Item(local_24);
  return local_20;
}
```
