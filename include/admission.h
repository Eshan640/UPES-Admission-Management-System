#ifndef ADMISSION_H
#define ADMISSION_H

int run_admission_flow_and_maybe_save(const char *savefile);
void save_record_to_file(const char *filename,
                         const char *name,
                         const char *mobile,
                         const char *school,
                         const char *course);
void view_saved_records(const char *filename);

#endif /* ADMISSION_H */
