# ARAD__Arad_Dispatcher

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## db_dispatch

```asm
// === 0818e84c ARAD::Arad_Dispatcher::db_dispatch  [0x0818e84c-0x818e855] ===
 818e84c:	55                   	push   %ebp
 818e84d:	89 e5                	mov    %esp,%ebp
 818e84f:	b8 00 00 00 00       	mov    $0x0,%eax
 818e854:	5d                   	pop    %ebp
 818e855:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher::db_dispatch @ 0x818e84c

/* ARAD::Arad_Dispatcher::db_dispatch(int, int, Stream*) */

undefined4 ARAD::Arad_Dispatcher::db_dispatch(int param_1,int param_2,Stream *param_3)

{
  return 0;
}

```

---

## dispathc_code

```asm
// === 0818e898 ARAD::Arad_Dispatcher::dispathc_code  [0x0818e898-0x818e8a2] ===
 818e898:	55                   	push   %ebp
 818e899:	89 e5                	mov    %esp,%ebp
 818e89b:	8b 45 08             	mov    0x8(%ebp),%eax
 818e89e:	8b 40 04             	mov    0x4(%eax),%eax
 818e8a1:	5d                   	pop    %ebp
 818e8a2:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher::dispathc_code @ 0x818e898

/* ARAD::Arad_Dispatcher::dispathc_code() */

undefined4 __thiscall ARAD::Arad_Dispatcher::dispathc_code(Arad_Dispatcher *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## inter_dispatch

```asm
// === 0818e856 ARAD::Arad_Dispatcher::inter_dispatch  [0x0818e856-0x818e85f] ===
 818e856:	55                   	push   %ebp
 818e857:	89 e5                	mov    %esp,%ebp
 818e859:	b8 00 00 00 00       	mov    $0x0,%eax
 818e85e:	5d                   	pop    %ebp
 818e85f:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher::inter_dispatch @ 0x818e856

/* ARAD::Arad_Dispatcher::inter_dispatch(CUser*, char*, int) */

undefined4 ARAD::Arad_Dispatcher::inter_dispatch(CUser *param_1,char *param_2,int param_3)

{
  return 0;
}

```

---

## register_dispatcher

```asm
// === 0818e860 ARAD::Arad_Dispatcher::register_dispatcher  [0x0818e860-0x818e87b] ===
 818e860:	55                   	push   %ebp
 818e861:	89 e5                	mov    %esp,%ebp
 818e863:	83 ec 18             	sub    $0x18,%esp
 818e866:	e8 d9 00 00 00       	call   818e944 <_ZN14GlobalInstanceIN4ARAD23Arad_Dispatcher_ManagerEE4instEv>
 818e86b:	8b 55 0c             	mov    0xc(%ebp),%edx
 818e86e:	89 54 24 04          	mov    %edx,0x4(%esp)
 818e872:	89 04 24             	mov    %eax,(%esp)
 818e875:	e8 1e 16 00 00       	call   818fe98 <_ZN4ARAD23Arad_Dispatcher_Manager19register_dispatcherEPNS_15Arad_DispatcherE>
 818e87a:	c9                   	leave
 818e87b:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher::register_dispatcher @ 0x818e860

/* ARAD::Arad_Dispatcher::register_dispatcher(ARAD::Arad_Dispatcher*) */

void __thiscall
ARAD::Arad_Dispatcher::register_dispatcher(Arad_Dispatcher *this,Arad_Dispatcher *param_1)

{
  Arad_Dispatcher_Manager *this_00;
  
  this_00 = (Arad_Dispatcher_Manager *)GlobalInstance<ARAD::Arad_Dispatcher_Manager>::inst();
  Arad_Dispatcher_Manager::register_dispatcher(this_00,param_1);
  return;
}

```

---

## unregister_dispatcher

```asm
// === 0818e87c ARAD::Arad_Dispatcher::unregister_dispatcher  [0x0818e87c-0x818e897] ===
 818e87c:	55                   	push   %ebp
 818e87d:	89 e5                	mov    %esp,%ebp
 818e87f:	83 ec 18             	sub    $0x18,%esp
 818e882:	e8 bd 00 00 00       	call   818e944 <_ZN14GlobalInstanceIN4ARAD23Arad_Dispatcher_ManagerEE4instEv>
 818e887:	8b 55 0c             	mov    0xc(%ebp),%edx
 818e88a:	89 54 24 04          	mov    %edx,0x4(%esp)
 818e88e:	89 04 24             	mov    %eax,(%esp)
 818e891:	e8 40 16 00 00       	call   818fed6 <_ZN4ARAD23Arad_Dispatcher_Manager21unregister_dispatcherEi>
 818e896:	c9                   	leave
 818e897:	c3                   	ret

```

```c
// ARAD::Arad_Dispatcher::unregister_dispatcher @ 0x818e87c

/* ARAD::Arad_Dispatcher::unregister_dispatcher(int) */

void __thiscall ARAD::Arad_Dispatcher::unregister_dispatcher(Arad_Dispatcher *this,int param_1)

{
  Arad_Dispatcher_Manager *this_00;
  
  this_00 = (Arad_Dispatcher_Manager *)GlobalInstance<ARAD::Arad_Dispatcher_Manager>::inst();
  Arad_Dispatcher_Manager::unregister_dispatcher(this_00,param_1);
  return;
}

```

