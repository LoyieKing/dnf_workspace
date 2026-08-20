# Open

`_ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcS1_S1_S1_17ENUM_SERVER_GROUP`

`DBMgr::Open(ENUM_DB_HANDLE_IDX, char*, char*, char*, char*, ENUM_SERVER_GROUP)`

| 类 | 地址 |
|---|---|
| `DBMgr` | `0x083f4bc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083f4bc4  _ZN5DBMgr4OpenE18ENUM_DB_HANDLE_IDXPcS1_S1_S1_17ENUM_SERVER_GROUP
#           DBMgr::Open(ENUM_DB_HANDLE_IDX, char*, char*, char*, char*, ENUM_SERVER_GROUP)
# range [0x083f4bc4, 0x083f4d2d]
083f4bc4 +0x000:  push   %ebp
083f4bc5 +0x001:  mov    %esp,%ebp
083f4bc7 +0x003:  push   %ebx
083f4bc8 +0x004:  sub    $0x34,%esp
083f4bcb +0x007:  mov    0x20(%ebp),%eax
083f4bce +0x00a:  test   %eax,%eax
083f4bd0 +0x00c:  je     083f4ced <+0x129>
083f4bd6 +0x012:  mov    0x8(%ebp),%eax
083f4bd9 +0x015:  lea    0x20(%eax),%edx
083f4bdc +0x018:  lea    0x20(%ebp),%eax
083f4bdf +0x01b:  mov    %eax,0x4(%esp)
083f4be3 +0x01f:  mov    %edx,(%esp)
083f4be6 +0x022:  call   083f591c <_GLOBAL__I__ZN5MySQLC2Ev+0x61d>  ; global constructors keyed to MySQL::MySQL()+0x61d
083f4beb +0x027:  lea    0xc(%ebp),%edx
083f4bee +0x02a:  mov    %edx,0x4(%esp)
083f4bf2 +0x02e:  mov    %eax,(%esp)
083f4bf5 +0x031:  call   083f5a68 <_GLOBAL__I__ZN5MySQLC2Ev+0x769>  ; global constructors keyed to MySQL::MySQL()+0x769
083f4bfa +0x036:  mov    (%eax),%eax
083f4bfc +0x038:  test   %eax,%eax
083f4bfe +0x03a:  setne  %al
083f4c01 +0x03d:  test   %al,%al
083f4c03 +0x03f:  je     083f4c0f <+0x4b>
083f4c05 +0x041:  mov    $0x0,%eax
083f4c0a +0x046:  jmp    083f4d28 <+0x164>
083f4c0f +0x04b:  movl   $0x4208c,(%esp)
083f4c16 +0x052:  call   08724450 <_Znwj>  ; operator new(unsigned int)
083f4c1b +0x057:  mov    %eax,%ebx
083f4c1d +0x059:  mov    %ebx,%eax
083f4c1f +0x05b:  mov    %eax,(%esp)
083f4c22 +0x05e:  call   083f3ac8 <_ZN5MySQLC1Ev>  ; MySQL::MySQL()
083f4c27 +0x063:  mov    0x8(%ebp),%eax
083f4c2a +0x066:  lea    0x20(%eax),%edx
083f4c2d +0x069:  lea    0x20(%ebp),%eax
083f4c30 +0x06c:  mov    %eax,0x4(%esp)
083f4c34 +0x070:  mov    %edx,(%esp)
083f4c37 +0x073:  call   083f591c <_GLOBAL__I__ZN5MySQLC2Ev+0x61d>  ; global constructors keyed to MySQL::MySQL()+0x61d
083f4c3c +0x078:  lea    0xc(%ebp),%edx
083f4c3f +0x07b:  mov    %edx,0x4(%esp)
083f4c43 +0x07f:  mov    %eax,(%esp)
083f4c46 +0x082:  call   083f5a68 <_GLOBAL__I__ZN5MySQLC2Ev+0x769>  ; global constructors keyed to MySQL::MySQL()+0x769
083f4c4b +0x087:  mov    %ebx,%edx
083f4c4d +0x089:  mov    %edx,(%eax)
083f4c4f +0x08b:  mov    0x8(%ebp),%eax
083f4c52 +0x08e:  lea    0x20(%eax),%edx
083f4c55 +0x091:  lea    0x20(%ebp),%eax
083f4c58 +0x094:  mov    %eax,0x4(%esp)
083f4c5c +0x098:  mov    %edx,(%esp)
083f4c5f +0x09b:  call   083f591c <_GLOBAL__I__ZN5MySQLC2Ev+0x61d>  ; global constructors keyed to MySQL::MySQL()+0x61d
083f4c64 +0x0a0:  lea    0xc(%ebp),%edx
083f4c67 +0x0a3:  mov    %edx,0x4(%esp)
083f4c6b +0x0a7:  mov    %eax,(%esp)
083f4c6e +0x0aa:  call   083f5a68 <_GLOBAL__I__ZN5MySQLC2Ev+0x769>  ; global constructors keyed to MySQL::MySQL()+0x769
083f4c73 +0x0af:  mov    (%eax),%eax
083f4c75 +0x0b1:  mov    %eax,(%esp)
083f4c78 +0x0b4:  call   083f3ce4 <_ZN5MySQL4initEv>  ; MySQL::init()
083f4c7d +0x0b9:  xor    $0x1,%eax
083f4c80 +0x0bc:  test   %al,%al
083f4c82 +0x0be:  je     083f4c8e <+0xca>
083f4c84 +0x0c0:  mov    $0x0,%eax
083f4c89 +0x0c5:  jmp    083f4d28 <+0x164>
083f4c8e +0x0ca:  mov    0x8(%ebp),%eax
083f4c91 +0x0cd:  lea    0x20(%eax),%edx
083f4c94 +0x0d0:  lea    0x20(%ebp),%eax
083f4c97 +0x0d3:  mov    %eax,0x4(%esp)
083f4c9b +0x0d7:  mov    %edx,(%esp)
083f4c9e +0x0da:  call   083f591c <_GLOBAL__I__ZN5MySQLC2Ev+0x61d>  ; global constructors keyed to MySQL::MySQL()+0x61d
083f4ca3 +0x0df:  lea    0xc(%ebp),%edx
083f4ca6 +0x0e2:  mov    %edx,0x4(%esp)
083f4caa +0x0e6:  mov    %eax,(%esp)
083f4cad +0x0e9:  call   083f5a68 <_GLOBAL__I__ZN5MySQLC2Ev+0x769>  ; global constructors keyed to MySQL::MySQL()+0x769
083f4cb2 +0x0ee:  mov    (%eax),%eax
083f4cb4 +0x0f0:  mov    0x1c(%ebp),%edx
083f4cb7 +0x0f3:  mov    %edx,0x10(%esp)
083f4cbb +0x0f7:  mov    0x18(%ebp),%edx
083f4cbe +0x0fa:  mov    %edx,0xc(%esp)
083f4cc2 +0x0fe:  mov    0x14(%ebp),%edx
083f4cc5 +0x101:  mov    %edx,0x8(%esp)
083f4cc9 +0x105:  mov    0x10(%ebp),%edx
083f4ccc +0x108:  mov    %edx,0x4(%esp)
083f4cd0 +0x10c:  mov    %eax,(%esp)
083f4cd3 +0x10f:  call   083f3e9e <_ZN5MySQL4openEPcS0_S0_S0_>  ; MySQL::open(char*, char*, char*, char*)
083f4cd8 +0x114:  xor    $0x1,%eax
083f4cdb +0x117:  test   %al,%al
083f4cdd +0x119:  je     083f4ce6 <+0x122>
083f4cdf +0x11b:  mov    $0x0,%eax
083f4ce4 +0x120:  jmp    083f4d28 <+0x164>
083f4ce6 +0x122:  mov    $0x1,%eax
083f4ceb +0x127:  jmp    083f4d28 <+0x164>
083f4ced +0x129:  mov    0x8(%ebp),%eax
083f4cf0 +0x12c:  mov    (%eax),%edx
083f4cf2 +0x12e:  mov    0xc(%ebp),%eax
083f4cf5 +0x131:  imul   $0x4208c,%eax,%eax
083f4cfb +0x137:  add    %eax,%edx
083f4cfd +0x139:  mov    0x1c(%ebp),%eax
083f4d00 +0x13c:  mov    %eax,0x10(%esp)
083f4d04 +0x140:  mov    0x18(%ebp),%eax
083f4d07 +0x143:  mov    %eax,0xc(%esp)
083f4d0b +0x147:  mov    0x14(%ebp),%eax
083f4d0e +0x14a:  mov    %eax,0x8(%esp)
083f4d12 +0x14e:  mov    0x10(%ebp),%eax
083f4d15 +0x151:  mov    %eax,0x4(%esp)
083f4d19 +0x155:  mov    %edx,(%esp)
083f4d1c +0x158:  call   083f3e9e <_ZN5MySQL4openEPcS0_S0_S0_>  ; MySQL::open(char*, char*, char*, char*)
083f4d21 +0x15d:  mov    %al,-0x9(%ebp)
083f4d24 +0x160:  movzbl -0x9(%ebp),%eax
083f4d28 +0x164:  add    $0x34,%esp
083f4d2b +0x167:  pop    %ebx
083f4d2c +0x168:  pop    %ebp
083f4d2d +0x169:  ret
```

## 反编译 C

```c
// DBMgr::Open @ 0x83f4bc4

/* DBMgr::Open(ENUM_DB_HANDLE_IDX, char*, char*, char*, char*, ENUM_SERVER_GROUP) */

undefined1 __thiscall
DBMgr::Open(DBMgr *this,int param_2,char *param_3,char *param_4,char *param_5,char *param_6,
           int param_7)

{
  char cVar1;
  undefined1 uVar2;
  map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
  *pmVar3;
  int *piVar4;
  MySQL *this_00;
  undefined4 *puVar5;
  
  if (param_7 == 0) {
    uVar2 = MySQL::open((MySQL *)(*(int *)this + param_2 * 0x4208c),param_3,param_4,param_5,param_6)
    ;
  }
  else {
    pmVar3 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
              *)std::
                map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                              *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_7);
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
                                *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_7);
      puVar5 = (undefined4 *)
               std::
               map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
               ::operator[](pmVar3,(ENUM_DB_HANDLE_IDX *)&param_2);
      *puVar5 = this_00;
      pmVar3 = (map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                *)std::
                  map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                  ::operator[]((map<ENUM_SERVER_GROUP,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,std::map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>>>>
                                *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_7);
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
                                  *)(this + 0x20),(ENUM_SERVER_GROUP *)&param_7);
        puVar5 = (undefined4 *)
                 std::
                 map<ENUM_DB_HANDLE_IDX,MySQL*,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,MySQL*>>>
                 ::operator[](pmVar3,(ENUM_DB_HANDLE_IDX *)&param_2);
        cVar1 = MySQL::open((MySQL *)*puVar5,param_3,param_4,param_5,param_6);
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
