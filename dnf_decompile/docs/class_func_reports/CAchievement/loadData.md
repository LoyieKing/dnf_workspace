# loadData

`_ZN12CAchievement8loadDataEP5CUserPc`

`CAchievement::loadData(CUser*, char*)`

| 类 | 地址 |
|---|---|
| `CAchievement` | `0x0828c8b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828c8b8  _ZN12CAchievement8loadDataEP5CUserPc
#           CAchievement::loadData(CUser*, char*)
# range [0x0828c8b8, 0x0828c975]
0828c8b8 +0x00:  push   %ebp
0828c8b9 +0x01:  mov    %esp,%ebp
0828c8bb +0x03:  sub    $0x48,%esp
0828c8be +0x06:  mov    0x10(%ebp),%eax
0828c8c1 +0x09:  mov    %eax,-0x10(%ebp)
0828c8c4 +0x0c:  movl   $0x0,-0xc(%ebp)
0828c8cb +0x13:  jmp    0828c93a <+0x82>
0828c8cd +0x15:  mov    -0xc(%ebp),%edx
0828c8d0 +0x18:  mov    %edx,%eax
0828c8d2 +0x1a:  add    %eax,%eax
0828c8d4 +0x1c:  add    %edx,%eax
0828c8d6 +0x1e:  shl    $0x2,%eax
0828c8d9 +0x21:  mov    %eax,%ecx
0828c8db +0x23:  add    -0x10(%ebp),%ecx
0828c8de +0x26:  mov    -0xc(%ebp),%edx
0828c8e1 +0x29:  mov    %edx,%eax
0828c8e3 +0x2b:  add    %eax,%eax
0828c8e5 +0x2d:  add    %edx,%eax
0828c8e7 +0x2f:  shl    $0x2,%eax
0828c8ea +0x32:  mov    %eax,%edx
0828c8ec +0x34:  add    -0x10(%ebp),%edx
0828c8ef +0x37:  lea    -0x20(%ebp),%eax
0828c8f2 +0x3a:  mov    %ecx,0x8(%esp)
0828c8f6 +0x3e:  mov    %edx,0x4(%esp)
0828c8fa +0x42:  mov    %eax,(%esp)
0828c8fd +0x45:  call   0828de31 <_GLOBAL__I__ZN12CAchievementC2Ev+0x5de>  ; global constructors keyed to CAchievement::CAchievement()+0x5de
0828c902 +0x4a:  sub    $0x4,%esp
0828c905 +0x4d:  lea    -0x20(%ebp),%eax
0828c908 +0x50:  mov    %eax,0x4(%esp)
0828c90c +0x54:  lea    -0x30(%ebp),%eax
0828c90f +0x57:  mov    %eax,(%esp)
0828c912 +0x5a:  call   0828de70 <_GLOBAL__I__ZN12CAchievementC2Ev+0x61d>  ; global constructors keyed to CAchievement::CAchievement()+0x61d
0828c917 +0x5f:  mov    0x8(%ebp),%eax
0828c91a +0x62:  lea    0xc(%eax),%ecx
0828c91d +0x65:  lea    -0x38(%ebp),%eax
0828c920 +0x68:  lea    -0x30(%ebp),%edx
0828c923 +0x6b:  mov    %edx,0x8(%esp)
0828c927 +0x6f:  mov    %ecx,0x4(%esp)
0828c92b +0x73:  mov    %eax,(%esp)
0828c92e +0x76:  call   0828deac <_GLOBAL__I__ZN12CAchievementC2Ev+0x659>  ; global constructors keyed to CAchievement::CAchievement()+0x659
0828c933 +0x7b:  sub    $0x4,%esp
0828c936 +0x7e:  addl   $0x1,-0xc(%ebp)
0828c93a +0x82:  mov    -0x10(%ebp),%eax
0828c93d +0x85:  mov    0x1800(%eax),%eax
0828c943 +0x8b:  cmp    -0xc(%ebp),%eax
0828c946 +0x8e:  setg   %al
0828c949 +0x91:  test   %al,%al
0828c94b +0x93:  jne    0828c8cd <+0x15>
0828c94d +0x95:  mov    0x8(%ebp),%eax
0828c950 +0x98:  mov    0xc(%ebp),%edx
0828c953 +0x9b:  mov    %edx,0x8(%eax)
0828c956 +0x9e:  mov    -0x10(%ebp),%eax
0828c959 +0xa1:  mov    0x1804(%eax),%eax
0828c95f +0xa7:  mov    %eax,0x4(%esp)
0828c963 +0xab:  mov    0x8(%ebp),%eax
0828c966 +0xae:  mov    %eax,(%esp)
0828c969 +0xb1:  call   0828d092 <_ZN12CAchievement18_verifyAchievementEj>  ; CAchievement::_verifyAchievement(unsigned int)
0828c96e +0xb6:  mov    $0x1,%eax
0828c973 +0xbb:  leave
0828c974 +0xbc:  ret
0828c975 +0xbd:  nop
```

## 反编译 C

```c
// CAchievement::loadData @ 0x828c8b8

/* CAchievement::loadData(CUser*, char*) */

undefined4 __thiscall CAchievement::loadData(CAchievement *this,CUser *param_1,char *param_2)

{
  pair local_3c [8];
  pair<unsigned_int_const,stAchievement> local_34 [16];
  uint local_24 [4];
  char *local_14;
  int local_10;
  
  local_14 = param_2;
  for (local_10 = 0; local_10 < *(int *)(local_14 + 0x1800); local_10 = local_10 + 1) {
    std::make_pair<unsigned_int&,stAchievement&>
              (local_24,(stAchievement *)(local_14 + local_10 * 0xc));
    std::pair<unsigned_int_const,stAchievement>::pair<unsigned_int,stAchievement>
              (local_34,(pair *)local_24);
    std::
    map<unsigned_int,stAchievement,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stAchievement>>>
    ::insert(local_3c);
  }
  *(CUser **)(this + 8) = param_1;
  _verifyAchievement((uint)this);
  return 1;
}
```
