# DropItem

`_ZN8WarField8DropItemE8map_item`

`WarField::DropItem(map_item)`

| 类 | 地址 |
|---|---|
| `WarField` | `0x086ba190` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ba190  _ZN8WarField8DropItemE8map_item
#           WarField::DropItem(map_item)
# range [0x086ba190, 0x086ba1e9]
086ba190 +0x00:  push   %ebp
086ba191 +0x01:  mov    %esp,%ebp
086ba193 +0x03:  push   %edi
086ba194 +0x04:  push   %esi
086ba195 +0x05:  push   %ebx
086ba196 +0x06:  sub    $0x8c,%esp
086ba19c +0x0c:  mov    0x8(%ebp),%eax
086ba19f +0x0f:  mov    0x48(%eax),%eax
086ba1a2 +0x12:  mov    %eax,-0x1c(%ebp)
086ba1a5 +0x15:  lea    0x1(%eax),%edx
086ba1a8 +0x18:  mov    0x8(%ebp),%eax
086ba1ab +0x1b:  mov    %edx,0x48(%eax)
086ba1ae +0x1e:  mov    -0x1c(%ebp),%eax
086ba1b1 +0x21:  mov    %eax,0x10(%ebp)
086ba1b4 +0x24:  mov    0x8(%ebp),%eax
086ba1b7 +0x27:  add    $0x8,%eax
086ba1ba +0x2a:  mov    %eax,-0x2c(%ebp)
086ba1bd +0x2d:  lea    0x4(%esp),%edx
086ba1c1 +0x31:  lea    0xc(%ebp),%ebx
086ba1c4 +0x34:  mov    $0x15,%eax
086ba1c9 +0x39:  mov    %edx,%edi
086ba1cb +0x3b:  mov    %ebx,%esi
086ba1cd +0x3d:  mov    %eax,%ecx
086ba1cf +0x3f:  rep movsl %ds:(%esi),%es:(%edi)
086ba1d1 +0x41:  mov    -0x2c(%ebp),%eax
086ba1d4 +0x44:  mov    %eax,(%esp)
086ba1d7 +0x47:  call   081517e0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1115>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1115
086ba1dc +0x4c:  mov    -0x1c(%ebp),%eax
086ba1df +0x4f:  add    $0x8c,%esp
086ba1e5 +0x55:  pop    %ebx
086ba1e6 +0x56:  pop    %esi
086ba1e7 +0x57:  pop    %edi
086ba1e8 +0x58:  pop    %ebp
086ba1e9 +0x59:  ret
```

## 反编译 C

```c
// WarField::DropItem @ 0x86ba190

/* WarField::DropItem(map_item) */

int WarField::DropItem(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iStack0000000c;
  undefined4 local_98 [26];
  int local_30;
  int local_20;
  
  local_20 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = local_20 + 1;
  iStack0000000c = local_20;
  local_30 = param_1 + 8;
  puVar2 = (undefined4 *)&stack0x00000008;
  puVar3 = local_98;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  MapInfo::Add_Item(local_30);
  return local_20;
}
```
