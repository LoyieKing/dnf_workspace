# verifyUsableServerType

`_ZN14CStackableItem22verifyUsableServerTypeEv`

`CStackableItem::verifyUsableServerType()`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850e8de` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850e8de  _ZN14CStackableItem22verifyUsableServerTypeEv
#           CStackableItem::verifyUsableServerType()
# range [0x0850e8de, 0x0850e9f3]
0850e8de +0x000:  push   %ebp
0850e8df +0x001:  mov    %esp,%ebp
0850e8e1 +0x003:  sub    $0x38,%esp
0850e8e4 +0x006:  mov    0x8(%ebp),%eax
0850e8e7 +0x009:  add    $0x3b8,%eax
0850e8ec +0x00e:  mov    %eax,(%esp)
0850e8ef +0x011:  call   085174b0 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3ae5>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3ae5
0850e8f4 +0x016:  test   %al,%al
0850e8f6 +0x018:  je     0850e902 <+0x24>
0850e8f8 +0x01a:  mov    $0x1,%eax
0850e8fd +0x01f:  jmp    0850e9f2 <+0x114>
0850e902 +0x024:  movl   $0x0,-0x1c(%ebp)
0850e909 +0x02b:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0850e90e +0x030:  mov    0x1a8(%eax),%eax
0850e914 +0x036:  test   %eax,%eax
0850e916 +0x038:  sete   %al
0850e919 +0x03b:  test   %al,%al
0850e91b +0x03d:  je     0850e924 <+0x46>
0850e91d +0x03f:  movl   $0x1,-0x1c(%ebp)
0850e924 +0x046:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0850e929 +0x04b:  mov    0x1a8(%eax),%eax
0850e92f +0x051:  cmp    $0x2,%eax
0850e932 +0x054:  sete   %al
0850e935 +0x057:  test   %al,%al
0850e937 +0x059:  je     0850e940 <+0x62>
0850e939 +0x05b:  movl   $0x3,-0x1c(%ebp)
0850e940 +0x062:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0850e945 +0x067:  mov    0x1a8(%eax),%eax
0850e94b +0x06d:  cmp    $0x1,%eax
0850e94e +0x070:  sete   %al
0850e951 +0x073:  test   %al,%al
0850e953 +0x075:  je     0850e95c <+0x7e>
0850e955 +0x077:  movl   $0x2,-0x1c(%ebp)
0850e95c +0x07e:  mov    0x8(%ebp),%eax
0850e95f +0x081:  lea    0x3b8(%eax),%edx
0850e965 +0x087:  lea    -0x18(%ebp),%eax
0850e968 +0x08a:  mov    %edx,0x4(%esp)
0850e96c +0x08e:  mov    %eax,(%esp)
0850e96f +0x091:  call   08517518 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3b4d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3b4d
0850e974 +0x096:  sub    $0x4,%esp
0850e977 +0x099:  mov    0x8(%ebp),%eax
0850e97a +0x09c:  lea    0x3b8(%eax),%edx
0850e980 +0x0a2:  lea    -0x10(%ebp),%eax
0850e983 +0x0a5:  mov    %edx,0x4(%esp)
0850e987 +0x0a9:  mov    %eax,(%esp)
0850e98a +0x0ac:  call   08517518 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3b4d>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3b4d
0850e98f +0x0b1:  sub    $0x4,%esp
0850e992 +0x0b4:  mov    0x8(%ebp),%eax
0850e995 +0x0b7:  lea    0x3b8(%eax),%edx
0850e99b +0x0bd:  lea    -0xc(%ebp),%eax
0850e99e +0x0c0:  mov    %edx,0x4(%esp)
0850e9a2 +0x0c4:  mov    %eax,(%esp)
0850e9a5 +0x0c7:  call   085174f4 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3b29>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3b29
0850e9aa +0x0cc:  sub    $0x4,%esp
0850e9ad +0x0cf:  lea    -0x14(%ebp),%eax
0850e9b0 +0x0d2:  lea    -0x1c(%ebp),%edx
0850e9b3 +0x0d5:  mov    %edx,0xc(%esp)
0850e9b7 +0x0d9:  mov    -0x10(%ebp),%edx
0850e9ba +0x0dc:  mov    %edx,0x8(%esp)
0850e9be +0x0e0:  mov    -0xc(%ebp),%edx
0850e9c1 +0x0e3:  mov    %edx,0x4(%esp)
0850e9c5 +0x0e7:  mov    %eax,(%esp)
0850e9c8 +0x0ea:  call   0851753e <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3b73>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3b73
0850e9cd +0x0ef:  sub    $0x4,%esp
0850e9d0 +0x0f2:  lea    -0x18(%ebp),%eax
0850e9d3 +0x0f5:  mov    %eax,0x4(%esp)
0850e9d7 +0x0f9:  lea    -0x14(%ebp),%eax
0850e9da +0x0fc:  mov    %eax,(%esp)
0850e9dd +0x0ff:  call   08517592 <_GLOBAL__I__ZNK5CItem15GetNeedMaterialEv+0x3bc7>  ; global constructors keyed to CItem::GetNeedMaterial() const+0x3bc7
0850e9e2 +0x104:  test   %al,%al
0850e9e4 +0x106:  je     0850e9ed <+0x10f>
0850e9e6 +0x108:  mov    $0x0,%eax
0850e9eb +0x10d:  jmp    0850e9f2 <+0x114>
0850e9ed +0x10f:  mov    $0x1,%eax
0850e9f2 +0x114:  leave
0850e9f3 +0x115:  ret
```

## 反编译 C

```c
// CStackableItem::verifyUsableServerType @ 0x850e8de

/* CStackableItem::verifyUsableServerType() */

undefined4 CStackableItem::verifyUsableServerType(void)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_20;
  __normal_iterator local_1c [4];
  undefined1 local_18 [4];
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = std::
          vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
          ::empty();
  if (cVar1 == '\0') {
    local_20 = 0;
    iVar4 = G_CEnvironment();
    if (*(int *)(iVar4 + 0x1a8) == 0) {
      local_20 = 1;
    }
    iVar4 = G_CEnvironment();
    if (*(int *)(iVar4 + 0x1a8) == 2) {
      local_20 = 3;
    }
    iVar4 = G_CEnvironment();
    if (*(int *)(iVar4 + 0x1a8) == 1) {
      local_20 = 2;
    }
    std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
    ::end();
    std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
    ::end();
    std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>
    ::begin();
    std::
    find<__gnu_cxx::__normal_iterator<StackableAction::UsableServerType*,std::vector<StackableAction::UsableServerType,std::allocator<StackableAction::UsableServerType>>>,StackableAction::UsableServerType>
              (local_18,local_10,local_14,&local_20);
    bVar2 = __gnu_cxx::operator==(local_18,local_1c);
    if (bVar2) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}
```
