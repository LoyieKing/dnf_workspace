# GetRandomItemIndex

`_ZNK15RandomItemTable18GetRandomItemIndexEi`

`RandomItemTable::GetRandomItemIndex(int) const`

| 类 | 地址 |
|---|---|
| `RandomItemTable` | `0x089bbb6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 089bbb6c  _ZNK15RandomItemTable18GetRandomItemIndexEi
#           RandomItemTable::GetRandomItemIndex(int) const
# range [0x089bbb6c, 0x089bbc04]
089bbb6c +0x00:  push   %ebp
089bbb6d +0x01:  mov    %esp,%ebp
089bbb6f +0x03:  sub    $0x28,%esp
089bbb72 +0x06:  mov    0x8(%ebp),%eax
089bbb75 +0x09:  lea    0x4(%eax),%edx
089bbb78 +0x0c:  lea    -0x14(%ebp),%eax
089bbb7b +0x0f:  mov    %edx,0x4(%esp)
089bbb7f +0x13:  mov    %eax,(%esp)
089bbb82 +0x16:  call   08111220 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x732>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x732
089bbb87 +0x1b:  sub    $0x4,%esp
089bbb8a +0x1e:  jmp    089bbbd0 <+0x64>
089bbb8c +0x20:  lea    -0x14(%ebp),%eax
089bbb8f +0x23:  mov    %eax,(%esp)
089bbb92 +0x26:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
089bbb97 +0x2b:  mov    0x4(%eax),%eax
089bbb9a +0x2e:  cmp    0xc(%ebp),%eax
089bbb9d +0x31:  setg   %al
089bbba0 +0x34:  test   %al,%al
089bbba2 +0x36:  je     089bbbb3 <+0x47>
089bbba4 +0x38:  lea    -0x14(%ebp),%eax
089bbba7 +0x3b:  mov    %eax,(%esp)
089bbbaa +0x3e:  call   08193912 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x57a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x57a
089bbbaf +0x43:  mov    (%eax),%eax
089bbbb1 +0x45:  jmp    089bbc03 <+0x97>
089bbbb3 +0x47:  lea    -0xc(%ebp),%eax
089bbbb6 +0x4a:  movl   $0x0,0x8(%esp)
089bbbbe +0x52:  lea    -0x14(%ebp),%edx
089bbbc1 +0x55:  mov    %edx,0x4(%esp)
089bbbc5 +0x59:  mov    %eax,(%esp)
089bbbc8 +0x5c:  call   08193472 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0xda>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0xda
089bbbcd +0x61:  sub    $0x4,%esp
089bbbd0 +0x64:  mov    0x8(%ebp),%eax
089bbbd3 +0x67:  lea    0x4(%eax),%edx
089bbbd6 +0x6a:  lea    -0x10(%ebp),%eax
089bbbd9 +0x6d:  mov    %edx,0x4(%esp)
089bbbdd +0x71:  mov    %eax,(%esp)
089bbbe0 +0x74:  call   0811124c <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x75e>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x75e
089bbbe5 +0x79:  sub    $0x4,%esp
089bbbe8 +0x7c:  lea    -0x10(%ebp),%eax
089bbbeb +0x7f:  mov    %eax,0x4(%esp)
089bbbef +0x83:  lea    -0x14(%ebp),%eax
089bbbf2 +0x86:  mov    %eax,(%esp)
089bbbf5 +0x89:  call   081938e5 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x54d>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x54d
089bbbfa +0x8e:  test   %al,%al
089bbbfc +0x90:  jne    089bbb8c <+0x20>
089bbbfe +0x92:  mov    $0x0,%eax
089bbc03 +0x97:  leave
089bbc04 +0x98:  ret
```

## 反编译 C

```c
// RandomItemTable::GetRandomItemIndex @ 0x89bbb6c

/* RandomItemTable::GetRandomItemIndex(int) const */

undefined4 __thiscall RandomItemTable::GetRandomItemIndex(RandomItemTable *this,int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_10 [12];
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  while( true ) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return 0;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
            ::operator->(local_18);
    if (param_1 < *(int *)(iVar2 + 4)) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_10,(int)local_18);
  }
  puVar3 = (undefined4 *)
           __gnu_cxx::
           __normal_iterator<std::pair<int,int>const*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
           ::operator->(local_18);
  return *puVar3;
}
```
