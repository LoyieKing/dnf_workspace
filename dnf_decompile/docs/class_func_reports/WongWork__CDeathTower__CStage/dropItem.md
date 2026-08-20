# dropItem

`_ZN8WongWork11CDeathTower6CStage8dropItemER8map_item`

`WongWork::CDeathTower::CStage::dropItem(map_item&)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower::CStage` | `0x084616a8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084616a8  _ZN8WongWork11CDeathTower6CStage8dropItemER8map_item
#           WongWork::CDeathTower::CStage::dropItem(map_item&)
# range [0x084616a8, 0x08461707]
084616a8 +0x00:  push   %ebp
084616a9 +0x01:  mov    %esp,%ebp
084616ab +0x03:  push   %edi
084616ac +0x04:  push   %esi
084616ad +0x05:  push   %ebx
084616ae +0x06:  sub    $0x8c,%esp
084616b4 +0x0c:  mov    0x8(%ebp),%eax
084616b7 +0x0f:  mov    0x4c(%eax),%eax
084616ba +0x12:  mov    %eax,-0x1c(%ebp)
084616bd +0x15:  lea    0x1(%eax),%edx
084616c0 +0x18:  mov    0x8(%ebp),%eax
084616c3 +0x1b:  mov    %edx,0x4c(%eax)
084616c6 +0x1e:  mov    0xc(%ebp),%eax
084616c9 +0x21:  mov    -0x1c(%ebp),%edx
084616cc +0x24:  mov    %edx,0x4(%eax)
084616cf +0x27:  mov    0x8(%ebp),%eax
084616d2 +0x2a:  add    $0xc,%eax
084616d5 +0x2d:  mov    %eax,-0x2c(%ebp)
084616d8 +0x30:  mov    0xc(%ebp),%eax
084616db +0x33:  lea    0x4(%esp),%edx
084616df +0x37:  mov    %eax,%ebx
084616e1 +0x39:  mov    $0x15,%eax
084616e6 +0x3e:  mov    %edx,%edi
084616e8 +0x40:  mov    %ebx,%esi
084616ea +0x42:  mov    %eax,%ecx
084616ec +0x44:  rep movsl %ds:(%esi),%es:(%edi)
084616ee +0x46:  mov    -0x2c(%ebp),%eax
084616f1 +0x49:  mov    %eax,(%esp)
084616f4 +0x4c:  call   081517e0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1115>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1115
084616f9 +0x51:  mov    -0x1c(%ebp),%eax
084616fc +0x54:  add    $0x8c,%esp
08461702 +0x5a:  pop    %ebx
08461703 +0x5b:  pop    %esi
08461704 +0x5c:  pop    %edi
08461705 +0x5d:  pop    %ebp
08461706 +0x5e:  ret
08461707 +0x5f:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::CStage::dropItem @ 0x84616a8

/* WongWork::CDeathTower::CStage::dropItem(map_item&) */

int __thiscall WongWork::CDeathTower::CStage::dropItem(CStage *this,map_item *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_98 [26];
  CStage *local_30;
  int local_20;
  
  local_20 = *(int *)(this + 0x4c);
  *(int *)(this + 0x4c) = local_20 + 1;
  *(int *)(param_1 + 4) = local_20;
  local_30 = this + 0xc;
  puVar2 = local_98;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    puVar2 = puVar2 + 1;
  }
  MapInfo::Add_Item(local_30);
  return local_20;
}
```
