# addSkillIndex

`_ZN12TutorialData13addSkillIndexEiiiii`

`TutorialData::addSkillIndex(int, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `TutorialData` | `0x08ab8888` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ab8888  _ZN12TutorialData13addSkillIndexEiiiii
#           TutorialData::addSkillIndex(int, int, int, int, int)
# range [0x08ab8888, 0x08ab8943]
08ab8888 +0x00:  push   %ebp
08ab8889 +0x01:  mov    %esp,%ebp
08ab888b +0x03:  sub    $0x38,%esp
08ab888e +0x06:  cmpl   $0x3,0xc(%ebp)
08ab8892 +0x0a:  jg     08ab893e <+0xb6>
08ab8898 +0x10:  movl   $0xc,(%esp)
08ab889f +0x17:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ab88a4 +0x1c:  mov    %eax,-0x24(%ebp)
08ab88a7 +0x1f:  mov    -0x24(%ebp),%eax
08ab88aa +0x22:  mov    0x18(%ebp),%edx
08ab88ad +0x25:  mov    %edx,0x4(%eax)
08ab88b0 +0x28:  mov    -0x24(%ebp),%eax
08ab88b3 +0x2b:  mov    0x14(%ebp),%edx
08ab88b6 +0x2e:  mov    %edx,(%eax)
08ab88b8 +0x30:  mov    -0x24(%ebp),%eax
08ab88bb +0x33:  mov    0x1c(%ebp),%edx
08ab88be +0x36:  mov    %edx,0x8(%eax)
08ab88c1 +0x39:  mov    0x10(%ebp),%eax
08ab88c4 +0x3c:  mov    %eax,0x4(%esp)
08ab88c8 +0x40:  mov    0x8(%ebp),%eax
08ab88cb +0x43:  mov    %eax,(%esp)
08ab88ce +0x46:  call   08ab885c <_ZN12TutorialData16getConvertHotKeyEi>  ; TutorialData::getConvertHotKey(int)
08ab88d3 +0x4b:  mov    %eax,-0x28(%ebp)
08ab88d6 +0x4e:  mov    -0x28(%ebp),%eax
08ab88d9 +0x51:  cmp    $0xffffffff,%eax
08ab88dc +0x54:  je     08ab8941 <+0xb9>
08ab88de +0x56:  lea    -0x10(%ebp),%eax
08ab88e1 +0x59:  lea    -0x24(%ebp),%edx
08ab88e4 +0x5c:  mov    %edx,0x8(%esp)
08ab88e8 +0x60:  lea    -0x28(%ebp),%edx
08ab88eb +0x63:  mov    %edx,0x4(%esp)
08ab88ef +0x67:  mov    %eax,(%esp)
08ab88f2 +0x6a:  call   08ab9d52 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x58d>  ; global constructors keyed to TutorialData::TutorialData()+0x58d
08ab88f7 +0x6f:  sub    $0x4,%esp
08ab88fa +0x72:  lea    -0x10(%ebp),%eax
08ab88fd +0x75:  mov    %eax,0x4(%esp)
08ab8901 +0x79:  lea    -0x18(%ebp),%eax
08ab8904 +0x7c:  mov    %eax,(%esp)
08ab8907 +0x7f:  call   08ab9d90 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x5cb>  ; global constructors keyed to TutorialData::TutorialData()+0x5cb
08ab890c +0x84:  mov    0xc(%ebp),%edx
08ab890f +0x87:  mov    %edx,%eax
08ab8911 +0x89:  add    %eax,%eax
08ab8913 +0x8b:  add    %edx,%eax
08ab8915 +0x8d:  shl    $0x3,%eax
08ab8918 +0x90:  add    $0x90,%eax
08ab891d +0x95:  add    0x8(%ebp),%eax
08ab8920 +0x98:  lea    0x4(%eax),%ecx
08ab8923 +0x9b:  lea    -0x20(%ebp),%eax
08ab8926 +0x9e:  lea    -0x18(%ebp),%edx
08ab8929 +0xa1:  mov    %edx,0x8(%esp)
08ab892d +0xa5:  mov    %ecx,0x4(%esp)
08ab8931 +0xa9:  mov    %eax,(%esp)
08ab8934 +0xac:  call   08ab9dc0 <_GLOBAL__I__ZN12TutorialDataC2Ev+0x5fb>  ; global constructors keyed to TutorialData::TutorialData()+0x5fb
08ab8939 +0xb1:  sub    $0x4,%esp
08ab893c +0xb4:  jmp    08ab8942 <+0xba>
08ab893e +0xb6:  nop
08ab893f +0xb7:  jmp    08ab8942 <+0xba>
08ab8941 +0xb9:  nop
08ab8942 +0xba:  leave
08ab8943 +0xbb:  ret
```

## 反编译 C

```c
// TutorialData::addSkillIndex @ 0x8ab8888

/* TutorialData::addSkillIndex(int, int, int, int, int) */

void __thiscall
TutorialData::addSkillIndex
          (TutorialData *this,int param_1,int param_2,int param_3,int param_4,int param_5)

{
  SkillData *local_2c;
  int *local_28;
  pair local_24 [8];
  pair<int_const,TutorialData::SkillData*> local_1c [8];
  int local_14 [4];
  
  if (param_1 < 4) {
    local_28 = operator_new(0xc);
    local_28[1] = param_4;
    *local_28 = param_3;
    local_28[2] = param_5;
    local_2c = (SkillData *)getConvertHotKey(this,param_2);
    if (local_2c != (SkillData *)0xffffffff) {
      std::make_pair<int&,TutorialData::SkillData*&>(local_14,&local_2c);
      std::pair<int_const,TutorialData::SkillData*>::pair<int,TutorialData::SkillData*>
                (local_1c,(pair *)local_14);
      std::
      map<int,TutorialData::SkillData*,std::less<int>,std::allocator<std::pair<int_const,TutorialData::SkillData*>>>
      ::insert(local_24);
    }
  }
  return;
}
```
