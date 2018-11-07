typedef struct image_s {
    int width, height, stride, dvd_mode;
    int subx1, suby1, subx2, suby2;
    long long in, out;
    uint8_t *buffer;
} image_t;

typedef struct eventlist_s {
    int size, nmemb;
    image_t **events;
} eventlist_t;

eventlist_t *render_subs(char *subfile, int frame_w, int frame_h,
                         int frame_d, int fps, int dvd_mode);
