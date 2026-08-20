# insert

`_ZN15CRewardUserList6insertEjii`

`CRewardUserList::insert(unsigned int, int, int)`

| 类 | 地址 |
|---|---|
| `CRewardUserList` | `0x081bb690` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb690  _ZN15CRewardUserList6insertEjii
#           CRewardUserList::insert(unsigned int, int, int)
# range [0x081bb690, 0x081bb73b]
081bb690 +0x00:  push   %ebp
081bb691 +0x01:  mov    %esp,%ebp
081bb693 +0x03:  sub    $0x58,%esp
081bb696 +0x06:  mov    0xc(%ebp),%eax
081bb699 +0x09:  mov    %eax,0x4(%esp)
081bb69d +0x0d:  mov    0x8(%ebp),%eax
081bb6a0 +0x10:  mov    %eax,(%esp)
081bb6a3 +0x13:  call   081bb73c <_ZN15CRewardUserList8is_existEj>  ; CRewardUserList::is_exist(unsigned int)
081bb6a8 +0x18:  xor    $0x1,%eax
081bb6ab +0x1b:  test   %al,%al
081bb6ad +0x1d:  je     081bb734 <+0xa4>
081bb6b3 +0x23:  lea    -0x3c(%ebp),%eax
081bb6b6 +0x26:  mov    %eax,(%esp)
081bb6b9 +0x29:  call   081bbf82 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x1c>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x1c
081bb6be +0x2e:  mov    0x10(%ebp),%eax
081bb6c1 +0x31:  mov    %eax,-0x3c(%ebp)
081bb6c4 +0x34:  mov    0x14(%ebp),%eax
081bb6c7 +0x37:  mov    %eax,-0x38(%ebp)
081bb6ca +0x3a:  movb   $0x0,-0x34(%ebp)
081bb6ce +0x3e:  lea    -0x18(%ebp),%eax
081bb6d1 +0x41:  lea    -0x3c(%ebp),%edx
081bb6d4 +0x44:  mov    %edx,0x8(%esp)
081bb6d8 +0x48:  lea    0xc(%ebp),%edx
081bb6db +0x4b:  mov    %edx,0x4(%esp)
081bb6df +0x4f:  mov    %eax,(%esp)
081bb6e2 +0x52:  call   081bc2ce <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x368>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x368
081bb6e7 +0x57:  sub    $0x4,%esp
081bb6ea +0x5a:  lea    -0x18(%ebp),%eax
081bb6ed +0x5d:  mov    %eax,0x4(%esp)
081bb6f1 +0x61:  lea    -0x28(%ebp),%eax
081bb6f4 +0x64:  mov    %eax,(%esp)
081bb6f7 +0x67:  call   081bc30c <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x3a6>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x3a6
081bb6fc +0x6c:  mov    0x8(%ebp),%edx
081bb6ff +0x6f:  lea    -0x30(%ebp),%eax
081bb702 +0x72:  lea    -0x28(%ebp),%ecx
081bb705 +0x75:  mov    %ecx,0x8(%esp)
081bb709 +0x79:  mov    %edx,0x4(%esp)
081bb70d +0x7d:  mov    %eax,(%esp)
081bb710 +0x80:  call   081bc34a <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x3e4>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x3e4
081bb715 +0x85:  sub    $0x4,%esp
081bb718 +0x88:  mov    0x8(%ebp),%eax
081bb71b +0x8b:  lea    0x18(%eax),%edx
081bb71e +0x8e:  lea    0xc(%ebp),%eax
081bb721 +0x91:  mov    %eax,0x4(%esp)
081bb725 +0x95:  mov    %edx,(%esp)
081bb728 +0x98:  call   081bc376 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x410>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x410
081bb72d +0x9d:  mov    $0x1,%eax
081bb732 +0xa2:  jmp    081bb739 <+0xa9>
081bb734 +0xa4:  mov    $0x0,%eax
081bb739 +0xa9:  leave
081bb73a +0xaa:  ret
081bb73b +0xab:  nop
```

## 反编译 C

```c
// CRewardUserList::insert @ 0x81bb690

/* CRewardUserList::insert(unsigned int, int, int) */

bool __thiscall CRewardUserList::insert(CRewardUserList *this,uint param_1,int param_2,int param_3)

{
  char cVar1;
  int local_40;
  int local_3c;
  undefined1 local_38;
  pair local_34 [8];
  pair<unsigned_int_const,RewardUserData> local_2c [16];
  uint local_1c [6];
  
  cVar1 = is_exist((uint)this);
  if (cVar1 != '\x01') {
    RewardUserData::RewardUserData((RewardUserData *)&local_40);
    local_40 = param_2;
    local_3c = param_3;
    local_38 = 0;
    std::make_pair<unsigned_int&,RewardUserData&>(local_1c,(RewardUserData *)&param_1);
    std::pair<unsigned_int_const,RewardUserData>::pair<unsigned_int,RewardUserData>
              (local_2c,(pair *)local_1c);
    std::
    map<unsigned_int,RewardUserData,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,RewardUserData>>>
    ::insert(local_34);
    std::deque<unsigned_int,std::allocator<unsigned_int>>::push_back
              ((deque<unsigned_int,std::allocator<unsigned_int>> *)(this + 0x18),&param_1);
  }
  return cVar1 != '\x01';
}
```
