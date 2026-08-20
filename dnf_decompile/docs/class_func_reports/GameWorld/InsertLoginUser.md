# InsertLoginUser

`_ZN9GameWorld15InsertLoginUserEP5CUser`

`GameWorld::InsertLoginUser(CUser*)`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086cf59c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086cf59c  _ZN9GameWorld15InsertLoginUserEP5CUser
#           GameWorld::InsertLoginUser(CUser*)
# range [0x086cf59c, 0x086cf601]
086cf59c +0x00:  push   %ebp
086cf59d +0x01:  mov    %esp,%ebp
086cf59f +0x03:  sub    $0x38,%esp
086cf5a2 +0x06:  mov    0xc(%ebp),%eax
086cf5a5 +0x09:  mov    %eax,(%esp)
086cf5a8 +0x0c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
086cf5ad +0x11:  mov    %eax,-0xc(%ebp)
086cf5b0 +0x14:  lea    -0x14(%ebp),%eax
086cf5b3 +0x17:  lea    0xc(%ebp),%edx
086cf5b6 +0x1a:  mov    %edx,0x8(%esp)
086cf5ba +0x1e:  lea    -0xc(%ebp),%edx
086cf5bd +0x21:  mov    %edx,0x4(%esp)
086cf5c1 +0x25:  mov    %eax,(%esp)
086cf5c4 +0x28:  call   086d4339 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2b6a>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2b6a
086cf5c9 +0x2d:  sub    $0x4,%esp
086cf5cc +0x30:  lea    -0x14(%ebp),%eax
086cf5cf +0x33:  mov    %eax,0x4(%esp)
086cf5d3 +0x37:  lea    -0x1c(%ebp),%eax
086cf5d6 +0x3a:  mov    %eax,(%esp)
086cf5d9 +0x3d:  call   086d4380 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2bb1>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2bb1
086cf5de +0x42:  mov    0x8(%ebp),%eax
086cf5e1 +0x45:  lea    0x198(%eax),%ecx
086cf5e7 +0x4b:  lea    -0x24(%ebp),%eax
086cf5ea +0x4e:  lea    -0x1c(%ebp),%edx
086cf5ed +0x51:  mov    %edx,0x8(%esp)
086cf5f1 +0x55:  mov    %ecx,0x4(%esp)
086cf5f5 +0x59:  mov    %eax,(%esp)
086cf5f8 +0x5c:  call   086d43b0 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2be1>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2be1
086cf5fd +0x61:  sub    $0x4,%esp
086cf600 +0x64:  leave
086cf601 +0x65:  ret
```

## 反编译 C

```c
// GameWorld::InsertLoginUser @ 0x86cf59c

/* GameWorld::InsertLoginUser(CUser*) */

void __thiscall GameWorld::InsertLoginUser(GameWorld *this,CUser *param_1)

{
  pair local_28 [8];
  pair<unsigned_int_const,CUser*> local_20 [8];
  uint local_18 [2];
  CUser *local_10 [3];
  
  local_10[0] = (CUser *)CUser::get_acc_id(param_1);
  std::make_pair<unsigned_int,CUser*&>(local_18,local_10);
  std::pair<unsigned_int_const,CUser*>::pair<unsigned_int,CUser*>(local_20,(pair *)local_18);
  std::
  map<unsigned_int,CUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CUser*>>>
  ::insert(local_28);
  return;
}
```
