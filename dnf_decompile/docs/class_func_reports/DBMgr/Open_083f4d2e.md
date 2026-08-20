# Open

`_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcjS1_S1_S1_17ENUM_SERVER_GROUP`

`DBMgr::Open(ENUM_DB_HANDLE_IDX, char*, unsigned int, char*, char*, char*, ENUM_SERVER_GROUP)`

| 类 | 地址 |
|---|---|
| `DBMgr` | `0x083f4d2e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f4d2e  _ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcjS1_S1_S1_17ENUM_SERVER_GROUP
#           DBMgr::Open(ENUM_DB_HANDLE_IDX, char*, unsigned int, char*, char*, char*, ENUM_SERVER_GROUP)
# range [0x083f4d2e, 0x083f4ea5]
083f4d2e +0x000:  push   %ebp
083f4d2f +0x001:  mov    %esp,%ebp
083f4d31 +0x003:  push   %ebx
083f4d32 +0x004:  sub    $0x34,%esp
083f4d35 +0x007:  mov    0x24(%ebp),%eax
083f4d38 +0x00a:  test   %eax,%eax
083f4d3a +0x00c:  je     083f4e5e <+0x130>
083f4d40 +0x012:  mov    0x8(%ebp),%eax
083f4d43 +0x015:  lea    0x20(%eax),%edx
083f4d46 +0x018:  lea    0x24(%ebp),%eax
083f4d49 +0x01b:  mov    %eax,0x4(%esp)
083f4d4d +0x01f:  mov    %edx,(%esp)
083f4d50 +0x022:  call   083f591c <_GLOBAL__I__ZN5MySQLC2Ev+0x61d>  ; global constructors keyed to MySQL::MySQL()+0x61d
083f4d55 +0x027:  lea    0xc(%ebp),%edx
083f4d58 +0x02a:  mov    %edx,0x4(%esp)
083f4d5c +0x02e:  mov    %eax,(%esp)
083f4d5f +0x031:  call   083f5a68 <_GLOBAL__I__ZN5MySQLC2Ev+0x769>  ; global constructors keyed to MySQL::MySQL()+0x769
083f4d64 +0x036:  mov    (%eax),%eax
083f4d66 +0x038:  test   %eax,%eax
083f4d68 +0x03a:  setne  %al
083f4d6b +0x03d:  test   %al,%al
083f4d6d +0x03f:  je     083f4d79 <+0x4b>
083f4d6f +0x041:  mov    $0x0,%eax
083f4d74 +0x046:  jmp    083f4ea0 <+0x172>
083f4d79 +0x04b:  movl   $0x4208c,(%esp)
083f4d80 +0x052:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083f4d85 +0x057:  mov    %eax,%ebx
083f4d87 +0x059:  mov    %ebx,%eax
083f4d89 +0x05b:  mov    %eax,(%esp)
083f4d8c +0x05e:  call   083f3ac8 <_ZN5MySQLC1Ev>  ; MySQL::MySQL()
083f4d91 +0x063:  mov    0x8(%ebp),%eax
083f4d94 +0x066:  lea    0x20(%eax),%edx
083f4d97 +0x069:  lea    0x24(%ebp),%eax
083f4d9a +0x06c:  mov    %eax,0x4(%esp)
083f4d9e +0x070:  mov    %edx,(%esp)
083f4da1 +0x073:  call   083f591c <_GLOBAL__I__ZN5MySQLC2Ev+0x61d>  ; global constructors keyed to MySQL::MySQL()+0x61d
083f4da6 +0x078:  lea    0xc(%ebp),%edx
083f4da9 +0x07b:  mov    %edx,0x4(%esp)
083f4dad +0x07f:  mov    %eax,(%esp)
083f4db0 +0x082:  call   083f5a68 <_GLOBAL__I__ZN5MySQLC2Ev+0x769>  ; global constructors keyed to MySQL::MySQL()+0x769
083f4db5 +0x087:  mov    %ebx,%edx
083f4db7 +0x089:  mov    %edx,(%eax)
083f4db9 +0x08b:  mov    0x8(%ebp),%eax
083f4dbc +0x08e:  lea    0x20(%eax),%edx
083f4dbf +0x091:  lea    0x24(%ebp),%eax
083f4dc2 +0x094:  mov    %eax,0x4(%esp)
083f4dc6 +0x098:  mov    %edx,(%esp)
083f4dc9 +0x09b:  call   083f591c <_GLOBAL__I__ZN5MySQLC2Ev+0x61d>  ; global constructors keyed to MySQL::MySQL()+0x61d
083f4dce +0x0a0:  lea    0xc(%ebp),%edx
083f4dd1 +0x0a3:  mov    %edx,0x4(%esp)
083f4dd5 +0x0a7:  mov    %eax,(%esp)
083f4dd8 +0x0aa:  call   083f5a68 <_GLOBAL__I__ZN5MySQLC2Ev+0x769>  ; global constructors keyed to MySQL::MySQL()+0x769
083f4ddd +0x0af:  mov    (%eax),%eax
083f4ddf +0x0b1:  mov    %eax,(%esp)
083f4de2 +0x0b4:  call   083f3ce4 <_ZN5MySQL4initEv>  ; MySQL::init()
083f4de7 +0x0b9:  xor    $0x1,%eax
083f4dea +0x0bc:  test   %al,%al
083f4dec +0x0be:  je     083f4df8 <+0xca>
083f4dee +0x0c0:  mov    $0x0,%eax
083f4df3 +0x0c5:  jmp    083f4ea0 <+0x172>
083f4df8 +0x0ca:  mov    0x8(%ebp),%eax
083f4dfb +0x0cd:  lea    0x20(%eax),%edx
083f4dfe +0x0d0:  lea    0x24(%ebp),%eax
083f4e01 +0x0d3:  mov    %eax,0x4(%esp)
083f4e05 +0x0d7:  mov    %edx,(%esp)
083f4e08 +0x0da:  call   083f591c <_GLOBAL__I__ZN5MySQLC2Ev+0x61d>  ; global constructors keyed to MySQL::MySQL()+0x61d
083f4e0d +0x0df:  lea    0xc(%ebp),%edx
083f4e10 +0x0e2:  mov    %edx,0x4(%esp)
083f4e14 +0x0e6:  mov    %eax,(%esp)
083f4e17 +0x0e9:  call   083f5a68 <_GLOBAL__I__ZN5MySQLC2Ev+0x769>  ; global constructors keyed to MySQL::MySQL()+0x769
083f4e1c +0x0ee:  mov    (%eax),%eax
083f4e1e +0x0f0:  mov    0x20(%ebp),%edx
083f4e21 +0x0f3:  mov    %edx,0x14(%esp)
083f4e25 +0x0f7:  mov    0x1c(%ebp),%edx
083f4e28 +0x0fa:  mov    %edx,0x10(%esp)
083f4e2c +0x0fe:  mov    0x18(%ebp),%edx
083f4e2f +0x101:  mov    %edx,0xc(%esp)
083f4e33 +0x105:  mov    0x14(%ebp),%edx
083f4e36 +0x108:  mov    %edx,0x8(%esp)
083f4e3a +0x10c:  mov    0x10(%ebp),%edx
083f4e3d +0x10f:  mov    %edx,0x4(%esp)
083f4e41 +0x113:  mov    %eax,(%esp)
083f4e44 +0x116:  call   083f4024 <_ZN5MySQL4openEPcjS0_S0_S0_>  ; MySQL::open(char*, unsigned int, char*, char*, char*)
083f4e49 +0x11b:  xor    $0x1,%eax
083f4e4c +0x11e:  test   %al,%al
083f4e4e +0x120:  je     083f4e57 <+0x129>
083f4e50 +0x122:  mov    $0x0,%eax
083f4e55 +0x127:  jmp    083f4ea0 <+0x172>
083f4e57 +0x129:  mov    $0x1,%eax
083f4e5c +0x12e:  jmp    083f4ea0 <+0x172>
083f4e5e +0x130:  mov    0x8(%ebp),%eax
083f4e61 +0x133:  mov    (%eax),%edx
083f4e63 +0x135:  mov    0xc(%ebp),%eax
083f4e66 +0x138:  imul   $0x4208c,%eax,%eax
083f4e6c +0x13e:  add    %eax,%edx
083f4e6e +0x140:  mov    0x20(%ebp),%eax
083f4e71 +0x143:  mov    %eax,0x14(%esp)
083f4e75 +0x147:  mov    0x1c(%ebp),%eax
083f4e78 +0x14a:  mov    %eax,0x10(%esp)
083f4e7c +0x14e:  mov    0x18(%ebp),%eax
083f4e7f +0x151:  mov    %eax,0xc(%esp)
083f4e83 +0x155:  mov    0x14(%ebp),%eax
083f4e86 +0x158:  mov    %eax,0x8(%esp)
083f4e8a +0x15c:  mov    0x10(%ebp),%eax
083f4e8d +0x15f:  mov    %eax,0x4(%esp)
083f4e91 +0x163:  mov    %edx,(%esp)
083f4e94 +0x166:  call   083f4024 <_ZN5MySQL4openEPcjS0_S0_S0_>  ; MySQL::open(char*, unsigned int, char*, char*, char*)
083f4e99 +0x16b:  mov    %al,-0x9(%ebp)
083f4e9c +0x16e:  movzbl -0x9(%ebp),%eax
083f4ea0 +0x172:  add    $0x34,%esp
083f4ea3 +0x175:  pop    %ebx
083f4ea4 +0x176:  pop    %ebp
083f4ea5 +0x177:  ret
```

## 反编译 C

```c
// DBMgr::Open @ 0x83f4d2e

/* DBMgr::Open(ENUM_DB_HANDLE_IDX, char*, unsigned int, char*, char*, char*, ENUM_SERVER_GROUP) */

undefined1 __thiscall
DBMgr::Open(DBMgr *this,int param_2,char *param_3,uint param_4,char *param_5,char *param_6,
           char *param_7,int param_8)

{
  char cVar1;
  undefined1 uVar2;
  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
  *pmVar3;
  int *piVar4;
  MySQL *this_00;
  undefined4 *puVar5;
  
  if (param_8 == 0) {
    uVar2 = MySQL::open((MySQL *)(*(int *)this + param_2 * 0x4208c),param_3,param_4,param_5,param_6,
                        param_7);
  }
  else {
    pmVar3 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
              *)std::
                map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                              *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_8);
    piVar4 = (int *)std::
                    map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                    ::operator[](pmVar3,(ENUM_DB_HANDLE_IDX *)&param_2);
    if (*piVar4 == 0) {
      this_00 = operator_new(0x4208c);
      MySQL::MySQL(this_00);
      pmVar3 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                *)std::
                  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                  ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                                *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_8);
      puVar5 = (undefined4 *)
               std::
               map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
               ::operator[](pmVar3,(ENUM_DB_HANDLE_IDX *)&param_2);
      *puVar5 = this_00;
      pmVar3 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                *)std::
                  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                  ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                                *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_8);
      puVar5 = (undefined4 *)
               std::
               map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
               ::operator[](pmVar3,(ENUM_DB_HANDLE_IDX *)&param_2);
      cVar1 = MySQL::init((MySQL *)*puVar5);
      if (cVar1 == '\x01') {
        pmVar3 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                  *)std::
                    map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                    ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                                  *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_8);
        puVar5 = (undefined4 *)
                 std::
                 map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                 ::operator[](pmVar3,(ENUM_DB_HANDLE_IDX *)&param_2);
        cVar1 = MySQL::open((MySQL *)*puVar5,param_3,param_4,param_5,param_6,param_7);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
