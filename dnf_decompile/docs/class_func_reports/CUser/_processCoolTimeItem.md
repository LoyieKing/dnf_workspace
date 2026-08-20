# _processCoolTimeItem

`_ZN5CUser20_processCoolTimeItemEP14CStackableItemjj`

`CUser::_processCoolTimeItem(CStackableItem*, unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865eb0c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865eb0c  _ZN5CUser20_processCoolTimeItemEP14CStackableItemjj
#           CUser::_processCoolTimeItem(CStackableItem*, unsigned int, unsigned int)
# range [0x0865eb0c, 0x0865ec0d]
0865eb0c +0x000:  push   %ebp
0865eb0d +0x001:  mov    %esp,%ebp
0865eb0f +0x003:  sub    $0x38,%esp
0865eb12 +0x006:  mov    0xc(%ebp),%eax
0865eb15 +0x009:  mov    0x2d0(%eax),%ecx
0865eb1b +0x00f:  mov    $0x10624dd3,%edx
0865eb20 +0x014:  mov    %ecx,%eax
0865eb22 +0x016:  imul   %edx
0865eb24 +0x018:  sar    $0x6,%edx
0865eb27 +0x01b:  mov    %ecx,%eax
0865eb29 +0x01d:  sar    $0x1f,%eax
0865eb2c +0x020:  mov    %edx,%ecx
0865eb2e +0x022:  sub    %eax,%ecx
0865eb30 +0x024:  mov    %ecx,%eax
0865eb32 +0x026:  add    0x14(%ebp),%eax
0865eb35 +0x029:  mov    %eax,-0x1c(%ebp)
0865eb38 +0x02c:  mov    0x8(%ebp),%eax
0865eb3b +0x02f:  mov    %eax,(%esp)
0865eb3e +0x032:  call   08696a24 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3279>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3279
0865eb43 +0x037:  mov    %eax,-0x18(%ebp)
0865eb46 +0x03a:  movb   $0x0,-0x11(%ebp)
0865eb4a +0x03e:  movl   $0x0,-0x10(%ebp)
0865eb51 +0x045:  jmp    0865ebb1 <+0xa5>
0865eb53 +0x047:  mov    -0x10(%ebp),%eax
0865eb56 +0x04a:  mov    %eax,0x4(%esp)
0865eb5a +0x04e:  mov    -0x18(%ebp),%eax
0865eb5d +0x051:  mov    %eax,(%esp)
0865eb60 +0x054:  call   0869b0e4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7939>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7939
0865eb65 +0x059:  mov    (%eax),%eax
0865eb67 +0x05b:  cmp    0x10(%ebp),%eax
0865eb6a +0x05e:  sete   %al
0865eb6d +0x061:  test   %al,%al
0865eb6f +0x063:  je     0865ebad <+0xa1>
0865eb71 +0x065:  mov    -0x10(%ebp),%eax
0865eb74 +0x068:  mov    %eax,0x4(%esp)
0865eb78 +0x06c:  mov    -0x18(%ebp),%eax
0865eb7b +0x06f:  mov    %eax,(%esp)
0865eb7e +0x072:  call   0869b0e4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7939>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7939
0865eb83 +0x077:  mov    0x4(%eax),%eax
0865eb86 +0x07a:  mov    %eax,-0xc(%ebp)
0865eb89 +0x07d:  mov    -0x1c(%ebp),%eax
0865eb8c +0x080:  cmp    -0xc(%ebp),%eax
0865eb8f +0x083:  jbe    0865eba9 <+0x9d>
0865eb91 +0x085:  mov    -0x10(%ebp),%eax
0865eb94 +0x088:  mov    %eax,0x4(%esp)
0865eb98 +0x08c:  mov    -0x18(%ebp),%eax
0865eb9b +0x08f:  mov    %eax,(%esp)
0865eb9e +0x092:  call   0869b0e4 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7939>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7939
0865eba3 +0x097:  mov    -0x1c(%ebp),%edx
0865eba6 +0x09a:  mov    %edx,0x4(%eax)
0865eba9 +0x09d:  movb   $0x1,-0x11(%ebp)
0865ebad +0x0a1:  addl   $0x1,-0x10(%ebp)
0865ebb1 +0x0a5:  mov    -0x18(%ebp),%eax
0865ebb4 +0x0a8:  mov    %eax,(%esp)
0865ebb7 +0x0ab:  call   0863d2c0 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17d1>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17d1
0865ebbc +0x0b0:  cmp    -0x10(%ebp),%eax
0865ebbf +0x0b3:  seta   %al
0865ebc2 +0x0b6:  test   %al,%al
0865ebc4 +0x0b8:  jne    0865eb53 <+0x47>
0865ebc6 +0x0ba:  movzbl -0x11(%ebp),%eax
0865ebca +0x0be:  xor    $0x1,%eax
0865ebcd +0x0c1:  test   %al,%al
0865ebcf +0x0c3:  je     0865ebfa <+0xee>
0865ebd1 +0x0c5:  lea    -0x24(%ebp),%eax
0865ebd4 +0x0c8:  mov    %eax,(%esp)
0865ebd7 +0x0cb:  call   08695c48 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x249d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x249d
0865ebdc +0x0d0:  mov    0x10(%ebp),%eax
0865ebdf +0x0d3:  mov    %eax,-0x24(%ebp)
0865ebe2 +0x0d6:  mov    -0x1c(%ebp),%eax
0865ebe5 +0x0d9:  mov    %eax,-0x20(%ebp)
0865ebe8 +0x0dc:  lea    -0x24(%ebp),%eax
0865ebeb +0x0df:  mov    %eax,0x4(%esp)
0865ebef +0x0e3:  mov    -0x18(%ebp),%eax
0865ebf2 +0x0e6:  mov    %eax,(%esp)
0865ebf5 +0x0e9:  call   0869b070 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x78c5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x78c5
0865ebfa +0x0ee:  mov    0x14(%ebp),%eax
0865ebfd +0x0f1:  mov    %eax,0x4(%esp)
0865ec01 +0x0f5:  mov    0x8(%ebp),%eax
0865ec04 +0x0f8:  mov    %eax,(%esp)
0865ec07 +0x0fb:  call   08658b2a <_ZN5CUser22UpdateCoolTimeItemInfoEj>  ; CUser::UpdateCoolTimeItemInfo(unsigned int)
0865ec0c +0x100:  leave
0865ec0d +0x101:  ret
```

## 反编译 C

```c
// CUser::_processCoolTimeItem @ 0x865eb0c

/* CUser::_processCoolTimeItem(CStackableItem*, unsigned int, unsigned int) */

void __thiscall
CUser::_processCoolTimeItem(CUser *this,CStackableItem *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint local_28;
  uint local_24;
  uint local_20;
  vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *local_1c;
  char local_15;
  uint local_14;
  uint local_10;
  
  local_20 = *(int *)(param_1 + 0x2d0) / 1000 + param_3;
  local_1c = (vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>> *)
             CUserCharacInfo::GetCurCharacCoolTimeItemList((CUserCharacInfo *)this);
  local_15 = '\0';
  local_14 = 0;
  while( true ) {
    uVar3 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::size(local_1c);
    if (uVar3 <= local_14) break;
    puVar1 = (uint *)std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                               (local_1c,local_14);
    if (*puVar1 == param_2) {
      iVar2 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                        (local_1c,local_14);
      local_10 = *(uint *)(iVar2 + 4);
      if (local_10 < local_20) {
        iVar2 = std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::operator[]
                          (local_1c,local_14);
        *(uint *)(iVar2 + 4) = local_20;
      }
      local_15 = '\x01';
    }
    local_14 = local_14 + 1;
  }
  if (local_15 != '\x01') {
    ContinuousItemInfo::ContinuousItemInfo((ContinuousItemInfo *)&local_28);
    local_28 = param_2;
    local_24 = local_20;
    std::vector<ContinuousItemInfo,std::allocator<ContinuousItemInfo>>::push_back
              (local_1c,(ContinuousItemInfo *)&local_28);
  }
  UpdateCoolTimeItemInfo(this,param_3);
  return;
}
```
